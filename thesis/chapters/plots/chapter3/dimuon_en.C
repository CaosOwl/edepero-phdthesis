void dimuon_en()
{
//=========Macro generated from canvas: wcalChisq_bkg_comp2/
//=========  (Tue Mar 17 18:18:11 2020) by ROOT version 6.16/00
   TCanvas *wcalChisq_bkg_comp2 = new TCanvas("wcalChisq_bkg_comp2", "",1920,64,1745,1016);
   wcalChisq_bkg_comp2->SetHighLightColor(2);
   wcalChisq_bkg_comp2->Range(-11.25,-0.003514684,101.25,0.03163215);
   wcalChisq_bkg_comp2->SetFillColor(0);
   wcalChisq_bkg_comp2->SetBorderMode(0);
   wcalChisq_bkg_comp2->SetBorderSize(2);
   wcalChisq_bkg_comp2->SetFrameBorderMode(0);
   wcalChisq_bkg_comp2->SetFrameBorderMode(0);
   
   THStack *wcalChisq_bkg_comp = new THStack();
   wcalChisq_bkg_comp->SetName("wcalChisq_bkg_comp");
   wcalChisq_bkg_comp->SetTitle("wcalChisq_bkg comparison");
   
   TH1F *wcalChisq_bkg_comp_stack_1_stack_1_stack_1 = new TH1F("wcalChisq_bkg_comp_stack_1_stack_1_stack_1","wcalChisq_bkg comparison",200,0,200);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->SetMinimum(0);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->SetMaximum(0.02811747);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->SetDirectory(0);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->SetLineColor(ci);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetXaxis()->SetTitle("Energy deposited in the active target [GeV]");
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetXaxis()->SetRange(1,90);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetXaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetXaxis()->SetTitleSize(0.05);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(0.81);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetYaxis()->SetTitle("Frequency [a.u.]");
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetYaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetYaxis()->SetTitleSize(0.05);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetYaxis()->SetTitleOffset(0.9);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetZaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetZaxis()->SetTitleSize(0.035);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   wcalChisq_bkg_comp_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   wcalChisq_bkg_comp->SetHistogram(wcalChisq_bkg_comp_stack_1_stack_1_stack_1);
   
   
   TH1F *wcalChisq_bkg_stack_1_stack_1_stack_1 = new TH1F("wcalChisq_bkg_stack_1_stack_1_stack_1","wcal energy",200,0,200);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(1,0.0005355708);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(2,0.0001785236);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(3,0.0006248326);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(4,0.001338927);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(5,0.001160403);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(6,0.000892618);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(7,0.001160403);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(8,0.002142283);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(9,0.001785236);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(10,0.002767116);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(11,0.001874498);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(12,0.002767116);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(13,0.003570472);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(14,0.002053021);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(15,0.002856378);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(16,0.002142283);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(17,0.003213425);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(18,0.003748996);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(19,0.003302687);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(20,0.003213425);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(21,0.005355708);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(22,0.00392752);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(23,0.004016781);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(24,0.004820137);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(25,0.004373828);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(26,0.004284567);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(27,0.005177184);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(28,0.004998661);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(29,0.004820137);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(30,0.004909399);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(31,0.004106043);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(32,0.005802017);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(33,0.006159064);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(34,0.004998661);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(35,0.006069803);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(36,0.005623494);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(37,0.00642685);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(38,0.004909399);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(39,0.005980541);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(40,0.005980541);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(41,0.006605374);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(42,0.006605374);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(43,0.00740873);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(44,0.005177184);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(45,0.006873159);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(46,0.007140944);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(47,0.007497991);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(48,0.007676515);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(49,0.00740873);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(50,0.007051683);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(51,0.007230206);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(52,0.009193966);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(53,0.008747657);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(54,0.009104704);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(55,0.009551013);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(56,0.009640275);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(57,0.009551013);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(58,0.009283228);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(59,0.009461751);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(60,0.009908061);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(61,0.009729537);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(62,0.01178256);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(63,0.00937249);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(64,0.01213961);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(65,0.0109792);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(66,0.009908061);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(67,0.0116933);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(68,0.01213961);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(69,0.01106846);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(70,0.01321075);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(71,0.01312149);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(72,0.01374632);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(73,0.01526377);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(74,0.01356779);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(75,0.01338927);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(76,0.01437115);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(77,0.01508525);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(78,0.01508525);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(79,0.01713827);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(80,0.01463894);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(81,0.01660269);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(82,0.01669196);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(83,0.01678122);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(84,0.0177631);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(85,0.02151209);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(86,0.0189235);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(87,0.02097652);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(88,0.02008391);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(89,0.01874498);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(90,0.01865572);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(91,0.020798);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(92,0.02186914);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(93,0.02142283);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(94,0.02499331);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(95,0.02365438);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(96,0.02347586);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(97,0.02508257);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(98,0.02499331);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(99,0.02677854);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(100,0.024547);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinContent(101,0.01303222);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(1,0.0002186459);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(2,0.0001262353);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(3,0.0002361645);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(4,0.0003457095);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(5,0.000321838);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(6,0.0002822706);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(7,0.000321838);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(8,0.0004372918);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(9,0.0003991909);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(10,0.0004969887);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(11,0.000409049);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(12,0.0004969887);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(13,0.0005645412);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(14,0.0004280846);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(15,0.000504941);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(16,0.0004372918);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(17,0.0005355708);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(18,0.0005784826);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(19,0.0005429584);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(20,0.0005355708);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(21,0.000691419);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(22,0.0005920958);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(23,0.0005987864);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(24,0.0006559376);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(25,0.0006248326);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(26,0.0006184239);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(27,0.0006797977);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(28,0.0006679742);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(29,0.0006559376);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(30,0.0006619833);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(31,0.000605403);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(32,0.0007196517);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(33,0.0007414642);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(34,0.0006679742);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(35,0.0007360717);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(36,0.0007084936);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(37,0.0007574115);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(38,0.0006619833);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(39,0.0007306394);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(40,0.0007306394);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(41,0.0007678591);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(42,0.0007678591);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(43,0.0008132137);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(44,0.0006797977);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(45,0.0007832692);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(46,0.0007983819);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(47,0.000818098);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(48,0.0008277799);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(49,0.0008132137);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(50,0.0007933763);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(51,0.0008033562);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(52,0.0009059084);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(53,0.0008836468);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(54,0.0009015);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(55,0.0009233313);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(56,0.0009276359);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(57,0.0009233313);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(58,0.0009102954);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(59,0.0009190065);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(60,0.0009404315);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(61,0.0009319206);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(62,0.00102554);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(63,0.0009146613);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(64,0.001040963);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(65,0.0009899613);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(66,0.0009404315);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(67,0.001021648);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(68,0.001040963);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(69,0.0009939774);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(70,0.001085917);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(71,0.001082242);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(72,0.00110771);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(73,0.00116725);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(74,0.001100493);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(75,0.001093229);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(76,0.001132605);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(77,0.001160403);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(78,0.001160403);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(79,0.001236848);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(80,0.001143109);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(81,0.001217369);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(82,0.001220637);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(83,0.001223896);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(84,0.001259193);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(85,0.001385716);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(86,0.001299671);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(87,0.001368358);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(88,0.001338927);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(89,0.001293526);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(90,0.001290443);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(91,0.001362522);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(92,0.001397168);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(93,0.001382838);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(94,0.001493636);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(95,0.001453077);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(96,0.001447583);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(97,0.001496301);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(98,0.001493636);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(99,0.00154606);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(100,0.00148024);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetBinError(101,0.001078554);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetEntries(11203);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetDirectory(0);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetLineWidth(3);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetMarkerColor(4);
   wcalChisq_bkg_stack_1_stack_1_stack_1->SetMarkerStyle(20);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetXaxis()->SetTitle("Energy deposit in WCAL ");
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetXaxis()->SetLabelFont(42);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetXaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetXaxis()->SetTitleSize(0.035);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetXaxis()->SetTitleOffset(1);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetXaxis()->SetTitleFont(42);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetYaxis()->SetTitle("WCAL [GeV]Chisqfor background");
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetYaxis()->SetLabelFont(42);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetYaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetYaxis()->SetTitleSize(0.035);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetYaxis()->SetTitleFont(42);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetZaxis()->SetLabelFont(42);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetZaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetZaxis()->SetTitleSize(0.035);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetZaxis()->SetTitleOffset(1);
   wcalChisq_bkg_stack_1_stack_1_stack_1->GetZaxis()->SetTitleFont(42);
   wcalChisq_bkg_comp->Add(wcalChisq_bkg_stack_1_stack_1_stack_1,"E0");
   
   TH1F *wcalChisq_bkg_stack_2_stack_2_stack_2 = new TH1F("wcalChisq_bkg_stack_2_stack_2_stack_2","wcal energy",200,0,200);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(0,0.0001297859);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(1,0.0006489293);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(2,0.001687216);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(3,0.001427644);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(4,0.001946788);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(5,0.002336145);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(6,0.002725503);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(7,0.002725503);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(8,0.003374432);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(9,0.003893576);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(10,0.002725503);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(11,0.003114861);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(12,0.002985075);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(13,0.003374432);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(14,0.004023361);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(15,0.004153147);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(16,0.00532122);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(17,0.004412719);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(18,0.003504218);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(19,0.004282933);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(20,0.005580792);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(21,0.00532122);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(22,0.00376379);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(23,0.005580792);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(24,0.003893576);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(25,0.005451006);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(26,0.00532122);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(27,0.005970149);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(28,0.005191434);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(29,0.005580792);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(30,0.006099935);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(31,0.00532122);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(32,0.006619079);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(33,0.006359507);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(34,0.005580792);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(35,0.005061648);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(36,0.006099935);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(37,0.00687865);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(38,0.006489293);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(39,0.00687865);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(40,0.00687865);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(41,0.007268008);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(42,0.007916937);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(43,0.005191434);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(44,0.008306295);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(45,0.006359507);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(46,0.00843608);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(47,0.007397794);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(48,0.0101233);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(49,0.00843608);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(50,0.00843608);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(51,0.008955223);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(52,0.007657365);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(53,0.009604153);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(54,0.01142116);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(55,0.007268008);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(56,0.0101233);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(57,0.009344582);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(58,0.009604153);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(59,0.00999351);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(60,0.0110318);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(61,0.01077223);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(62,0.01245944);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(63,0.01310837);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(64,0.01181051);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(65,0.0128488);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(66,0.01258923);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(67,0.01297859);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(68,0.01207008);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(69,0.01362751);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(70,0.01142116);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(71,0.01401687);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(72,0.01025308);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(73,0.01492537);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(74,0.01349773);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(75,0.01570409);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(76,0.0128488);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(77,0.01349773);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(78,0.0164828);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(79,0.01726152);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(80,0.01544452);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(81,0.01661259);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(82,0.01609345);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(83,0.01453602);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(84,0.01972745);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(85,0.01570409);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(86,0.01479559);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(87,0.01622323);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(88,0.01804023);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(89,0.01817002);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(90,0.02024659);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(91,0.01829981);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(92,0.0173913);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(93,0.02206359);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(94,0.01920831);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(95,0.01998702);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(96,0.02154445);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(97,0.01894873);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(98,0.02180402);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(99,0.02115509);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(100,0.01907852);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinContent(101,0.01129137);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(0,0.0001297859);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(1,0.00029021);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(2,0.0004679495);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(3,0.000430451);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(4,0.0005026584);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(5,0.0005506347);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(6,0.0005947535);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(7,0.0005947535);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(8,0.0006617806);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(9,0.0007108664);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(10,0.0005947535);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(11,0.0006358182);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(12,0.0006224311);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(13,0.0006617806);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(14,0.000722617);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(15,0.0007341797);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(16,0.0008310349);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(17,0.0007567751);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(18,0.0006743871);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(19,0.000745563);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(20,0.0008510628);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(21,0.0008310349);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(22,0.0006989182);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(23,0.0008510628);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(24,0.0007108664);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(25,0.0008411085);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(26,0.0008310349);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(27,0.0008802505);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(28,0.0008208378);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(29,0.0008510628);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(30,0.000889767);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(31,0.0008310349);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(32,0.0009268564);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(33,0.000908501);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(34,0.0008510628);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(35,0.0008105124);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(36,0.000889767);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(37,0.0009448553);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(38,0.0009177246);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(39,0.0009448553);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(40,0.0009448553);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(41,0.0009712284);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(42,0.00101366);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(43,0.0008208378);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(44,0.001038287);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(45,0.000908501);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(46,0.001046367);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(47,0.0009798617);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(48,0.001146238);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(49,0.001046367);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(50,0.001046367);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(51,0.001078082);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(52,0.0009969041);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(53,0.00111646);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(54,0.001217499);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(55,0.0009712284);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(56,0.001146238);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(57,0.001101269);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(58,0.00111646);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(59,0.001138866);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(60,0.001196566);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(61,0.001182405);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(62,0.001271636);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(63,0.001304332);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(64,0.001238078);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(65,0.001291353);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(66,0.001278242);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(67,0.001297859);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(68,0.001251609);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(69,0.001329909);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(70,0.001217499);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(71,0.001348774);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(72,0.001153562);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(73,0.001391798);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(74,0.001323561);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(75,0.001427644);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(76,0.001291353);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(77,0.001323561);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(78,0.001462612);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(79,0.001496763);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(80,0.001415797);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(81,0.001468359);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(82,0.001445234);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(83,0.001373524);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(84,0.001600107);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(85,0.001427644);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(86,0.001385734);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(87,0.00145105);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(88,0.001530153);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(89,0.001535647);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(90,0.001621025);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(91,0.001541122);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(92,0.00150238);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(93,0.0016922);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(94,0.001578913);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(95,0.0016106);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(96,0.001672174);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(97,0.001568208);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(98,0.001682217);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(99,0.001656995);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(100,0.00157357);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetBinError(101,0.001210562);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetEntries(7706);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetDirectory(0);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetLineColor(2);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetLineWidth(3);
   wcalChisq_bkg_stack_2_stack_2_stack_2->SetMarkerStyle(20);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetXaxis()->SetTitle("Energy deposit in WCAL ");
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetXaxis()->SetLabelFont(42);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetXaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetXaxis()->SetTitleSize(0.035);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetXaxis()->SetTitleOffset(1);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetXaxis()->SetTitleFont(42);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetYaxis()->SetTitle("WCAL [GeV]Chisqfor background");
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetYaxis()->SetLabelFont(42);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetYaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetYaxis()->SetTitleSize(0.035);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetYaxis()->SetTitleFont(42);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetZaxis()->SetLabelFont(42);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetZaxis()->SetLabelSize(0.035);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetZaxis()->SetTitleSize(0.035);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetZaxis()->SetTitleOffset(1);
   wcalChisq_bkg_stack_2_stack_2_stack_2->GetZaxis()->SetTitleFont(42);
   wcalChisq_bkg_comp->Add(wcalChisq_bkg_stack_2_stack_2_stack_2,"HIST");
   wcalChisq_bkg_comp->Draw("nostack");

   wcalChisq_bkg_stack_2_stack_2_stack_2->Chi2Test(wcalChisq_bkg_stack_1_stack_1_stack_1,
                                                   "P"
                                                   );
   
   TPaveText *pt = new TPaveText(0.263639,0.9342405,0.736361,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt->Draw();
   wcalChisq_bkg_comp2->Modified();
   wcalChisq_bkg_comp2->cd();
   wcalChisq_bkg_comp2->SetSelected(wcalChisq_bkg_comp2);
}
