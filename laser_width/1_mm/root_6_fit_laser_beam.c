#include "../../steven_test_analyse/Gaus2D.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <string>
#include "TMath.h"


using namespace std;

void root_6_fit_laser_beam(){

 //----------------------- Please fill in here the data of pxar, starting with TProfile2D ----------------
 TProfile2D *qMap_Ag_C0_V0 = new TProfile2D("qMap_Ag_C0_V0","qMap_Ag_C0 (V0)",52,0,52,80,0,80,0,0);
   qMap_Ag_C0_V0->SetBinEntries(55,24068);
   qMap_Ag_C0_V0->SetBinEntries(56,159);
   qMap_Ag_C0_V0->SetBinEntries(57,116);
   qMap_Ag_C0_V0->SetBinEntries(58,33);
   qMap_Ag_C0_V0->SetBinEntries(59,80);
   qMap_Ag_C0_V0->SetBinEntries(60,30);
   qMap_Ag_C0_V0->SetBinEntries(61,140);
   qMap_Ag_C0_V0->SetBinEntries(62,40);
   qMap_Ag_C0_V0->SetBinEntries(63,35);
   qMap_Ag_C0_V0->SetBinEntries(64,100);
   qMap_Ag_C0_V0->SetBinEntries(65,134);
   qMap_Ag_C0_V0->SetBinEntries(66,76);
   qMap_Ag_C0_V0->SetBinEntries(67,3975);
   qMap_Ag_C0_V0->SetBinEntries(70,39);
   qMap_Ag_C0_V0->SetBinEntries(71,24);
   qMap_Ag_C0_V0->SetBinEntries(74,23);
   qMap_Ag_C0_V0->SetBinEntries(75,9);
   qMap_Ag_C0_V0->SetBinEntries(77,5);
   qMap_Ag_C0_V0->SetBinEntries(78,5);
   qMap_Ag_C0_V0->SetBinEntries(79,77);
   qMap_Ag_C0_V0->SetBinEntries(80,25);
   qMap_Ag_C0_V0->SetBinEntries(81,20);
   qMap_Ag_C0_V0->SetBinEntries(82,3);
   qMap_Ag_C0_V0->SetBinEntries(83,4);
   qMap_Ag_C0_V0->SetBinEntries(84,1);
   qMap_Ag_C0_V0->SetBinEntries(85,9);
   qMap_Ag_C0_V0->SetBinEntries(86,4);
   qMap_Ag_C0_V0->SetBinEntries(87,16);
   qMap_Ag_C0_V0->SetBinEntries(88,3);
   qMap_Ag_C0_V0->SetBinEntries(89,1);
   qMap_Ag_C0_V0->SetBinEntries(91,28);
   qMap_Ag_C0_V0->SetBinEntries(93,72);
   qMap_Ag_C0_V0->SetBinEntries(94,3);
   qMap_Ag_C0_V0->SetBinEntries(95,15);
   qMap_Ag_C0_V0->SetBinEntries(96,4);
   qMap_Ag_C0_V0->SetBinEntries(97,1);
   qMap_Ag_C0_V0->SetBinEntries(99,2);
   qMap_Ag_C0_V0->SetBinEntries(100,5);
   qMap_Ag_C0_V0->SetBinEntries(101,7);
   qMap_Ag_C0_V0->SetBinEntries(102,3);
   qMap_Ag_C0_V0->SetBinEntries(103,7);
   qMap_Ag_C0_V0->SetBinEntries(104,16);
   qMap_Ag_C0_V0->SetBinEntries(105,9);
   qMap_Ag_C0_V0->SetBinEntries(106,22515);
   qMap_Ag_C0_V0->SetBinEntries(109,44);
   qMap_Ag_C0_V0->SetBinEntries(163,152);
   qMap_Ag_C0_V0->SetBinEntries(217,217);
   qMap_Ag_C0_V0->SetBinEntries(268,15);
   qMap_Ag_C0_V0->SetBinEntries(271,230);
   qMap_Ag_C0_V0->SetBinEntries(322,12);
   qMap_Ag_C0_V0->SetBinEntries(325,87);
   qMap_Ag_C0_V0->SetBinEntries(376,39);
   qMap_Ag_C0_V0->SetBinEntries(379,343);
   qMap_Ag_C0_V0->SetBinEntries(430,26);
   qMap_Ag_C0_V0->SetBinEntries(433,24);
   qMap_Ag_C0_V0->SetBinEntries(484,5);
   qMap_Ag_C0_V0->SetBinEntries(487,36);
   qMap_Ag_C0_V0->SetBinEntries(538,21);
   qMap_Ag_C0_V0->SetBinEntries(541,21);
   qMap_Ag_C0_V0->SetBinEntries(595,59);
   qMap_Ag_C0_V0->SetBinEntries(646,22);
   qMap_Ag_C0_V0->SetBinEntries(649,86);
   qMap_Ag_C0_V0->SetBinEntries(700,56);
   qMap_Ag_C0_V0->SetBinEntries(703,99);
   qMap_Ag_C0_V0->SetBinEntries(754,7);
   qMap_Ag_C0_V0->SetBinEntries(757,106);
   qMap_Ag_C0_V0->SetBinEntries(808,2);
   qMap_Ag_C0_V0->SetBinEntries(811,241);
   qMap_Ag_C0_V0->SetBinEntries(862,48);
   qMap_Ag_C0_V0->SetBinEntries(865,40);
   qMap_Ag_C0_V0->SetBinEntries(916,27);
   qMap_Ag_C0_V0->SetBinEntries(919,3846);
   qMap_Ag_C0_V0->SetBinEntries(970,48);
   qMap_Ag_C0_V0->SetBinEntries(973,442);
   qMap_Ag_C0_V0->SetBinEntries(1024,29);
   qMap_Ag_C0_V0->SetBinEntries(1027,10);
   qMap_Ag_C0_V0->SetBinEntries(1078,25);
   qMap_Ag_C0_V0->SetBinEntries(1081,122);
   qMap_Ag_C0_V0->SetBinEntries(1132,41);
   qMap_Ag_C0_V0->SetBinEntries(1135,68);
   qMap_Ag_C0_V0->SetBinEntries(1186,19);
   qMap_Ag_C0_V0->SetBinEntries(1189,145);
   qMap_Ag_C0_V0->SetBinEntries(1240,4);
   qMap_Ag_C0_V0->SetBinEntries(1243,117);
   qMap_Ag_C0_V0->SetBinEntries(1294,18);
   qMap_Ag_C0_V0->SetBinEntries(1297,193);
   qMap_Ag_C0_V0->SetBinEntries(1348,25);
   qMap_Ag_C0_V0->SetBinEntries(1351,77);
   qMap_Ag_C0_V0->SetBinEntries(1402,10);
   qMap_Ag_C0_V0->SetBinEntries(1405,128);
   qMap_Ag_C0_V0->SetBinEntries(1456,13);
   qMap_Ag_C0_V0->SetBinEntries(1459,148);
   qMap_Ag_C0_V0->SetBinEntries(1510,36);
   qMap_Ag_C0_V0->SetBinEntries(1513,42);
   qMap_Ag_C0_V0->SetBinEntries(1564,83);
   qMap_Ag_C0_V0->SetBinEntries(1567,159);
   qMap_Ag_C0_V0->SetBinEntries(1618,91);
   qMap_Ag_C0_V0->SetBinEntries(1621,73);
   qMap_Ag_C0_V0->SetBinEntries(1672,8);
   qMap_Ag_C0_V0->SetBinEntries(1675,7504);
   qMap_Ag_C0_V0->SetBinEntries(1726,13);
   qMap_Ag_C0_V0->SetBinEntries(1729,77);
   qMap_Ag_C0_V0->SetBinEntries(1780,10);
   qMap_Ag_C0_V0->SetBinEntries(1783,41);
   qMap_Ag_C0_V0->SetBinEntries(1834,9);
   qMap_Ag_C0_V0->SetBinEntries(1837,306);
   qMap_Ag_C0_V0->SetBinEntries(1888,43);
   qMap_Ag_C0_V0->SetBinEntries(1891,207);
   qMap_Ag_C0_V0->SetBinEntries(1942,34);
   qMap_Ag_C0_V0->SetBinEntries(1945,35);
   qMap_Ag_C0_V0->SetBinEntries(1996,6);
   qMap_Ag_C0_V0->SetBinEntries(1999,29);
   qMap_Ag_C0_V0->SetBinEntries(2050,26);
   qMap_Ag_C0_V0->SetBinEntries(2053,48);
   qMap_Ag_C0_V0->SetBinEntries(2104,28);
   qMap_Ag_C0_V0->SetBinEntries(2107,160);
   qMap_Ag_C0_V0->SetBinEntries(2158,8);
   qMap_Ag_C0_V0->SetBinEntries(2161,305);
   qMap_Ag_C0_V0->SetBinEntries(2215,181);
   qMap_Ag_C0_V0->SetBinEntries(2266,30);
   qMap_Ag_C0_V0->SetBinEntries(2269,64);
   qMap_Ag_C0_V0->SetBinEntries(2288,161);
   qMap_Ag_C0_V0->SetBinEntries(2289,2189);
   qMap_Ag_C0_V0->SetBinEntries(2290,21588);
   qMap_Ag_C0_V0->SetBinEntries(2291,12868);
   qMap_Ag_C0_V0->SetBinEntries(2292,2216);
   qMap_Ag_C0_V0->SetBinEntries(2320,10);
   qMap_Ag_C0_V0->SetBinEntries(2323,98);
   qMap_Ag_C0_V0->SetBinEntries(2342,995);
   qMap_Ag_C0_V0->SetBinEntries(2343,23794);
   qMap_Ag_C0_V0->SetBinEntries(2344,23968);
   qMap_Ag_C0_V0->SetBinEntries(2345,23968);
   qMap_Ag_C0_V0->SetBinEntries(2346,16846);
   qMap_Ag_C0_V0->SetBinEntries(2347,27);
   qMap_Ag_C0_V0->SetBinEntries(2374,76);
   qMap_Ag_C0_V0->SetBinEntries(2377,132);
   qMap_Ag_C0_V0->SetBinEntries(2396,23608);
   qMap_Ag_C0_V0->SetBinEntries(2397,23770);
   qMap_Ag_C0_V0->SetBinEntries(2398,23641);
   qMap_Ag_C0_V0->SetBinEntries(2399,23885);
   qMap_Ag_C0_V0->SetBinEntries(2400,24263);
   qMap_Ag_C0_V0->SetBinEntries(2401,3479);
   qMap_Ag_C0_V0->SetBinEntries(2428,38);
   qMap_Ag_C0_V0->SetBinEntries(2431,4572);
   qMap_Ag_C0_V0->SetBinEntries(2450,24123);
   qMap_Ag_C0_V0->SetBinEntries(2451,23570);
   qMap_Ag_C0_V0->SetBinEntries(2452,23931);
   qMap_Ag_C0_V0->SetBinEntries(2453,23777);
   qMap_Ag_C0_V0->SetBinEntries(2454,23837);
   qMap_Ag_C0_V0->SetBinEntries(2455,19878);
   qMap_Ag_C0_V0->SetBinEntries(2482,21);
   qMap_Ag_C0_V0->SetBinEntries(2485,80);
   qMap_Ag_C0_V0->SetBinEntries(2504,23912);
   qMap_Ag_C0_V0->SetBinEntries(2505,23786);
   qMap_Ag_C0_V0->SetBinEntries(2506,24356);
   qMap_Ag_C0_V0->SetBinEntries(2507,23807);
   qMap_Ag_C0_V0->SetBinEntries(2508,23744);
   qMap_Ag_C0_V0->SetBinEntries(2509,24023);
   qMap_Ag_C0_V0->SetBinEntries(2536,5);
   qMap_Ag_C0_V0->SetBinEntries(2539,7622);
   qMap_Ag_C0_V0->SetBinEntries(2558,23910);
   qMap_Ag_C0_V0->SetBinEntries(2559,23600);
   qMap_Ag_C0_V0->SetBinEntries(2560,23995);
   qMap_Ag_C0_V0->SetBinEntries(2561,24099);
   qMap_Ag_C0_V0->SetBinEntries(2562,23652);
   qMap_Ag_C0_V0->SetBinEntries(2563,20315);
   qMap_Ag_C0_V0->SetBinEntries(2590,54);
   qMap_Ag_C0_V0->SetBinEntries(2593,10608);
   qMap_Ag_C0_V0->SetBinEntries(2612,23923);
   qMap_Ag_C0_V0->SetBinEntries(2613,23726);
   qMap_Ag_C0_V0->SetBinEntries(2614,23817);
   qMap_Ag_C0_V0->SetBinEntries(2615,23717);
   qMap_Ag_C0_V0->SetBinEntries(2616,23807);
   qMap_Ag_C0_V0->SetBinEntries(2617,15308);
   qMap_Ag_C0_V0->SetBinEntries(2644,8);
   qMap_Ag_C0_V0->SetBinEntries(2647,28);
   qMap_Ag_C0_V0->SetBinEntries(2666,22019);
   qMap_Ag_C0_V0->SetBinEntries(2667,23718);
   qMap_Ag_C0_V0->SetBinEntries(2668,23749);
   qMap_Ag_C0_V0->SetBinEntries(2669,23737);
   qMap_Ag_C0_V0->SetBinEntries(2670,24272);
   qMap_Ag_C0_V0->SetBinEntries(2671,486);
   qMap_Ag_C0_V0->SetBinEntries(2698,12);
   qMap_Ag_C0_V0->SetBinEntries(2701,184);
   qMap_Ag_C0_V0->SetBinEntries(2720,3952);
   qMap_Ag_C0_V0->SetBinEntries(2721,23096);
   qMap_Ag_C0_V0->SetBinEntries(2722,23944);
   qMap_Ag_C0_V0->SetBinEntries(2723,24160);
   qMap_Ag_C0_V0->SetBinEntries(2724,9471);
   qMap_Ag_C0_V0->SetBinEntries(2725,10);
   qMap_Ag_C0_V0->SetBinEntries(2752,4);
   qMap_Ag_C0_V0->SetBinEntries(2755,149);
   qMap_Ag_C0_V0->SetBinEntries(2776,32);
   qMap_Ag_C0_V0->SetBinEntries(2777,16);
   qMap_Ag_C0_V0->SetBinEntries(2806,10);
   qMap_Ag_C0_V0->SetBinEntries(2809,4196);
   qMap_Ag_C0_V0->SetBinEntries(2860,3);
   qMap_Ag_C0_V0->SetBinEntries(2863,3252);
   qMap_Ag_C0_V0->SetBinEntries(2914,62);
   qMap_Ag_C0_V0->SetBinEntries(2917,146);
   qMap_Ag_C0_V0->SetBinEntries(2968,11);
   qMap_Ag_C0_V0->SetBinEntries(2971,7231);
   qMap_Ag_C0_V0->SetBinEntries(3022,1);
   qMap_Ag_C0_V0->SetBinEntries(3025,711);
   qMap_Ag_C0_V0->SetBinEntries(3076,36);
   qMap_Ag_C0_V0->SetBinEntries(3079,10211);
   qMap_Ag_C0_V0->SetBinEntries(3130,3);
   qMap_Ag_C0_V0->SetBinEntries(3133,251);
   qMap_Ag_C0_V0->SetBinEntries(3184,12);
   qMap_Ag_C0_V0->SetBinEntries(3187,3618);
   qMap_Ag_C0_V0->SetBinEntries(3238,4);
   qMap_Ag_C0_V0->SetBinEntries(3241,221);
   qMap_Ag_C0_V0->SetBinEntries(3292,1322);
   qMap_Ag_C0_V0->SetBinEntries(3295,5809);
   qMap_Ag_C0_V0->SetBinEntries(3346,1257);
   qMap_Ag_C0_V0->SetBinEntries(3349,777);
   qMap_Ag_C0_V0->SetBinEntries(3400,52);
   qMap_Ag_C0_V0->SetBinEntries(3403,3924);
   qMap_Ag_C0_V0->SetBinEntries(3454,38);
   qMap_Ag_C0_V0->SetBinEntries(3457,815);
   qMap_Ag_C0_V0->SetBinEntries(3508,31);
   qMap_Ag_C0_V0->SetBinEntries(3511,207);
   qMap_Ag_C0_V0->SetBinEntries(3562,5);
   qMap_Ag_C0_V0->SetBinEntries(3565,4495);
   qMap_Ag_C0_V0->SetBinEntries(3619,288);
   qMap_Ag_C0_V0->SetBinEntries(3670,2022);
   qMap_Ag_C0_V0->SetBinEntries(3673,3927);
   qMap_Ag_C0_V0->SetBinEntries(3724,2);
   qMap_Ag_C0_V0->SetBinEntries(3727,7588);
   qMap_Ag_C0_V0->SetBinEntries(3778,1);
   qMap_Ag_C0_V0->SetBinEntries(3781,1097);
   qMap_Ag_C0_V0->SetBinEntries(3832,927);
   qMap_Ag_C0_V0->SetBinEntries(3835,5701);
   qMap_Ag_C0_V0->SetBinEntries(3886,15);
   qMap_Ag_C0_V0->SetBinEntries(3889,3451);
   qMap_Ag_C0_V0->SetBinEntries(3940,1);
   qMap_Ag_C0_V0->SetBinEntries(3943,7674);
   qMap_Ag_C0_V0->SetBinEntries(3994,7);
   qMap_Ag_C0_V0->SetBinEntries(3997,240);
   qMap_Ag_C0_V0->SetBinEntries(4048,3);
   qMap_Ag_C0_V0->SetBinEntries(4102,9);
   qMap_Ag_C0_V0->SetBinEntries(4105,642);
   qMap_Ag_C0_V0->SetBinEntries(4156,58);
   qMap_Ag_C0_V0->SetBinEntries(4159,3987);
   qMap_Ag_C0_V0->SetBinEntries(4210,475);
   qMap_Ag_C0_V0->SetBinEntries(4213,149);
   qMap_Ag_C0_V0->SetBinEntries(4264,13);
   qMap_Ag_C0_V0->SetBinEntries(4267,10137);
   qMap_Ag_C0_V0->SetBinEntries(4318,2);
   qMap_Ag_C0_V0->SetBinEntries(4321,34);
   qMap_Ag_C0_V0->SetBinEntries(4372,4);
   qMap_Ag_C0_V0->SetBinContent(55,3239872);
   qMap_Ag_C0_V0->SetBinContent(56,14120);
   qMap_Ag_C0_V0->SetBinContent(57,12085);
   qMap_Ag_C0_V0->SetBinContent(58,3162);
   qMap_Ag_C0_V0->SetBinContent(59,8307);
   qMap_Ag_C0_V0->SetBinContent(60,3087);
   qMap_Ag_C0_V0->SetBinContent(61,15241);
   qMap_Ag_C0_V0->SetBinContent(62,3949);
   qMap_Ag_C0_V0->SetBinContent(63,3710);
   qMap_Ag_C0_V0->SetBinContent(64,9728);
   qMap_Ag_C0_V0->SetBinContent(65,13322);
   qMap_Ag_C0_V0->SetBinContent(66,7094);
   qMap_Ag_C0_V0->SetBinContent(67,389516);
   qMap_Ag_C0_V0->SetBinContent(70,3571);
   qMap_Ag_C0_V0->SetBinContent(71,2297);
   qMap_Ag_C0_V0->SetBinContent(74,2374);
   qMap_Ag_C0_V0->SetBinContent(75,948);
   qMap_Ag_C0_V0->SetBinContent(77,530);
   qMap_Ag_C0_V0->SetBinContent(78,513);
   qMap_Ag_C0_V0->SetBinContent(79,7217);
   qMap_Ag_C0_V0->SetBinContent(80,2191);
   qMap_Ag_C0_V0->SetBinContent(81,1916);
   qMap_Ag_C0_V0->SetBinContent(82,283);
   qMap_Ag_C0_V0->SetBinContent(83,432);
   qMap_Ag_C0_V0->SetBinContent(84,93);
   qMap_Ag_C0_V0->SetBinContent(85,750);
   qMap_Ag_C0_V0->SetBinContent(86,320);
   qMap_Ag_C0_V0->SetBinContent(87,1414);
   qMap_Ag_C0_V0->SetBinContent(88,291);
   qMap_Ag_C0_V0->SetBinContent(89,97);
   qMap_Ag_C0_V0->SetBinContent(91,2157);
   qMap_Ag_C0_V0->SetBinContent(93,4822);
   qMap_Ag_C0_V0->SetBinContent(94,249);
   qMap_Ag_C0_V0->SetBinContent(95,1185);
   qMap_Ag_C0_V0->SetBinContent(96,302);
   qMap_Ag_C0_V0->SetBinContent(97,78);
   qMap_Ag_C0_V0->SetBinContent(99,109);
   qMap_Ag_C0_V0->SetBinContent(100,419);
   qMap_Ag_C0_V0->SetBinContent(101,671);
   qMap_Ag_C0_V0->SetBinContent(102,294);
   qMap_Ag_C0_V0->SetBinContent(103,654);
   qMap_Ag_C0_V0->SetBinContent(104,1397);
   qMap_Ag_C0_V0->SetBinContent(105,590);
   qMap_Ag_C0_V0->SetBinContent(106,2163743);
   qMap_Ag_C0_V0->SetBinContent(109,3044);
   qMap_Ag_C0_V0->SetBinContent(163,11082);
   qMap_Ag_C0_V0->SetBinContent(217,145898);
   qMap_Ag_C0_V0->SetBinContent(268,1175);
   qMap_Ag_C0_V0->SetBinContent(271,15853);
   qMap_Ag_C0_V0->SetBinContent(322,918);
   qMap_Ag_C0_V0->SetBinContent(325,6319);
   qMap_Ag_C0_V0->SetBinContent(376,2808);
   qMap_Ag_C0_V0->SetBinContent(379,87058);
   qMap_Ag_C0_V0->SetBinContent(430,2066);
   qMap_Ag_C0_V0->SetBinContent(433,1574);
   qMap_Ag_C0_V0->SetBinContent(484,330);
   qMap_Ag_C0_V0->SetBinContent(487,2340);
   qMap_Ag_C0_V0->SetBinContent(538,1597);
   qMap_Ag_C0_V0->SetBinContent(541,1224);
   qMap_Ag_C0_V0->SetBinContent(595,4268);
   qMap_Ag_C0_V0->SetBinContent(646,1633);
   qMap_Ag_C0_V0->SetBinContent(649,6281);
   qMap_Ag_C0_V0->SetBinContent(700,4242);
   qMap_Ag_C0_V0->SetBinContent(703,72715);
   qMap_Ag_C0_V0->SetBinContent(754,408);
   qMap_Ag_C0_V0->SetBinContent(757,7178);
   qMap_Ag_C0_V0->SetBinContent(808,179);
   qMap_Ag_C0_V0->SetBinContent(811,278577);
   qMap_Ag_C0_V0->SetBinContent(862,3197);
   qMap_Ag_C0_V0->SetBinContent(865,2811);
   qMap_Ag_C0_V0->SetBinContent(916,2118);
   qMap_Ag_C0_V0->SetBinContent(919,377663);
   qMap_Ag_C0_V0->SetBinContent(970,3889);
   qMap_Ag_C0_V0->SetBinContent(973,98868);
   qMap_Ag_C0_V0->SetBinContent(1024,1653);
   qMap_Ag_C0_V0->SetBinContent(1027,858);
   qMap_Ag_C0_V0->SetBinContent(1078,1684);
   qMap_Ag_C0_V0->SetBinContent(1081,10050);
   qMap_Ag_C0_V0->SetBinContent(1132,3054);
   qMap_Ag_C0_V0->SetBinContent(1135,136483);
   qMap_Ag_C0_V0->SetBinContent(1186,1376);
   qMap_Ag_C0_V0->SetBinContent(1189,12332);
   qMap_Ag_C0_V0->SetBinContent(1240,337);
   qMap_Ag_C0_V0->SetBinContent(1243,74805);
   qMap_Ag_C0_V0->SetBinContent(1294,1218);
   qMap_Ag_C0_V0->SetBinContent(1297,146172);
   qMap_Ag_C0_V0->SetBinContent(1348,2112);
   qMap_Ag_C0_V0->SetBinContent(1351,5315);
   qMap_Ag_C0_V0->SetBinContent(1402,874);
   qMap_Ag_C0_V0->SetBinContent(1405,9228);
   qMap_Ag_C0_V0->SetBinContent(1456,932);
   qMap_Ag_C0_V0->SetBinContent(1459,77667);
   qMap_Ag_C0_V0->SetBinContent(1510,2808);
   qMap_Ag_C0_V0->SetBinContent(1513,3252);
   qMap_Ag_C0_V0->SetBinContent(1564,6057);
   qMap_Ag_C0_V0->SetBinContent(1567,12066);
   qMap_Ag_C0_V0->SetBinContent(1618,7295);
   qMap_Ag_C0_V0->SetBinContent(1621,6579);
   qMap_Ag_C0_V0->SetBinContent(1672,667);
   qMap_Ag_C0_V0->SetBinContent(1675,653659);
   qMap_Ag_C0_V0->SetBinContent(1726,939);
   qMap_Ag_C0_V0->SetBinContent(1729,72139);
   qMap_Ag_C0_V0->SetBinContent(1780,852);
   qMap_Ag_C0_V0->SetBinContent(1783,3425);
   qMap_Ag_C0_V0->SetBinContent(1834,733);
   qMap_Ag_C0_V0->SetBinContent(1837,26652);
   qMap_Ag_C0_V0->SetBinContent(1888,3334);
   qMap_Ag_C0_V0->SetBinContent(1891,17057);
   qMap_Ag_C0_V0->SetBinContent(1942,2521);
   qMap_Ag_C0_V0->SetBinContent(1945,3422);
   qMap_Ag_C0_V0->SetBinContent(1996,452);
   qMap_Ag_C0_V0->SetBinContent(1999,2293);
   qMap_Ag_C0_V0->SetBinContent(2050,1977);
   qMap_Ag_C0_V0->SetBinContent(2053,4502);
   qMap_Ag_C0_V0->SetBinContent(2104,2376);
   qMap_Ag_C0_V0->SetBinContent(2107,13915);
   qMap_Ag_C0_V0->SetBinContent(2158,568);
   qMap_Ag_C0_V0->SetBinContent(2161,90298);
   qMap_Ag_C0_V0->SetBinContent(2215,80654);
   qMap_Ag_C0_V0->SetBinContent(2266,2163);
   qMap_Ag_C0_V0->SetBinContent(2269,5087);
   qMap_Ag_C0_V0->SetBinContent(2288,15329);
   qMap_Ag_C0_V0->SetBinContent(2289,413526);
   qMap_Ag_C0_V0->SetBinContent(2290,2369285);
   qMap_Ag_C0_V0->SetBinContent(2291,1663470);
   qMap_Ag_C0_V0->SetBinContent(2292,303252);
   qMap_Ag_C0_V0->SetBinContent(2320,693);
   qMap_Ag_C0_V0->SetBinContent(2323,8472);
   qMap_Ag_C0_V0->SetBinContent(2342,96910);
   qMap_Ag_C0_V0->SetBinContent(2343,4077602);
   qMap_Ag_C0_V0->SetBinContent(2344,2654938);
   qMap_Ag_C0_V0->SetBinContent(2345,2839429);
   qMap_Ag_C0_V0->SetBinContent(2346,1699296);
   qMap_Ag_C0_V0->SetBinContent(2347,2897);
   qMap_Ag_C0_V0->SetBinContent(2374,5887);
   qMap_Ag_C0_V0->SetBinContent(2377,11275);
   qMap_Ag_C0_V0->SetBinContent(2396,2735137);
   qMap_Ag_C0_V0->SetBinContent(2397,2852446);
   qMap_Ag_C0_V0->SetBinContent(2398,2798362);
   qMap_Ag_C0_V0->SetBinContent(2399,3068545);
   qMap_Ag_C0_V0->SetBinContent(2400,2554920);
   qMap_Ag_C0_V0->SetBinContent(2401,379218);
   qMap_Ag_C0_V0->SetBinContent(2428,2630);
   qMap_Ag_C0_V0->SetBinContent(2431,1117293);
   qMap_Ag_C0_V0->SetBinContent(2450,3150319);
   qMap_Ag_C0_V0->SetBinContent(2451,3352860);
   qMap_Ag_C0_V0->SetBinContent(2452,3432883);
   qMap_Ag_C0_V0->SetBinContent(2453,3581215);
   qMap_Ag_C0_V0->SetBinContent(2454,2666548);
   qMap_Ag_C0_V0->SetBinContent(2455,2241148);
   qMap_Ag_C0_V0->SetBinContent(2482,1758);
   qMap_Ag_C0_V0->SetBinContent(2485,7059);
   qMap_Ag_C0_V0->SetBinContent(2504,3176350);
   qMap_Ag_C0_V0->SetBinContent(2505,3473392);
   qMap_Ag_C0_V0->SetBinContent(2506,3864539);
   qMap_Ag_C0_V0->SetBinContent(2507,3741633);
   qMap_Ag_C0_V0->SetBinContent(2508,2931423);
   qMap_Ag_C0_V0->SetBinContent(2509,2986652);
   qMap_Ag_C0_V0->SetBinContent(2536,402);
   qMap_Ag_C0_V0->SetBinContent(2539,762141);
   qMap_Ag_C0_V0->SetBinContent(2558,3331461);
   qMap_Ag_C0_V0->SetBinContent(2559,3561072);
   qMap_Ag_C0_V0->SetBinContent(2560,3656128);
   qMap_Ag_C0_V0->SetBinContent(2561,4017333);
   qMap_Ag_C0_V0->SetBinContent(2562,2963392);
   qMap_Ag_C0_V0->SetBinContent(2563,2440882);
   qMap_Ag_C0_V0->SetBinContent(2590,4179);
   qMap_Ag_C0_V0->SetBinContent(2593,3096717);
   qMap_Ag_C0_V0->SetBinContent(2612,2974248);
   qMap_Ag_C0_V0->SetBinContent(2613,3215973);
   qMap_Ag_C0_V0->SetBinContent(2614,3541234);
   qMap_Ag_C0_V0->SetBinContent(2615,3329967);
   qMap_Ag_C0_V0->SetBinContent(2616,2903732);
   qMap_Ag_C0_V0->SetBinContent(2617,1779591);
   qMap_Ag_C0_V0->SetBinContent(2644,752);
   qMap_Ag_C0_V0->SetBinContent(2647,2793);
   qMap_Ag_C0_V0->SetBinContent(2666,2105604);
   qMap_Ag_C0_V0->SetBinContent(2667,2813146);
   qMap_Ag_C0_V0->SetBinContent(2668,3101300);
   qMap_Ag_C0_V0->SetBinContent(2669,2850602);
   qMap_Ag_C0_V0->SetBinContent(2670,2547570);
   qMap_Ag_C0_V0->SetBinContent(2671,55370);
   qMap_Ag_C0_V0->SetBinContent(2698,808);
   qMap_Ag_C0_V0->SetBinContent(2701,81406);
   qMap_Ag_C0_V0->SetBinContent(2720,306379);
   qMap_Ag_C0_V0->SetBinContent(2721,4468950);
   qMap_Ag_C0_V0->SetBinContent(2722,2746434);
   qMap_Ag_C0_V0->SetBinContent(2723,2554180);
   qMap_Ag_C0_V0->SetBinContent(2724,1008405);
   qMap_Ag_C0_V0->SetBinContent(2725,1113);
   qMap_Ag_C0_V0->SetBinContent(2752,364);
   qMap_Ag_C0_V0->SetBinContent(2755,14002);
   qMap_Ag_C0_V0->SetBinContent(2776,2365);
   qMap_Ag_C0_V0->SetBinContent(2777,1159);
   qMap_Ag_C0_V0->SetBinContent(2806,645);
   qMap_Ag_C0_V0->SetBinContent(2809,586853);
   qMap_Ag_C0_V0->SetBinContent(2860,216);
   qMap_Ag_C0_V0->SetBinContent(2863,305949);
   qMap_Ag_C0_V0->SetBinContent(2914,4707);
   qMap_Ag_C0_V0->SetBinContent(2917,79155);
   qMap_Ag_C0_V0->SetBinContent(2968,906);
   qMap_Ag_C0_V0->SetBinContent(2971,965159);
   qMap_Ag_C0_V0->SetBinContent(3022,65);
   qMap_Ag_C0_V0->SetBinContent(3025,712558);
   qMap_Ag_C0_V0->SetBinContent(3076,2790);
   qMap_Ag_C0_V0->SetBinContent(3079,8749484);
   qMap_Ag_C0_V0->SetBinContent(3130,235);
   qMap_Ag_C0_V0->SetBinContent(3133,22224);
   qMap_Ag_C0_V0->SetBinContent(3184,941);
   qMap_Ag_C0_V0->SetBinContent(3187,448907);
   qMap_Ag_C0_V0->SetBinContent(3238,287);
   qMap_Ag_C0_V0->SetBinContent(3241,20655);
   qMap_Ag_C0_V0->SetBinContent(3292,99868);
   qMap_Ag_C0_V0->SetBinContent(3295,591185);
   qMap_Ag_C0_V0->SetBinContent(3346,96967);
   qMap_Ag_C0_V0->SetBinContent(3349,67334);
   qMap_Ag_C0_V0->SetBinContent(3400,3584);
   qMap_Ag_C0_V0->SetBinContent(3403,373499);
   qMap_Ag_C0_V0->SetBinContent(3454,2559);
   qMap_Ag_C0_V0->SetBinContent(3457,75003);
   qMap_Ag_C0_V0->SetBinContent(3508,2411);
   qMap_Ag_C0_V0->SetBinContent(3511,18445);
   qMap_Ag_C0_V0->SetBinContent(3562,407);
   qMap_Ag_C0_V0->SetBinContent(3565,423857);
   qMap_Ag_C0_V0->SetBinContent(3619,25280);
   qMap_Ag_C0_V0->SetBinContent(3670,153113);
   qMap_Ag_C0_V0->SetBinContent(3673,382884);
   qMap_Ag_C0_V0->SetBinContent(3724,168);
   qMap_Ag_C0_V0->SetBinContent(3727,704999);
   qMap_Ag_C0_V0->SetBinContent(3778,72);
   qMap_Ag_C0_V0->SetBinContent(3781,167488);
   qMap_Ag_C0_V0->SetBinContent(3832,73475);
   qMap_Ag_C0_V0->SetBinContent(3835,814506);
   qMap_Ag_C0_V0->SetBinContent(3886,1314);
   qMap_Ag_C0_V0->SetBinContent(3889,763681);
   qMap_Ag_C0_V0->SetBinContent(3940,81);
   qMap_Ag_C0_V0->SetBinContent(3943,1282556);
   qMap_Ag_C0_V0->SetBinContent(3994,516);
   qMap_Ag_C0_V0->SetBinContent(3997,23400);
   qMap_Ag_C0_V0->SetBinContent(4048,246);
   qMap_Ag_C0_V0->SetBinContent(4102,799);
   qMap_Ag_C0_V0->SetBinContent(4105,59411);
   qMap_Ag_C0_V0->SetBinContent(4156,5043);
   qMap_Ag_C0_V0->SetBinContent(4159,471155);
   qMap_Ag_C0_V0->SetBinContent(4210,39789);
   qMap_Ag_C0_V0->SetBinContent(4213,14281);
   qMap_Ag_C0_V0->SetBinContent(4264,1091);
   qMap_Ag_C0_V0->SetBinContent(4267,957991);
   qMap_Ag_C0_V0->SetBinContent(4318,259);
   qMap_Ag_C0_V0->SetBinContent(4321,3403);
   qMap_Ag_C0_V0->SetBinContent(4372,354);
   qMap_Ag_C0_V0->SetBinError(55,254187.4);
   qMap_Ag_C0_V0->SetBinError(56,1138.87);
   qMap_Ag_C0_V0->SetBinError(57,1143.423);
   qMap_Ag_C0_V0->SetBinError(58,559.4479);
   qMap_Ag_C0_V0->SetBinError(59,952.3166);
   qMap_Ag_C0_V0->SetBinError(60,572.4273);
   qMap_Ag_C0_V0->SetBinError(61,1305.647);
   qMap_Ag_C0_V0->SetBinError(62,634.3792);
   qMap_Ag_C0_V0->SetBinError(63,637.7727);
   qMap_Ag_C0_V0->SetBinError(64,996.249);
   qMap_Ag_C0_V0->SetBinError(65,1175.307);
   qMap_Ag_C0_V0->SetBinError(66,835.0964);
   qMap_Ag_C0_V0->SetBinError(67,6304.654);
   qMap_Ag_C0_V0->SetBinError(70,584.3278);
   qMap_Ag_C0_V0->SetBinError(71,473.4079);
   qMap_Ag_C0_V0->SetBinError(74,501.1786);
   qMap_Ag_C0_V0->SetBinError(75,320.7304);
   qMap_Ag_C0_V0->SetBinError(77,237.6973);
   qMap_Ag_C0_V0->SetBinError(78,230.506);
   qMap_Ag_C0_V0->SetBinError(79,836.8076);
   qMap_Ag_C0_V0->SetBinError(80,453.1015);
   qMap_Ag_C0_V0->SetBinError(81,438.6935);
   qMap_Ag_C0_V0->SetBinError(82,163.8322);
   qMap_Ag_C0_V0->SetBinError(83,216.9977);
   qMap_Ag_C0_V0->SetBinError(84,93);
   qMap_Ag_C0_V0->SetBinError(85,253.0138);
   qMap_Ag_C0_V0->SetBinError(86,169.0799);
   qMap_Ag_C0_V0->SetBinError(87,363.1942);
   qMap_Ag_C0_V0->SetBinError(88,170.4435);
   qMap_Ag_C0_V0->SetBinError(89,97);
   qMap_Ag_C0_V0->SetBinError(91,417.1846);
   qMap_Ag_C0_V0->SetBinError(93,594.5889);
   qMap_Ag_C0_V0->SetBinError(94,145.8321);
   qMap_Ag_C0_V0->SetBinError(95,311.2346);
   qMap_Ag_C0_V0->SetBinError(96,153.1862);
   qMap_Ag_C0_V0->SetBinError(97,78);
   qMap_Ag_C0_V0->SetBinError(99,81.3941);
   qMap_Ag_C0_V0->SetBinError(100,188.82);
   qMap_Ag_C0_V0->SetBinError(101,262.3261);
   qMap_Ag_C0_V0->SetBinError(102,174.7741);
   qMap_Ag_C0_V0->SetBinError(103,250.056);
   qMap_Ag_C0_V0->SetBinError(104,356.7254);
   qMap_Ag_C0_V0->SetBinError(105,197.7321);
   qMap_Ag_C0_V0->SetBinError(106,14792.67);
   qMap_Ag_C0_V0->SetBinError(109,503.0785);
   qMap_Ag_C0_V0->SetBinError(163,984.445);
   qMap_Ag_C0_V0->SetBinError(217,92682.88);
   qMap_Ag_C0_V0->SetBinError(268,310.6075);
   qMap_Ag_C0_V0->SetBinError(271,1162.223);
   qMap_Ag_C0_V0->SetBinError(322,273.3679);
   qMap_Ag_C0_V0->SetBinError(325,734.6081);
   qMap_Ag_C0_V0->SetBinError(376,463.9634);
   qMap_Ag_C0_V0->SetBinError(379,65536.79);
   qMap_Ag_C0_V0->SetBinError(430,413.4562);
   qMap_Ag_C0_V0->SetBinError(433,340.846);
   qMap_Ag_C0_V0->SetBinError(484,148.5261);
   qMap_Ag_C0_V0->SetBinError(487,419.3519);
   qMap_Ag_C0_V0->SetBinError(538,355.6557);
   qMap_Ag_C0_V0->SetBinError(541,327.0229);
   qMap_Ag_C0_V0->SetBinError(595,607.3648);
   qMap_Ag_C0_V0->SetBinError(646,349.063);
   qMap_Ag_C0_V0->SetBinError(649,762.4625);
   qMap_Ag_C0_V0->SetBinError(700,583.325);
   qMap_Ag_C0_V0->SetBinError(703,65529.72);
   qMap_Ag_C0_V0->SetBinError(754,155.0419);
   qMap_Ag_C0_V0->SetBinError(757,771.2976);
   qMap_Ag_C0_V0->SetBinError(808,126.732);
   qMap_Ag_C0_V0->SetBinError(811,131069.3);
   qMap_Ag_C0_V0->SetBinError(862,480.1114);
   qMap_Ag_C0_V0->SetBinError(865,501.3931);
   qMap_Ag_C0_V0->SetBinError(916,419.7952);
   qMap_Ag_C0_V0->SetBinError(919,65758.15);
   qMap_Ag_C0_V0->SetBinError(970,573.8406);
   qMap_Ag_C0_V0->SetBinError(973,65543.93);
   qMap_Ag_C0_V0->SetBinError(1024,317.4319);
   qMap_Ag_C0_V0->SetBinError(1027,282.2694);
   qMap_Ag_C0_V0->SetBinError(1078,343.6597);
   qMap_Ag_C0_V0->SetBinError(1081,971.7891);
   qMap_Ag_C0_V0->SetBinError(1132,488.0307);
   qMap_Ag_C0_V0->SetBinError(1135,92667.7);
   qMap_Ag_C0_V0->SetBinError(1186,329.5269);
   qMap_Ag_C0_V0->SetBinError(1189,1085.56);
   qMap_Ag_C0_V0->SetBinError(1240,168.5556);
   qMap_Ag_C0_V0->SetBinError(1243,65540.62);
   qMap_Ag_C0_V0->SetBinError(1294,294.9983);
   qMap_Ag_C0_V0->SetBinError(1297,92675.9);
   qMap_Ag_C0_V0->SetBinError(1348,431.7986);
   qMap_Ag_C0_V0->SetBinError(1351,664.9098);
   qMap_Ag_C0_V0->SetBinError(1402,280.1428);
   qMap_Ag_C0_V0->SetBinError(1405,878.5397);
   qMap_Ag_C0_V0->SetBinError(1456,263.8674);
   qMap_Ag_C0_V0->SetBinError(1459,65518.81);
   qMap_Ag_C0_V0->SetBinError(1510,482.4645);
   qMap_Ag_C0_V0->SetBinError(1513,547.0265);
   qMap_Ag_C0_V0->SetBinError(1564,687.2998);
   qMap_Ag_C0_V0->SetBinError(1567,1036.974);
   qMap_Ag_C0_V0->SetBinError(1618,784.248);
   qMap_Ag_C0_V0->SetBinError(1621,813.2324);
   qMap_Ag_C0_V0->SetBinError(1672,238.7781);
   qMap_Ag_C0_V0->SetBinError(1675,8019.476);
   qMap_Ag_C0_V0->SetBinError(1726,262.1088);
   qMap_Ag_C0_V0->SetBinError(1729,65536.84);
   qMap_Ag_C0_V0->SetBinError(1780,276.5285);
   qMap_Ag_C0_V0->SetBinError(1783,566.536);
   qMap_Ag_C0_V0->SetBinError(1834,254.7685);
   qMap_Ag_C0_V0->SetBinError(1837,1597.112);
   qMap_Ag_C0_V0->SetBinError(1888,518.5152);
   qMap_Ag_C0_V0->SetBinError(1891,1261.733);
   qMap_Ag_C0_V0->SetBinError(1942,439.9193);
   qMap_Ag_C0_V0->SetBinError(1945,595.8859);
   qMap_Ag_C0_V0->SetBinError(1996,186.1021);
   qMap_Ag_C0_V0->SetBinError(1999,446.1311);
   qMap_Ag_C0_V0->SetBinError(2050,400.8179);
   qMap_Ag_C0_V0->SetBinError(2053,682.066);
   qMap_Ag_C0_V0->SetBinError(2104,460.6539);
   qMap_Ag_C0_V0->SetBinError(2107,1150.313);
   qMap_Ag_C0_V0->SetBinError(2158,203.794);
   qMap_Ag_C0_V0->SetBinError(2161,65537.49);
   qMap_Ag_C0_V0->SetBinError(2215,65533.96);
   qMap_Ag_C0_V0->SetBinError(2266,409.9744);
   qMap_Ag_C0_V0->SetBinError(2269,666.946);
   qMap_Ag_C0_V0->SetBinError(2288,1266.961);
   qMap_Ag_C0_V0->SetBinError(2289,131109.1);
   qMap_Ag_C0_V0->SetBinError(2290,196985);
   qMap_Ag_C0_V0->SetBinError(2291,196833);
   qMap_Ag_C0_V0->SetBinError(2292,92750.53);
   qMap_Ag_C0_V0->SetBinError(2320,228.0197);
   qMap_Ag_C0_V0->SetBinError(2323,902.4035);
   qMap_Ag_C0_V0->SetBinError(2342,3174.292);
   qMap_Ag_C0_V0->SetBinError(2343,328060.6);
   qMap_Ag_C0_V0->SetBinError(2344,17329.89);
   qMap_Ag_C0_V0->SetBinError(2345,18575.23);
   qMap_Ag_C0_V0->SetBinError(2346,93479.49);
   qMap_Ag_C0_V0->SetBinError(2347,570.4621);
   qMap_Ag_C0_V0->SetBinError(2374,697.2611);
   qMap_Ag_C0_V0->SetBinError(2377,1032.271);
   qMap_Ag_C0_V0->SetBinError(2396,67899.19);
   qMap_Ag_C0_V0->SetBinError(2397,18787.2);
   qMap_Ag_C0_V0->SetBinError(2398,18348.55);
   qMap_Ag_C0_V0->SetBinError(2399,20061.55);
   qMap_Ag_C0_V0->SetBinError(2400,16624.31);
   qMap_Ag_C0_V0->SetBinError(2401,6548.123);
   qMap_Ag_C0_V0->SetBinError(2428,440.0523);
   qMap_Ag_C0_V0->SetBinError(2431,217436.1);
   qMap_Ag_C0_V0->SetBinError(2450,20594.12);
   qMap_Ag_C0_V0->SetBinError(2451,22081.73);
   qMap_Ag_C0_V0->SetBinError(2452,22377.89);
   qMap_Ag_C0_V0->SetBinError(2453,23339.38);
   qMap_Ag_C0_V0->SetBinError(2454,17421.48);
   qMap_Ag_C0_V0->SetBinError(2455,16203.61);
   qMap_Ag_C0_V0->SetBinError(2482,392.3162);
   qMap_Ag_C0_V0->SetBinError(2485,831.2286);
   qMap_Ag_C0_V0->SetBinError(2504,20683);
   qMap_Ag_C0_V0->SetBinError(2505,22676.69);
   qMap_Ag_C0_V0->SetBinError(2506,25002.72);
   qMap_Ag_C0_V0->SetBinError(2507,24376.65);
   qMap_Ag_C0_V0->SetBinError(2508,19233.13);
   qMap_Ag_C0_V0->SetBinError(2509,19454.1);
   qMap_Ag_C0_V0->SetBinError(2536,181.7581);
   qMap_Ag_C0_V0->SetBinError(2539,66057.82);
   qMap_Ag_C0_V0->SetBinError(2558,21725.39);
   qMap_Ag_C0_V0->SetBinError(2559,23316.56);
   qMap_Ag_C0_V0->SetBinError(2560,23802.26);
   qMap_Ag_C0_V0->SetBinError(2561,26043.41);
   qMap_Ag_C0_V0->SetBinError(2562,19505.14);
   qMap_Ag_C0_V0->SetBinError(2563,17367.58);
   qMap_Ag_C0_V0->SetBinError(2590,580.1112);
   qMap_Ag_C0_V0->SetBinError(2593,370853.1);
   qMap_Ag_C0_V0->SetBinError(2612,19557.87);
   qMap_Ag_C0_V0->SetBinError(2613,21100.65);
   qMap_Ag_C0_V0->SetBinError(2614,23144.61);
   qMap_Ag_C0_V0->SetBinError(2615,21738.54);
   qMap_Ag_C0_V0->SetBinError(2616,19041.27);
   qMap_Ag_C0_V0->SetBinError(2617,14635.54);
   qMap_Ag_C0_V0->SetBinError(2644,281.0125);
   qMap_Ag_C0_V0->SetBinError(2647,532.7654);
   qMap_Ag_C0_V0->SetBinError(2666,14868.13);
   qMap_Ag_C0_V0->SetBinError(2667,18458.73);
   qMap_Ag_C0_V0->SetBinError(2668,20288.91);
   qMap_Ag_C0_V0->SetBinError(2669,18656.28);
   qMap_Ag_C0_V0->SetBinError(2670,16546.4);
   qMap_Ag_C0_V0->SetBinError(2671,2552.203);
   qMap_Ag_C0_V0->SetBinError(2698,235.134);
   qMap_Ag_C0_V0->SetBinError(2701,65538.31);
   qMap_Ag_C0_V0->SetBinError(2720,5276.888);
   qMap_Ag_C0_V0->SetBinError(2721,376783.6);
   qMap_Ag_C0_V0->SetBinError(2722,17963.06);
   qMap_Ag_C0_V0->SetBinError(2723,16620.15);
   qMap_Ag_C0_V0->SetBinError(2724,113836.3);
   qMap_Ag_C0_V0->SetBinError(2725,357.5766);
   qMap_Ag_C0_V0->SetBinError(2752,183.3739);
   qMap_Ag_C0_V0->SetBinError(2755,1191.346);
   qMap_Ag_C0_V0->SetBinError(2776,447.9922);
   qMap_Ag_C0_V0->SetBinError(2777,306.3837);
   qMap_Ag_C0_V0->SetBinError(2806,213.1924);
   qMap_Ag_C0_V0->SetBinError(2809,113663);
   qMap_Ag_C0_V0->SetBinError(2860,124.924);
   qMap_Ag_C0_V0->SetBinError(2863,5526.475);
   qMap_Ag_C0_V0->SetBinError(2914,609.3972);
   qMap_Ag_C0_V0->SetBinError(2917,65541.47);
   qMap_Ag_C0_V0->SetBinError(2968,278.1798);
   qMap_Ag_C0_V0->SetBinError(2971,146732.8);
   qMap_Ag_C0_V0->SetBinError(3022,65);
   qMap_Ag_C0_V0->SetBinError(3025,207242.6);
   qMap_Ag_C0_V0->SetBinError(3076,480.2812);
   qMap_Ag_C0_V0->SetBinError(3079,714953.3);
   qMap_Ag_C0_V0->SetBinError(3130,137.1896);
   qMap_Ag_C0_V0->SetBinError(3133,1453.504);
   qMap_Ag_C0_V0->SetBinError(3184,281.4267);
   qMap_Ag_C0_V0->SetBinError(3187,92813.97);
   qMap_Ag_C0_V0->SetBinError(3238,146.8366);
   qMap_Ag_C0_V0->SetBinError(3241,1415.75);
   qMap_Ag_C0_V0->SetBinError(3292,2853.36);
   qMap_Ag_C0_V0->SetBinError(3295,65913.14);
   qMap_Ag_C0_V0->SetBinError(3346,2805.664);
   qMap_Ag_C0_V0->SetBinError(3349,2533.258);
   qMap_Ag_C0_V0->SetBinError(3400,515.8411);
   qMap_Ag_C0_V0->SetBinError(3403,6164.273);
   qMap_Ag_C0_V0->SetBinError(3454,426.9555);
   qMap_Ag_C0_V0->SetBinError(3457,2732.828);
   qMap_Ag_C0_V0->SetBinError(3508,442.6816);
   qMap_Ag_C0_V0->SetBinError(3511,1321.061);
   qMap_Ag_C0_V0->SetBinError(3562,187.1336);
   qMap_Ag_C0_V0->SetBinError(3565,6541.936);
   qMap_Ag_C0_V0->SetBinError(3619,1533.298);
   qMap_Ag_C0_V0->SetBinError(3670,3518.348);
   qMap_Ag_C0_V0->SetBinError(3673,6258.476);
   qMap_Ag_C0_V0->SetBinError(3724,118.7939);
   qMap_Ag_C0_V0->SetBinError(3727,8350.153);
   qMap_Ag_C0_V0->SetBinError(3778,72);
   qMap_Ag_C0_V0->SetBinError(3781,65608.6);
   qMap_Ag_C0_V0->SetBinError(3832,2469.649);
   qMap_Ag_C0_V0->SetBinError(3835,131274.9);
   qMap_Ag_C0_V0->SetBinError(3886,341.0367);
   qMap_Ag_C0_V0->SetBinError(3889,173464);
   qMap_Ag_C0_V0->SetBinError(3940,81);
   qMap_Ag_C0_V0->SetBinError(3943,185576.4);
   qMap_Ag_C0_V0->SetBinError(3994,200.095);
   qMap_Ag_C0_V0->SetBinError(3997,1544.568);
   qMap_Ag_C0_V0->SetBinError(4048,145.9657);
   qMap_Ag_C0_V0->SetBinError(4102,272.5527);
   qMap_Ag_C0_V0->SetBinError(4105,2398.941);
   qMap_Ag_C0_V0->SetBinError(4156,673.6134);
   qMap_Ag_C0_V0->SetBinError(4159,65851.87);
   qMap_Ag_C0_V0->SetBinError(4210,1878.653);
   qMap_Ag_C0_V0->SetBinError(4213,1194.998);
   qMap_Ag_C0_V0->SetBinError(4264,312.4404);
   qMap_Ag_C0_V0->SetBinError(4267,9865.339);
   qMap_Ag_C0_V0->SetBinError(4318,188.82);
   qMap_Ag_C0_V0->SetBinError(4321,597.2428);
   qMap_Ag_C0_V0->SetBinError(4372,181.692);
   qMap_Ag_C0_V0->SetMinimum(0);
   qMap_Ag_C0_V0->SetEntries(1200597);
   qMap_Ag_C0_V0->SetStats(0);
   qMap_Ag_C0_V0->SetContour(20);
   qMap_Ag_C0_V0->SetContourLevel(0,0);
   qMap_Ag_C0_V0->SetContourLevel(1,9.674727);
   qMap_Ag_C0_V0->SetContourLevel(2,19.34945);
   qMap_Ag_C0_V0->SetContourLevel(3,29.02418);
   qMap_Ag_C0_V0->SetContourLevel(4,38.69891);
   qMap_Ag_C0_V0->SetContourLevel(5,48.37364);
   qMap_Ag_C0_V0->SetContourLevel(6,58.04836);
   qMap_Ag_C0_V0->SetContourLevel(7,67.72309);
   qMap_Ag_C0_V0->SetContourLevel(8,77.39782);
   qMap_Ag_C0_V0->SetContourLevel(9,87.07255);
   qMap_Ag_C0_V0->SetContourLevel(10,96.74727);
   qMap_Ag_C0_V0->SetContourLevel(11,106.422);
   qMap_Ag_C0_V0->SetContourLevel(12,116.0967);
   qMap_Ag_C0_V0->SetContourLevel(13,125.7715);
   qMap_Ag_C0_V0->SetContourLevel(14,135.4462);
   qMap_Ag_C0_V0->SetContourLevel(15,145.1209);
   qMap_Ag_C0_V0->SetContourLevel(16,154.7956);
   qMap_Ag_C0_V0->SetContourLevel(17,164.4704);
   qMap_Ag_C0_V0->SetContourLevel(18,174.1451);
   qMap_Ag_C0_V0->SetContourLevel(19,183.8198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   qMap_Ag_C0_V0->SetLineColor(ci);
   qMap_Ag_C0_V0->GetXaxis()->SetTitle("col");
   qMap_Ag_C0_V0->GetXaxis()->SetNdivisions(508);
   qMap_Ag_C0_V0->GetXaxis()->SetLabelFont(42);
   qMap_Ag_C0_V0->GetXaxis()->SetLabelSize(0.05);
   qMap_Ag_C0_V0->GetXaxis()->SetTitleSize(0.05);
   qMap_Ag_C0_V0->GetXaxis()->SetTitleOffset(1.1);
   qMap_Ag_C0_V0->GetXaxis()->SetTitleFont(42);
   qMap_Ag_C0_V0->GetYaxis()->SetTitle("row");
   qMap_Ag_C0_V0->GetYaxis()->SetRange(31,60);
   qMap_Ag_C0_V0->GetYaxis()->SetLabelFont(42);
   qMap_Ag_C0_V0->GetYaxis()->SetLabelSize(0.05);
   qMap_Ag_C0_V0->GetYaxis()->SetTitleSize(0.05);
   qMap_Ag_C0_V0->GetYaxis()->SetTitleOffset(1.1);
   qMap_Ag_C0_V0->GetYaxis()->SetTitleFont(42);
   qMap_Ag_C0_V0->GetZaxis()->SetLabelFont(42);
   qMap_Ag_C0_V0->GetZaxis()->SetLabelSize(0.035);
   qMap_Ag_C0_V0->GetZaxis()->SetTitleSize(0.035);
   qMap_Ag_C0_V0->GetZaxis()->SetTitleFont(42);




 //------ end data input ----------------




 //---------------------- Create Fitfunction and set parameters  ---------------------------------------------------

  TF2 *g2D =new TF2("g2d",Gaus2D,10,34,31,60,5);
  g2D -> SetParNames("Amplitude","X_{0}","#sigma_{x}","Y_{0}","#sigma_{y}");

  g2D -> SetParameters(200,23,2, 45,2);

  //-------------------------------------------------------------------------------------


  //------------------------------ SAVE NAME OF File ----------------------------------------------

    string name;
    cout << '\n' << "Please, enter the name of folder/file: " << name << " \n";

    cin >> name ;
    cout << '\n' << "Name is defined as: " << name << " \n \n";



  //------------------------------ Fit Data -------------------------------------------------

  qMap_Ag_C0_V0 -> Fit("g2d");

  //-------------------------------------------------------------------------------------



  // ---------------------- Config Plot ------------------------------------------------

  // Z-Axis
  qMap_Ag_C0_V0 -> GetZaxis() -> SetTitle("Mean Vcal");
  qMap_Ag_C0_V0 -> GetZaxis() -> SetTitleOffset(1.2);


  //Y-Axis
  qMap_Ag_C0_V0 -> GetYaxis() -> SetTitleOffset(1.5);
  qMap_Ag_C0_V0 -> GetYaxis() -> SetLabelSize( qMap_Ag_C0_V0 -> GetZaxis() -> GetLabelSize() ); //Y-Axis
  qMap_Ag_C0_V0 -> GetYaxis() -> SetTitleSize( qMap_Ag_C0_V0 -> GetZaxis() -> GetTitleSize() ); //Y-Axis
  //qMap_Ag_C0_V0 -> GetYaxis() -> SetRangeUser( g2D -> GetParameter(3) -10, g2D -> GetParameter(3) + 10);

  //X-Axis
  qMap_Ag_C0_V0 -> GetXaxis() -> SetTitleOffset(1.5);
  qMap_Ag_C0_V0 -> GetXaxis() -> SetRangeUser(g2D -> GetParameter(1) - 10, g2D -> GetParameter(1) + 10); // x-Axis
  qMap_Ag_C0_V0 -> GetXaxis() -> SetLabelSize( qMap_Ag_C0_V0 -> GetZaxis() -> GetLabelSize() ); //X-Axis
  //qMap_Ag_C0_V0 -> GetXaxis() -> SetTitleSize( qMap_Ag_C0_V0 -> GetZaxis() -> GetTitleSize() ); //X-Axis


  // ------------------------------------------------------------------------------------



  //------------------------------------Save Fit Params into File: my_file.txt ---------------------------------------------

  string para_name_list[] = {"Const","X_{0}","sigma_{x}","Y_{0}","sigma_{y}"};

  ofstream outFile(name + "_fit_params.txt");
  for ( int i = 0; i < 5; i++){
      outFile <<  para_name_list[i] << ":  " << g2D -> GetParameter(i) << "  " << g2D -> GetParError(i) << "\n";
  }

  //-------------------------------------------------------------------------------------


  TGraph2D *fitted_function = new TGraph2D();
  double_t P = 6;
  double_t x,y,z;
  TRandom *r = new TRandom();
  cout << "Here I am " <<g2D -> GetParameter(3) << "\n";
  for (Int_t N=0; N < 2000; N++) {

      x = r -> Gaus(g2D -> GetParameter(1),  5 * g2D -> GetParameter(2) );
      y = r -> Gaus(g2D -> GetParameter(3),  5 * g2D -> GetParameter(4) );;
      double x_comp =  ( x -  (  g2D -> GetParameter(1) ) )  / ( TMath::Sqrt(2) *  g2D -> GetParameter(2) );
      double y_comp = ( y - ( g2D -> GetParameter(3) ) ) / ( TMath::Sqrt(2) * ( g2D -> GetParameter(4) ) ) ;

      z = (g2D -> GetParameter(0)) *  TMath::Exp( - ( x_comp * x_comp + y_comp * y_comp) );
      fitted_function -> SetPoint(N,x,y,z);
  }

  //---------------------- Plot ---------------------------------------------------
  TCanvas *c1 = new TCanvas("c1", "c1", 3840, 2160);

  qMap_Ag_C0_V0->GetXaxis()->SetRange(10,34);
  qMap_Ag_C0_V0->Draw("Lego2"); // Cont0
  //fitted_function -> Draw("Surf,same"); // Cont3

  //-------------------------------------------------------------------------------------



  //---------------------- Set Legend ---------------------------------------------------

  auto legend = new TLegend(0.75,0.75,0.98,0.98);
  legend->AddEntry(qMap_Ag_C0_V0,"Pixel","f");
  legend->AddEntry(g2D,"2D Gaussian Fit","f");
  legend -> Draw();

  //-------------------------------------------------------------------------------------
  string plot_name = name + "_plot.pdf";

  c1 -> SaveAs( plot_name.c_str() );
  //fitted_function -> Draw("P,same");






}
