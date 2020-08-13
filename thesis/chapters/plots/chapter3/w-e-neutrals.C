{
  gROOT->Reset();
  gROOT->ProcessLine(".x rootlogon.C");
  gROOT->ForceStyle();

  TFile myfile("hist_W0sft.root");
  TFile myfile1("hist_W_all.root");
  TFile myfile2("hist_W0_all.root");

  TH1D* hDATA = (TH1D*)myfile.Get("eweplot");
  TH1D* hDATA1 = (TH1D*)myfile1.Get("eweplot");
  TH1D* hDATA2 = (TH1D*)myfile2.Get("eweplot");  

  c1 = new TCanvas("w-e-neutrals"," ",200,10,900,600);


  //SHORTCUT FOR PARAMETERS
  const Double_t markersize = 2.;
  const UInt_t markerstyle2017 = 32;
  const UInt_t markerstyle2018 = 21;

  const Double_t WCALrange = 120;
  const Double_t ECALrange = 170;
  const Double_t LegendTextSize = 0.041;


  //W0 -- 2018 (NEUTRAL)
  hDATA->SetStats(false);
  hDATA->SetTitle("");
//  hDATA->SetTitleOffset(2., "X");
//  hDATA->SetTitleOffset(2., "Y");
  hDATA->SetXTitle("Energy in WCAL [GeV]");
  hDATA->SetYTitle("Energy in ECAL [GeV]");

  hDATA->SetMarkerStyle(23);  
  hDATA->SetMarkerSize(2);
  hDATA->SetMarkerColor(1);

  hDATA->SetAxisRange(0., ECALrange, "Y");
  hDATA->SetAxisRange(0., WCALrange, "X");

  //W all --- 2017 (SIGNAL)
  hDATA1->SetStats(false);
  hDATA1->SetTitle("");
  hDATA1->SetTitleOffset(2., "X");
  hDATA1->SetTitleOffset(2., "Y");
  hDATA1->SetXTitle("Energy in WCAL [GeV]");
  hDATA1->SetYTitle("Energy in ECAL [GeV]");

  hDATA1->SetMarkerStyle(22);
  hDATA1->SetMarkerSize(4);
  hDATA1->SetMarkerColor(2);


  hDATA1->SetAxisRange(0., ECALrange, "Y");
  hDATA1->SetAxisRange(0., WCALrange, "X");

  //W0  ---- 2017 (NEUTRAL)
  hDATA2->SetStats(false);
  hDATA2->SetTitle("");
  hDATA2->SetXTitle("Energy in WCAL [GeV]");
  hDATA2->SetYTitle("Energy in ECAL [GeV]");

  hDATA2->SetMarkerStyle(markerstyle2017);
  hDATA2->SetMarkerSize(markersize);
  hDATA2->SetMarkerColor(1);

  hDATA2->SetAxisRange(0., ECALrange, "Y");
  hDATA2->SetAxisRange(0., WCALrange, "X");

  hDATA->Draw();
  hDATA1->Draw("same");
  hDATA2->Draw("same");

  // Define shaded area of the signal box --- 2018
  const Int_t N = 2;
  Double_t xx[N], yLow[N], yUp[N];

  for (int i = 0; i < N; i++) {
    xx[i] = 105. * i;
    yLow[i] = -xx[i] + 135.;
    yUp[i] = -xx[i] + 165.;
  }

  TGraph* grshade2018 = new TGraph(2*N);
  for (int i = 0; i < N; i++) {
    grshade2018->SetPoint(i, xx[i], yUp[i]);
    grshade2018->SetPoint(N+i, xx[N-i-1], yLow[N-i-1]);
  }
  grshade2018->SetFillStyle(1001); // solid fill
  grshade2018->SetFillColor(34);
  grshade2018->Draw("f");

  //REMOVE SIGNAL EVENTS THAT DO NOT PASS SHOWER PROFILE CUT
  if(true)
   {
    for (int ix = 1; ix <= 70; ix++) {
     for (int iy = 1; iy <= 70; iy++) {
      int ip1=1; // remove events in the signal box that do not pass the shower profile cut
      int ip2=1;
      int ip3=1;
      double esum = 2.*(float)ix - 1. + 2.*(float)iy - 1.;
      if(esum > 89. && esum < 111.) {
       if( (fabs(2.*(float)ix - 1. - 22.14) > 1.1) || (fabs(2.*(float)iy - 1. - 66.79) > 1.1) ) ip1 = 0;
       if( (fabs(2.*(float)ix - 1. - 66.69) > 1.1) || (fabs(2.*(float)iy - 1. - 32.42) > 1.1) ) ip2 = 0;
       if( (fabs(2.*(float)ix - 1. - 46.33) > 1.1) || (fabs(2.*(float)iy - 1. - 47.71) > 1.1) ) ip3 = 0;
       if(!ip1 && !ip2 && !ip3) hDATA2->SetBinContent(ix, iy, 0.);
      }
      if( (2.*(float)iy-1.) < 6. ) {
        hDATA2->SetBinContent(ix, iy, 0.); // remove events with ECAL < 6 GeV
        hDATA->SetBinContent(ix, iy, 0.); // remove events with ECAL < 6 GeV
      }
     }
    }
   }

  // DEFINE SIGNAL BOX 2017
  for (int i = 0; i < N; i++) {
    xx[i] = 70. * i;
    yLow[i] = -xx[i] + 90.;
    yUp[i] = -xx[i] + 110.;
  }

  TGraph* grshade2017 = new TGraph(2*N);
  for (int i = 0; i < N; i++) {
    grshade2017->SetPoint(i, xx[i], yUp[i]);
    grshade2017->SetPoint(N+i, xx[N-i-1], yLow[N-i-1]);
  }
  grshade2017->SetFillStyle(1001); // solid fill
  grshade2017->SetFillColor(18);
  grshade2017->Draw("f");  
  
  
  // re-plot data points on top of signal box area
  hDATA->Draw("SAME");
  hDATA1->Draw("SAME");
  hDATA2->Draw("SAME");

  //LEGEND
  //auto legend = new TLegend(0.599, 0.700, 0.899, 0.900, NULL, "brNDC");
  auto legend = new TLegend(0.47, 0.65, 0.87, 0.88, NULL, "brNDC");
  //DATA
  TLegendEntry* entry2= legend->AddEntry(hDATA1, "signal-like events (2017)", "P");
  TLegendEntry* entry3= legend->AddEntry(hDATA2, "neutral events      (2017)", "P");
  TLegendEntry* entry1= legend->AddEntry(hDATA,  "neutral events      (2018)", "P");  
  //SIGNAL REGION
  TLegendEntry* entry5= legend->AddEntry(grshade2017, "signal region        (2017)", "F");  
  TLegendEntry* entry4= legend->AddEntry(grshade2018, "signal region        (2018)", "F");
  //set filmarkersize
  entry1->SetFillColor(0);
  entry2->SetFillColor(0);
  entry3->SetFillColor(0);
  entry4->SetFillColor(0);
  entry5->SetFillColor(0);
  
  entry1->SetFillStyle(1001);
  entry2->SetFillStyle(1001);
  entry3->SetFillStyle(1001);
  entry4->SetFillStyle(1001);
  entry5->SetFillStyle(1001);
  //set full
  legend->SetTextSize(LegendTextSize);
  legend->SetFillColor(0);
  legend->SetLineColor(0);
  legend->SetFillStyle(1001);  
  gROOT->ForceStyle();
  
  


  //DRAW
  legend->Draw("same");
  
  // show grid lines
  c1->SetGrid(1);
  // reduce grid lines width for .pdf
  gStyle->SetLineScalePS(1);

  //setticks
  c1->SetTickx(1);
  c1->SetTicky(1);
  
  // redraw axis ticks on top of filled area
  c1->RedrawAxis("");

  //print
  c1->Print("w-e-neutrals.png");
  c1->Print("w-e-neutrals.pdf");  

}
