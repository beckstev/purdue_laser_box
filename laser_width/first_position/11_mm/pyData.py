import ROOT as root


 ########################## Data of .C file, insert data underneath ######################################

qMap_Ag_C0_V0 = root.TProfile2D("qMap_Ag_C0_V0","qMap_Ag_C0 (V0)",52,0,52,80,0,80,0,0);
qMap_Ag_C0_V0.SetBinEntries(2452,89822);
qMap_Ag_C0_V0.SetBinEntries(2453,72262);
qMap_Ag_C0_V0.SetBinEntries(2505,50622);
qMap_Ag_C0_V0.SetBinEntries(2506,89611);
qMap_Ag_C0_V0.SetBinEntries(2507,84445);
qMap_Ag_C0_V0.SetBinEntries(2508,17428);
qMap_Ag_C0_V0.SetBinEntries(2559,14364);
qMap_Ag_C0_V0.SetBinEntries(2560,91048);
qMap_Ag_C0_V0.SetBinEntries(2561,89996);
qMap_Ag_C0_V0.SetBinEntries(2562,14393);
qMap_Ag_C0_V0.SetBinEntries(2614,83318);
qMap_Ag_C0_V0.SetBinEntries(2615,71934);
qMap_Ag_C0_V0.SetBinContent(2452,1.369075e+07);
qMap_Ag_C0_V0.SetBinContent(2453,9095290);
qMap_Ag_C0_V0.SetBinContent(2505,1.878543e+07);
qMap_Ag_C0_V0.SetBinContent(2506,1.946743e+07);
qMap_Ag_C0_V0.SetBinContent(2507,1.233589e+07);
qMap_Ag_C0_V0.SetBinContent(2508,2169195);
qMap_Ag_C0_V0.SetBinContent(2559,1668086);
qMap_Ag_C0_V0.SetBinContent(2560,1.832409e+07);
qMap_Ag_C0_V0.SetBinContent(2561,1.713631e+07);
qMap_Ag_C0_V0.SetBinContent(2562,1648883);
qMap_Ag_C0_V0.SetBinContent(2614,1.104632e+07);
qMap_Ag_C0_V0.SetBinContent(2615,9672254);
qMap_Ag_C0_V0.SetBinError(2452,282514.1);
qMap_Ag_C0_V0.SetBinError(2453,151440.5);
qMap_Ag_C0_V0.SetBinError(2505,983079.8);
qMap_Ag_C0_V0.SetBinError(2506,458999.7);
qMap_Ag_C0_V0.SetBinError(2507,50947.61);
qMap_Ag_C0_V0.SetBinError(2508,17000.4);
qMap_Ag_C0_V0.SetBinError(2559,14161.85);
qMap_Ag_C0_V0.SetBinError(2560,295654.6);
qMap_Ag_C0_V0.SetBinError(2561,314102.1);
qMap_Ag_C0_V0.SetBinError(2562,13868.36);
qMap_Ag_C0_V0.SetBinError(2614,80933.29);
qMap_Ag_C0_V0.SetBinError(2615,41030.58);
qMap_Ag_C0_V0.SetMinimum(0);
qMap_Ag_C0_V0.SetEntries(769243);
qMap_Ag_C0_V0.SetStats(0);
qMap_Ag_C0_V0.SetContour(20);
qMap_Ag_C0_V0.SetContourLevel(0,0);
qMap_Ag_C0_V0.SetContourLevel(1,18.55461);
qMap_Ag_C0_V0.SetContourLevel(2,37.10921);
qMap_Ag_C0_V0.SetContourLevel(3,55.66382);
qMap_Ag_C0_V0.SetContourLevel(4,74.21843);
qMap_Ag_C0_V0.SetContourLevel(5,92.77303);
qMap_Ag_C0_V0.SetContourLevel(6,111.3276);
qMap_Ag_C0_V0.SetContourLevel(7,129.8822);
qMap_Ag_C0_V0.SetContourLevel(8,148.4369);
qMap_Ag_C0_V0.SetContourLevel(9,166.9915);
qMap_Ag_C0_V0.SetContourLevel(10,185.5461);
qMap_Ag_C0_V0.SetContourLevel(11,204.1007);
qMap_Ag_C0_V0.SetContourLevel(12,222.6553);
qMap_Ag_C0_V0.SetContourLevel(13,241.2099);
qMap_Ag_C0_V0.SetContourLevel(14,259.7645);
qMap_Ag_C0_V0.SetContourLevel(15,278.3191);
qMap_Ag_C0_V0.SetContourLevel(16,296.8737);
qMap_Ag_C0_V0.SetContourLevel(17,315.4283);
qMap_Ag_C0_V0.SetContourLevel(18,333.9829);
qMap_Ag_C0_V0.SetContourLevel(19,352.5375);

ci = root.TColor.GetColor("#000099");
qMap_Ag_C0_V0.SetLineColor(ci);
qMap_Ag_C0_V0.GetXaxis().SetTitle("col");
qMap_Ag_C0_V0.GetXaxis().SetRange(16,30);
qMap_Ag_C0_V0.GetXaxis().SetNdivisions(508);
qMap_Ag_C0_V0.GetXaxis().SetLabelFont(42);
qMap_Ag_C0_V0.GetXaxis().SetLabelSize(0.05);
qMap_Ag_C0_V0.GetXaxis().SetTitleSize(0.05);
qMap_Ag_C0_V0.GetXaxis().SetTitleOffset(1.1);
qMap_Ag_C0_V0.GetXaxis().SetTitleFont(42);
qMap_Ag_C0_V0.GetYaxis().SetTitle("row");
qMap_Ag_C0_V0.GetYaxis().SetRange(30,60);
qMap_Ag_C0_V0.GetYaxis().SetLabelFont(42);
qMap_Ag_C0_V0.GetYaxis().SetLabelSize(0.05);
qMap_Ag_C0_V0.GetYaxis().SetTitleSize(0.05);
qMap_Ag_C0_V0.GetYaxis().SetTitleOffset(1.1);
qMap_Ag_C0_V0.GetYaxis().SetTitleFont(42);
qMap_Ag_C0_V0.GetZaxis().SetLabelFont(42);
qMap_Ag_C0_V0.GetZaxis().SetLabelSize(0.035);
qMap_Ag_C0_V0.GetZaxis().SetTitleSize(0.035);
qMap_Ag_C0_V0.GetZaxis().SetTitleFont(42);

