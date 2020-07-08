void exclusion_170_exclusion()
{
//=========Macro generated from canvas: Exclusion_canvas_imass/
//=========  (Thu May 14 11:27:09 2020) by ROOT version 6.16/00
   TCanvas *Exclusion_canvas_imass = new TCanvas("Exclusion_canvas_imass", "",1920,64,1920,1016);
   Exclusion_canvas_imass->SetHighLightColor(2);
   Exclusion_canvas_imass->Range(0.0009,-5.577657e+10,0.0015,9.181683e+11);
   Exclusion_canvas_imass->SetFillColor(0);
   Exclusion_canvas_imass->SetBorderMode(0);
   Exclusion_canvas_imass->SetBorderSize(2);
   Exclusion_canvas_imass->SetGridx();
   Exclusion_canvas_imass->SetGridy();
   Exclusion_canvas_imass->SetFrameBorderMode(0);
   Exclusion_canvas_imass->SetFrameBorderMode(0);
   
   Double_t imass_exclusion_plot_fx1004[9] = {
   0.001,
   0.00104,
   0.00109,
   0.00118,
   0.00122,
   0.00127,
   0.00131,
   0.00136,
   0.0014};
   Double_t imass_exclusion_plot_fy1004[9] = {
   4.965393e+10,
   6.164254e+10,
   7.952704e+10,
   1.370111e+11,
   1.828576e+11,
   2.654714e+11,
   3.480167e+11,
   5.114649e+11,
   6.895892e+11};
   Double_t imass_exclusion_plot_fex1004[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t imass_exclusion_plot_fey1004[9] = {
   3.411793e+09,
   4.909241e+09,
   8.325182e+09,
   1.845833e+10,
   2.943556e+10,
   5.367513e+10,
   8.300055e+10,
   1.536902e+11,
   6.077268e+10};
   TGraphErrors *gre = new TGraphErrors(9,imass_exclusion_plot_fx1004,imass_exclusion_plot_fy1004,imass_exclusion_plot_fex1004,imass_exclusion_plot_fey1004);
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
   
   TH1F *Graph_17dO0_exclusion_plot1004 = new TH1F("Graph_17dO0_exclusion_plot1004","imass MeV exclusion plot",100,0.00096,0.00144);
   Graph_17dO0_exclusion_plot1004->SetMinimum(4.161793e+10);
   Graph_17dO0_exclusion_plot1004->SetMaximum(8.207738e+11);
   Graph_17dO0_exclusion_plot1004->SetDirectory(0);
   Graph_17dO0_exclusion_plot1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_17dO0_exclusion_plot1004->SetLineColor(ci);
   Graph_17dO0_exclusion_plot1004->GetXaxis()->SetTitle("#epsilon");
   Graph_17dO0_exclusion_plot1004->GetXaxis()->SetLabelFont(42);
   Graph_17dO0_exclusion_plot1004->GetXaxis()->SetLabelSize(0.035);
   Graph_17dO0_exclusion_plot1004->GetXaxis()->SetTitleSize(0.035);
   Graph_17dO0_exclusion_plot1004->GetXaxis()->SetTitleOffset(1);
   Graph_17dO0_exclusion_plot1004->GetXaxis()->SetTitleFont(42);
   Graph_17dO0_exclusion_plot1004->GetYaxis()->SetTitle("EOTs to probe the X17");
   Graph_17dO0_exclusion_plot1004->GetYaxis()->SetLabelFont(42);
   Graph_17dO0_exclusion_plot1004->GetYaxis()->SetLabelSize(0.035);
   Graph_17dO0_exclusion_plot1004->GetYaxis()->SetTitleSize(0.035);
   Graph_17dO0_exclusion_plot1004->GetYaxis()->SetTitleFont(42);
   Graph_17dO0_exclusion_plot1004->GetZaxis()->SetLabelFont(42);
   Graph_17dO0_exclusion_plot1004->GetZaxis()->SetLabelSize(0.035);
   Graph_17dO0_exclusion_plot1004->GetZaxis()->SetTitleSize(0.035);
   Graph_17dO0_exclusion_plot1004->GetZaxis()->SetTitleOffset(1);
   Graph_17dO0_exclusion_plot1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_17dO0_exclusion_plot1004);
   
   
   TF1 *expo1005 = new TF1("expo","expo",0.00096,0.00144, TF1::EAddToList::kNo);
   expo1005->SetFillColor(19);
   expo1005->SetFillStyle(0);
   expo1005->SetLineColor(2);
   expo1005->SetLineWidth(2);
   expo1005->SetChisquare(2.607633);
   expo1005->SetNDF(7);
   expo1005->GetXaxis()->SetLabelFont(42);
   expo1005->GetXaxis()->SetLabelSize(0.035);
   expo1005->GetXaxis()->SetTitleSize(0.035);
   expo1005->GetXaxis()->SetTitleOffset(1);
   expo1005->GetXaxis()->SetTitleFont(42);
   expo1005->GetYaxis()->SetLabelFont(42);
   expo1005->GetYaxis()->SetLabelSize(0.035);
   expo1005->GetYaxis()->SetTitleSize(0.035);
   expo1005->GetYaxis()->SetTitleFont(42);
   expo1005->SetParameter(0,18.02839);
   expo1005->SetParError(0,0.3033342);
   expo1005->SetParLimits(0,0,0);
   expo1005->SetParameter(1,6547.549);
   expo1005->SetParError(1,264.9339);
   expo1005->SetParLimits(1,0,0);
   expo1005->SetParent(gre);
   gre->GetListOfFunctions()->Add(expo1005);
   
   TPaveStats *ptstats = new TPaveStats(0.166,0.572,0.526,0.732,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 2.608 / 7");
   ptstats_LaTex = ptstats->AddText("Constant = 18.03 #pm 0.3033 ");
   ptstats_LaTex = ptstats->AddText("Slope    =  6548 #pm 264.9 ");
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
   TGaxis *gaxis = new TGaxis(0.00144,4.161793e+10,0.00144,8.207738e+11,5.202241,102.5967,510,"+L");
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
   TLine *line = new TLine(0.0014,4.161793e+10,0.0014,8.207738e+11);

   ci = TColor::GetColor("#009900");
   line->SetLineColor(ci);
   line->SetLineStyle(8);
   line->SetLineWidth(2);
   line->Draw();
   Exclusion_canvas_imass->Modified();
   Exclusion_canvas_imass->cd();
   Exclusion_canvas_imass->SetSelected(Exclusion_canvas_imass);
}
