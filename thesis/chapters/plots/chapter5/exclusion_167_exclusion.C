void exclusion_167_exclusion()
{
//=========Macro generated from canvas: Exclusion_canvas_imass/
//=========  (Thu May 14 11:25:07 2020) by ROOT version 6.16/00
   TCanvas *Exclusion_canvas_imass = new TCanvas("Exclusion_canvas_imass", "",1920,64,1920,1016);
   Exclusion_canvas_imass->SetHighLightColor(2);
   Exclusion_canvas_imass->Range(0.0009,-3.874412e+10,0.0015,7.116433e+11);
   Exclusion_canvas_imass->SetFillColor(0);
   Exclusion_canvas_imass->SetBorderMode(0);
   Exclusion_canvas_imass->SetBorderSize(2);
   Exclusion_canvas_imass->SetGridx();
   Exclusion_canvas_imass->SetGridy();
   Exclusion_canvas_imass->SetFrameBorderMode(0);
   Exclusion_canvas_imass->SetFrameBorderMode(0);
   
   Double_t imass_exclusion_plot_fx1001[9] = {
   0.001,
   0.00104,
   0.00109,
   0.00113,
   0.00118,
   0.00127,
   0.00131,
   0.00136,
   0.0014};
   Double_t imass_exclusion_plot_fy1001[9] = {
   4.308317e+10,
   5.347773e+10,
   6.965424e+10,
   8.614711e+10,
   1.193187e+11,
   2.090272e+11,
   2.804902e+11,
   3.977408e+11,
   5.421353e+11};
   Double_t imass_exclusion_plot_fex1001[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t imass_exclusion_plot_fey1001[9] = {
   2.755802e+09,
   3.966537e+09,
   6.176735e+09,
   8.817238e+09,
   1.500017e+10,
   3.743558e+10,
   6.000214e+10,
   1.054949e+11,
   4.026223e+10};
   TGraphErrors *gre = new TGraphErrors(9,imass_exclusion_plot_fx1001,imass_exclusion_plot_fy1001,imass_exclusion_plot_fex1001,imass_exclusion_plot_fey1001);
   gre->SetName("imass_exclusion_plot");
   gre->SetTitle("imass MeV exclusion plot");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_16dO7_exclusion_plot1001 = new TH1F("Graph_16dO7_exclusion_plot1001","imass MeV exclusion plot",100,0.00096,0.00144);
   Graph_16dO7_exclusion_plot1001->SetMinimum(3.629463e+10);
   Graph_16dO7_exclusion_plot1001->SetMaximum(6.366046e+11);
   Graph_16dO7_exclusion_plot1001->SetDirectory(0);
   Graph_16dO7_exclusion_plot1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_16dO7_exclusion_plot1001->SetLineColor(ci);
   Graph_16dO7_exclusion_plot1001->GetXaxis()->SetTitle("#epsilon");
   Graph_16dO7_exclusion_plot1001->GetXaxis()->SetLabelFont(42);
   Graph_16dO7_exclusion_plot1001->GetXaxis()->SetLabelSize(0.035);
   Graph_16dO7_exclusion_plot1001->GetXaxis()->SetTitleSize(0.035);
   Graph_16dO7_exclusion_plot1001->GetXaxis()->SetTitleOffset(1);
   Graph_16dO7_exclusion_plot1001->GetXaxis()->SetTitleFont(42);
   Graph_16dO7_exclusion_plot1001->GetYaxis()->SetTitle("EOTs to probe the X17");
   Graph_16dO7_exclusion_plot1001->GetYaxis()->SetLabelFont(42);
   Graph_16dO7_exclusion_plot1001->GetYaxis()->SetLabelSize(0.035);
   Graph_16dO7_exclusion_plot1001->GetYaxis()->SetTitleSize(0.035);
   Graph_16dO7_exclusion_plot1001->GetYaxis()->SetTitleFont(42);
   Graph_16dO7_exclusion_plot1001->GetZaxis()->SetLabelFont(42);
   Graph_16dO7_exclusion_plot1001->GetZaxis()->SetLabelSize(0.035);
   Graph_16dO7_exclusion_plot1001->GetZaxis()->SetTitleSize(0.035);
   Graph_16dO7_exclusion_plot1001->GetZaxis()->SetTitleOffset(1);
   Graph_16dO7_exclusion_plot1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_16dO7_exclusion_plot1001);
   
   
   TF1 *expo1002 = new TF1("expo","expo",0.00096,0.00144, TF1::EAddToList::kNo);
   expo1002->SetFillColor(19);
   expo1002->SetFillStyle(0);
   expo1002->SetLineColor(2);
   expo1002->SetLineWidth(2);
   expo1002->SetChisquare(2.504507);
   expo1002->SetNDF(7);
   expo1002->GetXaxis()->SetLabelFont(42);
   expo1002->GetXaxis()->SetLabelSize(0.035);
   expo1002->GetXaxis()->SetTitleSize(0.035);
   expo1002->GetXaxis()->SetTitleOffset(1);
   expo1002->GetXaxis()->SetTitleFont(42);
   expo1002->GetYaxis()->SetLabelFont(42);
   expo1002->GetYaxis()->SetLabelSize(0.035);
   expo1002->GetYaxis()->SetTitleSize(0.035);
   expo1002->GetYaxis()->SetTitleFont(42);
   expo1002->SetParameter(0,18.10581);
   expo1002->SetParError(0,0.2659423);
   expo1002->SetParLimits(0,0,0);
   expo1002->SetParameter(1,6329.996);
   expo1002->SetParError(1,231.3652);
   expo1002->SetParLimits(1,0,0);
   expo1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(expo1002);
   
   TPaveStats *ptstats = new TPaveStats(0.1663191,0.5866935,0.5260688,0.7469758,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.505 / 7");
   ptstats_LaTex = ptstats->AddText("Constant = 18.11 #pm 0.2659 ");
   ptstats_LaTex = ptstats->AddText("Slope    =  6330 #pm 231.4 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.2953161,0.9339831,0.7046839,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->Draw();
   TGaxis *gaxis = new TGaxis(0.00144,3.629463e+10,0.00144,6.366046e+11,4.536829,79.57557,510,"+L");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.04);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(632);
   gaxis->SetTitleFont(62);
   gaxis->SetTitle("Days to probe the anomaly");

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLabelColor(ci);

   ci = TColor::GetColor("#ff0000");
   gaxis->SetLineColor(ci);
   gaxis->Draw();
   TLine *line = new TLine(0.0014,3.629463e+10,0.0014,6.366046e+11);

   ci = TColor::GetColor("#009900");
   line->SetLineColor(ci);
   line->SetLineStyle(8);
   line->SetLineWidth(2);
   line->Draw();
   Exclusion_canvas_imass->Modified();
   Exclusion_canvas_imass->cd();
   Exclusion_canvas_imass->SetSelected(Exclusion_canvas_imass);
}
