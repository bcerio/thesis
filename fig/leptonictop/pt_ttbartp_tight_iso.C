{
//=========Macro generated from canvas: c/c
//=========  (Mon Jul  7 00:45:29 2014) by ROOT version5.34/18
   TCanvas *c = new TCanvas("c", "c",0,0,1000,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-23.52941,-1.244294,123.5294,3.315276);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.08);
   c->SetRightMargin(0.3);
   c->SetTopMargin(0.05);
   c->SetBottomMargin(0.16);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack *mc_el_pt_1000_el_pt_1000 = new THStack();
   mc_el_pt_1000_el_pt_1000->SetName("mc_el_pt_1000_el_pt_1000");
   mc_el_pt_1000_el_pt_1000->SetTitle("el_pt_1000");
   mc_el_pt_1000_el_pt_1000->SetMaximum(764.1477);
   
   TH1F *mc_el_pt_1000_el_pt_1000_stack_1 = new TH1F("mc_el_pt_1000_el_pt_1000_stack_1","el_pt_1000",4,0,100);
   mc_el_pt_1000_el_pt_1000_stack_1->SetMinimum(0.3056591);
   mc_el_pt_1000_el_pt_1000_stack_1->SetMaximum(1222.636);
   mc_el_pt_1000_el_pt_1000_stack_1->SetDirectory(0);
   mc_el_pt_1000_el_pt_1000_stack_1->SetStats(0);
   mc_el_pt_1000_el_pt_1000_stack_1->SetLineWidth(2);
   mc_el_pt_1000_el_pt_1000_stack_1->SetMarkerStyle(20);
   mc_el_pt_1000_el_pt_1000_stack_1->SetMarkerSize(1.2);
   mc_el_pt_1000_el_pt_1000_stack_1->GetXaxis()->SetTitle("p_{T} [GeV]");
   mc_el_pt_1000_el_pt_1000_stack_1->GetXaxis()->SetLabelFont(42);
   mc_el_pt_1000_el_pt_1000_stack_1->GetXaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_el_pt_1000_stack_1->GetXaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_el_pt_1000_stack_1->GetXaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_el_pt_1000_stack_1->GetXaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000_stack_1->GetYaxis()->SetTitle("Entries");
   mc_el_pt_1000_el_pt_1000_stack_1->GetYaxis()->SetLabelFont(42);
   mc_el_pt_1000_el_pt_1000_stack_1->GetYaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_el_pt_1000_stack_1->GetYaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_el_pt_1000_stack_1->GetYaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_el_pt_1000_stack_1->GetYaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000_stack_1->GetZaxis()->SetLabelFont(42);
   mc_el_pt_1000_el_pt_1000_stack_1->GetZaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_el_pt_1000_stack_1->GetZaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_el_pt_1000_stack_1->GetZaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000->SetHistogram(mc_el_pt_1000_el_pt_1000_stack_1);
   
   
   TH1F *mc_el_pt_1000_WenuNp2_elmu_el_pt_1000 = new TH1F("mc_el_pt_1000_WenuNp2_elmu_el_pt_1000","W+jets",4,0,100);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->SetEntries(68);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->SetStats(0);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->SetFillColor(92);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->SetLineColor(ci);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->SetMarkerStyle(0);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetXaxis()->SetLabelFont(42);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetXaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetXaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetXaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetXaxis()->SetTitleFont(42);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetYaxis()->SetLabelFont(42);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetYaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetYaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetYaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetYaxis()->SetTitleFont(42);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetZaxis()->SetLabelFont(42);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetZaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetZaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_WenuNp2_elmu_el_pt_1000->GetZaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000->Add(mc_el_pt_1000_WenuNp2_elmu_el_pt_1000,"");
   
   TH1F *mc_el_pt_1000_WW_elmu_el_pt_1000 = new TH1F("mc_el_pt_1000_WW_elmu_el_pt_1000","Diboson",4,0,100);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetBinContent(2,0.3418951);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetBinContent(3,0.3065773);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetBinContent(4,0.2560298);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetBinError(2,0.5847179);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetBinError(3,0.5536942);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetBinError(4,0.5059939);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetEntries(39);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetStats(0);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetFillColor(5);

   ci = TColor::GetColor("#000099");
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetLineColor(ci);
   mc_el_pt_1000_WW_elmu_el_pt_1000->SetMarkerStyle(0);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetXaxis()->SetLabelFont(42);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetXaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetXaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetXaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetXaxis()->SetTitleFont(42);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetYaxis()->SetLabelFont(42);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetYaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetYaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetYaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetYaxis()->SetTitleFont(42);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetZaxis()->SetLabelFont(42);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetZaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetZaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_WW_elmu_el_pt_1000->GetZaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000->Add(mc_el_pt_1000_WW_elmu_el_pt_1000,"");
   
   TH1F *mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000 = new TH1F("mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000","Z+jets",4,0,100);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetBinContent(2,2.041703);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetBinContent(3,0.1162533);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetBinError(2,1.428882);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetBinError(3,0.3409594);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetEntries(60);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetStats(0);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetFillColor(95);

   ci = TColor::GetColor("#000099");
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetLineColor(ci);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->SetMarkerStyle(0);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetXaxis()->SetLabelFont(42);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetXaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetXaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetXaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetXaxis()->SetTitleFont(42);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetYaxis()->SetLabelFont(42);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetYaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetYaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetYaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetYaxis()->SetTitleFont(42);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetZaxis()->SetLabelFont(42);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetZaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetZaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000->GetZaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000->Add(mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000,"");
   
   TH1F *mc_el_pt_1000_ttbarother_elmu_el_pt_1000 = new TH1F("mc_el_pt_1000_ttbarother_elmu_el_pt_1000","t#bar{t} background",4,0,100);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetBinContent(2,3.937778);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetBinContent(3,2.019477);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetBinContent(4,2.020639);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetBinError(2,1.984383);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetBinError(3,1.421083);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetBinError(4,1.421492);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetEntries(297);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetStats(0);

   ci = TColor::GetColor("#00ff00");
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetLineColor(ci);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->SetMarkerStyle(0);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetXaxis()->SetLabelFont(42);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetXaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetXaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetXaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetXaxis()->SetTitleFont(42);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetYaxis()->SetLabelFont(42);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetYaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetYaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetYaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetYaxis()->SetTitleFont(42);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetZaxis()->SetLabelFont(42);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetZaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetZaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ttbarother_elmu_el_pt_1000->GetZaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000->Add(mc_el_pt_1000_ttbarother_elmu_el_pt_1000,"");
   
   TH1F *mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000 = new TH1F("mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000","t#bar{t}#rightarrowbb#nu#nue#mu",4,0,100);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetBinContent(2,756.4085);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetBinContent(3,445.4625);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetBinContent(4,380.8599);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetBinError(2,27.50288);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetBinError(3,21.10598);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetBinError(4,19.51563);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetEntries(54915);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetLineColor(ci);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->SetMarkerStyle(0);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetXaxis()->SetLabelFont(42);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetXaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetXaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetXaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetXaxis()->SetTitleFont(42);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetYaxis()->SetLabelFont(42);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetYaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetYaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetYaxis()->SetTitleOffset(0.75);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetYaxis()->SetTitleFont(42);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetZaxis()->SetLabelFont(42);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetZaxis()->SetLabelSize(0.05);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetZaxis()->SetTitleSize(0.05);
   mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000->GetZaxis()->SetTitleFont(42);
   mc_el_pt_1000_el_pt_1000->Add(mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000,"");
   mc_el_pt_1000_el_pt_1000->Draw("hist");
   
   data_el_pt_1000_el_pt_1000 = new THStack();
   data_el_pt_1000_el_pt_1000->SetName("data_el_pt_1000_el_pt_1000");
   data_el_pt_1000_el_pt_1000->SetTitle("el_pt_1000");
   data_el_pt_1000_el_pt_1000->SetMaximum(764.1477);
   
   TH1F *data_el_pt_1000_el_pt_1000_stack_2 = new TH1F("data_el_pt_1000_el_pt_1000_stack_2","el_pt_1000",4,0,100);
   data_el_pt_1000_el_pt_1000_stack_2->SetMinimum(0.3056591);
   data_el_pt_1000_el_pt_1000_stack_2->SetMaximum(1222.636);
   data_el_pt_1000_el_pt_1000_stack_2->SetDirectory(0);
   data_el_pt_1000_el_pt_1000_stack_2->SetStats(0);
   data_el_pt_1000_el_pt_1000_stack_2->SetLineWidth(2);
   data_el_pt_1000_el_pt_1000_stack_2->SetMarkerStyle(20);
   data_el_pt_1000_el_pt_1000_stack_2->SetMarkerSize(1.2);
   data_el_pt_1000_el_pt_1000_stack_2->GetXaxis()->SetLabelFont(42);
   data_el_pt_1000_el_pt_1000_stack_2->GetXaxis()->SetLabelSize(0.05);
   data_el_pt_1000_el_pt_1000_stack_2->GetXaxis()->SetTitleSize(0.05);
   data_el_pt_1000_el_pt_1000_stack_2->GetXaxis()->SetTitleOffset(0.75);
   data_el_pt_1000_el_pt_1000_stack_2->GetXaxis()->SetTitleFont(42);
   data_el_pt_1000_el_pt_1000_stack_2->GetYaxis()->SetLabelFont(42);
   data_el_pt_1000_el_pt_1000_stack_2->GetYaxis()->SetLabelSize(0.05);
   data_el_pt_1000_el_pt_1000_stack_2->GetYaxis()->SetTitleSize(0.05);
   data_el_pt_1000_el_pt_1000_stack_2->GetYaxis()->SetTitleOffset(0.75);
   data_el_pt_1000_el_pt_1000_stack_2->GetYaxis()->SetTitleFont(42);
   data_el_pt_1000_el_pt_1000_stack_2->GetZaxis()->SetLabelFont(42);
   data_el_pt_1000_el_pt_1000_stack_2->GetZaxis()->SetLabelSize(0.05);
   data_el_pt_1000_el_pt_1000_stack_2->GetZaxis()->SetTitleSize(0.05);
   data_el_pt_1000_el_pt_1000_stack_2->GetZaxis()->SetTitleFont(42);
   data_el_pt_1000_el_pt_1000->SetHistogram(data_el_pt_1000_el_pt_1000_stack_2);
   
   
   TH1F *data_el_pt_1000_AllData_elmu_el_pt_1000 = new TH1F("data_el_pt_1000_AllData_elmu_el_pt_1000","Data",4,0,100);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetBinContent(2,737);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetBinContent(3,417);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetBinContent(4,388);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetBinError(2,27.14774);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetBinError(3,20.42058);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetBinError(4,19.69772);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetEntries(1546);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetStats(0);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetFillStyle(0);
   data_el_pt_1000_AllData_elmu_el_pt_1000->SetMarkerStyle(8);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetXaxis()->SetLabelFont(42);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetXaxis()->SetLabelSize(0.05);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetXaxis()->SetTitleSize(0.05);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetXaxis()->SetTitleOffset(0.75);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetXaxis()->SetTitleFont(42);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetYaxis()->SetLabelFont(42);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetYaxis()->SetLabelSize(0.05);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetYaxis()->SetTitleSize(0.05);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetYaxis()->SetTitleOffset(0.75);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetYaxis()->SetTitleFont(42);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetZaxis()->SetLabelFont(42);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetZaxis()->SetLabelSize(0.05);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetZaxis()->SetTitleSize(0.05);
   data_el_pt_1000_AllData_elmu_el_pt_1000->GetZaxis()->SetTitleFont(42);
   data_el_pt_1000_el_pt_1000->Add(data_el_pt_1000_AllData_elmu_el_pt_1000,"");
   data_el_pt_1000_el_pt_1000->Draw("esame");
   
   TLegend *leg = new TLegend(0.7,0.4,0.99,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("mc_el_pt_1000_WenuNp2_elmu_el_pt_1000","W+jets","lpf");
   entry->SetFillColor(92);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mc_el_pt_1000_WW_elmu_el_pt_1000","Diboson","lpf");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mc_el_pt_1000_ZmumuNp0_elmu_el_pt_1000","Z+jets","lpf");
   entry->SetFillColor(95);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mc_el_pt_1000_ttbarother_elmu_el_pt_1000","t#bar{t} background","lpf");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("mc_el_pt_1000_ttbarelmu_elmu_el_pt_1000","t#bar{t}#rightarrowbb#nu#nue#mu","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("data_el_pt_1000_AllData_elmu_el_pt_1000","Data","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
