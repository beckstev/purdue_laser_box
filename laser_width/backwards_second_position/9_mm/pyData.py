import ROOT as root

qMap_Ag_C0_V0 = root.TProfile2D("qMap_Ag_C0_V0","qMap_Ag_C0 (V0)",52,0,52,80,0,80,0,0);
qMap_Ag_C0_V0.SetBinEntries(3424,1076);
qMap_Ag_C0_V0.SetBinEntries(3425,14404);
qMap_Ag_C0_V0.SetBinEntries(3478,14487);
qMap_Ag_C0_V0.SetBinEntries(3479,86008);
qMap_Ag_C0_V0.SetBinEntries(3480,9274);
qMap_Ag_C0_V0.SetBinEntries(3532,14563);
qMap_Ag_C0_V0.SetBinEntries(3533,102122);
qMap_Ag_C0_V0.SetBinEntries(3534,4615);
qMap_Ag_C0_V0.SetBinEntries(3587,2372);
qMap_Ag_C0_V0.SetBinContent(3424,52802);
qMap_Ag_C0_V0.SetBinContent(3425,1191282);
qMap_Ag_C0_V0.SetBinContent(3478,1371008);
qMap_Ag_C0_V0.SetBinContent(3479,4.572218e+07);
qMap_Ag_C0_V0.SetBinContent(3480,570566);
qMap_Ag_C0_V0.SetBinContent(3532,926317);
qMap_Ag_C0_V0.SetBinContent(3533,4.247075e+07);
qMap_Ag_C0_V0.SetBinContent(3534,249098);
qMap_Ag_C0_V0.SetBinContent(3587,133929);
qMap_Ag_C0_V0.SetBinError(3424,1643.679);
qMap_Ag_C0_V0.SetBinError(3425,10147.76);
qMap_Ag_C0_V0.SetBinError(3478,11443.02);
qMap_Ag_C0_V0.SetBinError(3479,1531726);
qMap_Ag_C0_V0.SetBinError(3480,6197.157);
qMap_Ag_C0_V0.SetBinError(3532,7813.808);
qMap_Ag_C0_V0.SetBinError(3533,735197.5);
qMap_Ag_C0_V0.SetBinError(3534,3895.102);
qMap_Ag_C0_V0.SetBinError(3587,2914.809);
qMap_Ag_C0_V0.SetMinimum(0);
qMap_Ag_C0_V0.SetEntries(248921);
qMap_Ag_C0_V0.SetStats(0);
qMap_Ag_C0_V0.SetContour(20);
qMap_Ag_C0_V0.SetContourLevel(0,0);
qMap_Ag_C0_V0.SetContourLevel(1,26.58019);
qMap_Ag_C0_V0.SetContourLevel(2,53.16038);
qMap_Ag_C0_V0.SetContourLevel(3,79.74057);
qMap_Ag_C0_V0.SetContourLevel(4,106.3208);
qMap_Ag_C0_V0.SetContourLevel(5,132.9009);
qMap_Ag_C0_V0.SetContourLevel(6,159.4811);
qMap_Ag_C0_V0.SetContourLevel(7,186.0613);
qMap_Ag_C0_V0.SetContourLevel(8,212.6415);
qMap_Ag_C0_V0.SetContourLevel(9,239.2217);
qMap_Ag_C0_V0.SetContourLevel(10,265.8019);
qMap_Ag_C0_V0.SetContourLevel(11,292.3821);
qMap_Ag_C0_V0.SetContourLevel(12,318.9623);
qMap_Ag_C0_V0.SetContourLevel(13,345.5425);
qMap_Ag_C0_V0.SetContourLevel(14,372.1226);
qMap_Ag_C0_V0.SetContourLevel(15,398.7028);
qMap_Ag_C0_V0.SetContourLevel(16,425.283);
qMap_Ag_C0_V0.SetContourLevel(17,451.8632);
qMap_Ag_C0_V0.SetContourLevel(18,478.4434);
qMap_Ag_C0_V0.SetContourLevel(19,505.0236);


ci = root.TColor.GetColor("#000099");
qMap_Ag_C0_V0.SetLineColor(ci);
qMap_Ag_C0_V0.GetXaxis().SetTitle("col");
qMap_Ag_C0_V0.GetXaxis().SetRange(15,32);
qMap_Ag_C0_V0.GetXaxis().SetNdivisions(508);
qMap_Ag_C0_V0.GetXaxis().SetLabelFont(42);
qMap_Ag_C0_V0.GetXaxis().SetLabelSize(0.05);
qMap_Ag_C0_V0.GetXaxis().SetTitleSize(0.05);
qMap_Ag_C0_V0.GetXaxis().SetTitleOffset(1.1);
qMap_Ag_C0_V0.GetXaxis().SetTitleFont(42);
qMap_Ag_C0_V0.GetYaxis().SetTitle("row");
qMap_Ag_C0_V0.GetYaxis().SetRange(51,76);
qMap_Ag_C0_V0.GetYaxis().SetLabelFont(42);
qMap_Ag_C0_V0.GetYaxis().SetLabelSize(0.05);
qMap_Ag_C0_V0.GetYaxis().SetTitleSize(0.05);
qMap_Ag_C0_V0.GetYaxis().SetTitleOffset(1.1);
qMap_Ag_C0_V0.GetYaxis().SetTitleFont(42);
qMap_Ag_C0_V0.GetZaxis().SetLabelFont(42);
qMap_Ag_C0_V0.GetZaxis().SetLabelSize(0.035);
qMap_Ag_C0_V0.GetZaxis().SetTitleSize(0.035);
qMap_Ag_C0_V0.GetZaxis().SetTitleFont(42);
