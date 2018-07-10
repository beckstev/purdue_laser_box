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
   qMap_Ag_C0_V0->SetBinEntries(55,22512);
   qMap_Ag_C0_V0->SetBinEntries(56,65);
   qMap_Ag_C0_V0->SetBinEntries(57,47);
   qMap_Ag_C0_V0->SetBinEntries(58,11);
   qMap_Ag_C0_V0->SetBinEntries(59,22);
   qMap_Ag_C0_V0->SetBinEntries(60,10);
   qMap_Ag_C0_V0->SetBinEntries(61,68);
   qMap_Ag_C0_V0->SetBinEntries(62,10);
   qMap_Ag_C0_V0->SetBinEntries(63,16);
   qMap_Ag_C0_V0->SetBinEntries(64,44);
   qMap_Ag_C0_V0->SetBinEntries(65,50);
   qMap_Ag_C0_V0->SetBinEntries(66,32);
   qMap_Ag_C0_V0->SetBinEntries(67,2124);
   qMap_Ag_C0_V0->SetBinEntries(70,17);
   qMap_Ag_C0_V0->SetBinEntries(71,4);
   qMap_Ag_C0_V0->SetBinEntries(74,9);
   qMap_Ag_C0_V0->SetBinEntries(75,6);
   qMap_Ag_C0_V0->SetBinEntries(77,1);
   qMap_Ag_C0_V0->SetBinEntries(78,3);
   qMap_Ag_C0_V0->SetBinEntries(79,20);
   qMap_Ag_C0_V0->SetBinEntries(80,7);
   qMap_Ag_C0_V0->SetBinEntries(81,7);
   qMap_Ag_C0_V0->SetBinEntries(82,2);
   qMap_Ag_C0_V0->SetBinEntries(83,3);
   qMap_Ag_C0_V0->SetBinEntries(84,1);
   qMap_Ag_C0_V0->SetBinEntries(85,1);
   qMap_Ag_C0_V0->SetBinEntries(87,3);
   qMap_Ag_C0_V0->SetBinEntries(88,1);
   qMap_Ag_C0_V0->SetBinEntries(90,1);
   qMap_Ag_C0_V0->SetBinEntries(91,13);
   qMap_Ag_C0_V0->SetBinEntries(93,37);
   qMap_Ag_C0_V0->SetBinEntries(94,4);
   qMap_Ag_C0_V0->SetBinEntries(95,3);
   qMap_Ag_C0_V0->SetBinEntries(96,2);
   qMap_Ag_C0_V0->SetBinEntries(99,2);
   qMap_Ag_C0_V0->SetBinEntries(100,2);
   qMap_Ag_C0_V0->SetBinEntries(101,3);
   qMap_Ag_C0_V0->SetBinEntries(102,1);
   qMap_Ag_C0_V0->SetBinEntries(103,3);
   qMap_Ag_C0_V0->SetBinEntries(104,5);
   qMap_Ag_C0_V0->SetBinEntries(105,1);
   qMap_Ag_C0_V0->SetBinEntries(106,20055);
   qMap_Ag_C0_V0->SetBinEntries(109,19);
   qMap_Ag_C0_V0->SetBinEntries(163,50);
   qMap_Ag_C0_V0->SetBinEntries(217,86);
   qMap_Ag_C0_V0->SetBinEntries(268,3);
   qMap_Ag_C0_V0->SetBinEntries(271,98);
   qMap_Ag_C0_V0->SetBinEntries(322,2);
   qMap_Ag_C0_V0->SetBinEntries(325,41);
   qMap_Ag_C0_V0->SetBinEntries(376,7);
   qMap_Ag_C0_V0->SetBinEntries(379,132);
   qMap_Ag_C0_V0->SetBinEntries(430,10);
   qMap_Ag_C0_V0->SetBinEntries(433,6);
   qMap_Ag_C0_V0->SetBinEntries(484,5);
   qMap_Ag_C0_V0->SetBinEntries(487,16);
   qMap_Ag_C0_V0->SetBinEntries(538,7);
   qMap_Ag_C0_V0->SetBinEntries(541,10);
   qMap_Ag_C0_V0->SetBinEntries(595,19);
   qMap_Ag_C0_V0->SetBinEntries(646,8);
   qMap_Ag_C0_V0->SetBinEntries(649,31);
   qMap_Ag_C0_V0->SetBinEntries(700,23);
   qMap_Ag_C0_V0->SetBinEntries(703,38);
   qMap_Ag_C0_V0->SetBinEntries(754,1);
   qMap_Ag_C0_V0->SetBinEntries(757,45);
   qMap_Ag_C0_V0->SetBinEntries(811,99);
   qMap_Ag_C0_V0->SetBinEntries(862,15);
   qMap_Ag_C0_V0->SetBinEntries(865,12);
   qMap_Ag_C0_V0->SetBinEntries(916,9);
   qMap_Ag_C0_V0->SetBinEntries(919,2026);
   qMap_Ag_C0_V0->SetBinEntries(970,23);
   qMap_Ag_C0_V0->SetBinEntries(973,184);
   qMap_Ag_C0_V0->SetBinEntries(1024,9);
   qMap_Ag_C0_V0->SetBinEntries(1078,10);
   qMap_Ag_C0_V0->SetBinEntries(1081,51);
   qMap_Ag_C0_V0->SetBinEntries(1132,20);
   qMap_Ag_C0_V0->SetBinEntries(1135,31);
   qMap_Ag_C0_V0->SetBinEntries(1186,8);
   qMap_Ag_C0_V0->SetBinEntries(1189,48);
   qMap_Ag_C0_V0->SetBinEntries(1240,1);
   qMap_Ag_C0_V0->SetBinEntries(1243,56);
   qMap_Ag_C0_V0->SetBinEntries(1294,7);
   qMap_Ag_C0_V0->SetBinEntries(1297,88);
   qMap_Ag_C0_V0->SetBinEntries(1348,6);
   qMap_Ag_C0_V0->SetBinEntries(1351,29);
   qMap_Ag_C0_V0->SetBinEntries(1402,3);
   qMap_Ag_C0_V0->SetBinEntries(1405,64);
   qMap_Ag_C0_V0->SetBinEntries(1456,4);
   qMap_Ag_C0_V0->SetBinEntries(1459,51);
   qMap_Ag_C0_V0->SetBinEntries(1510,16);
   qMap_Ag_C0_V0->SetBinEntries(1513,13);
   qMap_Ag_C0_V0->SetBinEntries(1564,35);
   qMap_Ag_C0_V0->SetBinEntries(1567,54);
   qMap_Ag_C0_V0->SetBinEntries(1618,35);
   qMap_Ag_C0_V0->SetBinEntries(1621,31);
   qMap_Ag_C0_V0->SetBinEntries(1672,4);
   qMap_Ag_C0_V0->SetBinEntries(1675,4433);
   qMap_Ag_C0_V0->SetBinEntries(1726,3);
   qMap_Ag_C0_V0->SetBinEntries(1729,26);
   qMap_Ag_C0_V0->SetBinEntries(1780,3);
   qMap_Ag_C0_V0->SetBinEntries(1783,18);
   qMap_Ag_C0_V0->SetBinEntries(1834,3);
   qMap_Ag_C0_V0->SetBinEntries(1837,139);
   qMap_Ag_C0_V0->SetBinEntries(1888,17);
   qMap_Ag_C0_V0->SetBinEntries(1891,91);
   qMap_Ag_C0_V0->SetBinEntries(1942,17);
   qMap_Ag_C0_V0->SetBinEntries(1945,20);
   qMap_Ag_C0_V0->SetBinEntries(1996,4);
   qMap_Ag_C0_V0->SetBinEntries(1999,9);
   qMap_Ag_C0_V0->SetBinEntries(2050,14);
   qMap_Ag_C0_V0->SetBinEntries(2053,19);
   qMap_Ag_C0_V0->SetBinEntries(2104,10);
   qMap_Ag_C0_V0->SetBinEntries(2107,57);
   qMap_Ag_C0_V0->SetBinEntries(2158,5);
   qMap_Ag_C0_V0->SetBinEntries(2161,129);
   qMap_Ag_C0_V0->SetBinEntries(2212,1);
   qMap_Ag_C0_V0->SetBinEntries(2215,88);
   qMap_Ag_C0_V0->SetBinEntries(2266,13);
   qMap_Ag_C0_V0->SetBinEntries(2269,24);
   qMap_Ag_C0_V0->SetBinEntries(2288,527);
   qMap_Ag_C0_V0->SetBinEntries(2289,4455);
   qMap_Ag_C0_V0->SetBinEntries(2290,21390);
   qMap_Ag_C0_V0->SetBinEntries(2291,11977);
   qMap_Ag_C0_V0->SetBinEntries(2292,3152);
   qMap_Ag_C0_V0->SetBinEntries(2320,5);
   qMap_Ag_C0_V0->SetBinEntries(2323,47);
   qMap_Ag_C0_V0->SetBinEntries(2342,2474);
   qMap_Ag_C0_V0->SetBinEntries(2343,21493);
   qMap_Ag_C0_V0->SetBinEntries(2344,23904);
   qMap_Ag_C0_V0->SetBinEntries(2345,23832);
   qMap_Ag_C0_V0->SetBinEntries(2346,8331);
   qMap_Ag_C0_V0->SetBinEntries(2347,51);
   qMap_Ag_C0_V0->SetBinEntries(2374,26);
   qMap_Ag_C0_V0->SetBinEntries(2377,46);
   qMap_Ag_C0_V0->SetBinEntries(2396,19636);
   qMap_Ag_C0_V0->SetBinEntries(2397,24070);
   qMap_Ag_C0_V0->SetBinEntries(2398,24021);
   qMap_Ag_C0_V0->SetBinEntries(2399,24066);
   qMap_Ag_C0_V0->SetBinEntries(2400,23437);
   qMap_Ag_C0_V0->SetBinEntries(2401,2206);
   qMap_Ag_C0_V0->SetBinEntries(2428,18);
   qMap_Ag_C0_V0->SetBinEntries(2431,2482);
   qMap_Ag_C0_V0->SetBinEntries(2450,23677);
   qMap_Ag_C0_V0->SetBinEntries(2451,24013);
   qMap_Ag_C0_V0->SetBinEntries(2452,24311);
   qMap_Ag_C0_V0->SetBinEntries(2453,24217);
   qMap_Ag_C0_V0->SetBinEntries(2454,23858);
   qMap_Ag_C0_V0->SetBinEntries(2455,17429);
   qMap_Ag_C0_V0->SetBinEntries(2482,12);
   qMap_Ag_C0_V0->SetBinEntries(2485,35);
   qMap_Ag_C0_V0->SetBinEntries(2504,23848);
   qMap_Ag_C0_V0->SetBinEntries(2505,24228);
   qMap_Ag_C0_V0->SetBinEntries(2506,24404);
   qMap_Ag_C0_V0->SetBinEntries(2507,24176);
   qMap_Ag_C0_V0->SetBinEntries(2508,23983);
   qMap_Ag_C0_V0->SetBinEntries(2509,23808);
   qMap_Ag_C0_V0->SetBinEntries(2536,3);
   qMap_Ag_C0_V0->SetBinEntries(2539,4566);
   qMap_Ag_C0_V0->SetBinEntries(2558,23865);
   qMap_Ag_C0_V0->SetBinEntries(2559,24022);
   qMap_Ag_C0_V0->SetBinEntries(2560,24318);
   qMap_Ag_C0_V0->SetBinEntries(2561,24367);
   qMap_Ag_C0_V0->SetBinEntries(2562,23955);
   qMap_Ag_C0_V0->SetBinEntries(2563,18353);
   qMap_Ag_C0_V0->SetBinEntries(2590,18);
   qMap_Ag_C0_V0->SetBinEntries(2593,6804);
   qMap_Ag_C0_V0->SetBinEntries(2612,23884);
   qMap_Ag_C0_V0->SetBinEntries(2613,23838);
   qMap_Ag_C0_V0->SetBinEntries(2614,24283);
   qMap_Ag_C0_V0->SetBinEntries(2615,24210);
   qMap_Ag_C0_V0->SetBinEntries(2616,24094);
   qMap_Ag_C0_V0->SetBinEntries(2617,11412);
   qMap_Ag_C0_V0->SetBinEntries(2644,1);
   qMap_Ag_C0_V0->SetBinEntries(2647,13);
   qMap_Ag_C0_V0->SetBinEntries(2666,20693);
   qMap_Ag_C0_V0->SetBinEntries(2667,23932);
   qMap_Ag_C0_V0->SetBinEntries(2668,24123);
   qMap_Ag_C0_V0->SetBinEntries(2669,23838);
   qMap_Ag_C0_V0->SetBinEntries(2670,23750);
   qMap_Ag_C0_V0->SetBinEntries(2671,305);
   qMap_Ag_C0_V0->SetBinEntries(2698,3);
   qMap_Ag_C0_V0->SetBinEntries(2701,76);
   qMap_Ag_C0_V0->SetBinEntries(2720,6200);
   qMap_Ag_C0_V0->SetBinEntries(2721,22477);
   qMap_Ag_C0_V0->SetBinEntries(2722,23880);
   qMap_Ag_C0_V0->SetBinEntries(2723,23646);
   qMap_Ag_C0_V0->SetBinEntries(2724,10233);
   qMap_Ag_C0_V0->SetBinEntries(2725,6);
   qMap_Ag_C0_V0->SetBinEntries(2752,4);
   qMap_Ag_C0_V0->SetBinEntries(2755,59);
   qMap_Ag_C0_V0->SetBinEntries(2776,21);
   qMap_Ag_C0_V0->SetBinEntries(2777,34);
   qMap_Ag_C0_V0->SetBinEntries(2806,3);
   qMap_Ag_C0_V0->SetBinEntries(2809,2172);
   qMap_Ag_C0_V0->SetBinEntries(2860,4);
   qMap_Ag_C0_V0->SetBinEntries(2863,1746);
   qMap_Ag_C0_V0->SetBinEntries(2914,23);
   qMap_Ag_C0_V0->SetBinEntries(2917,61);
   qMap_Ag_C0_V0->SetBinEntries(2968,1);
   qMap_Ag_C0_V0->SetBinEntries(2971,4173);
   qMap_Ag_C0_V0->SetBinEntries(3022,2);
   qMap_Ag_C0_V0->SetBinEntries(3025,353);
   qMap_Ag_C0_V0->SetBinEntries(3076,11);
   qMap_Ag_C0_V0->SetBinEntries(3079,6455);
   qMap_Ag_C0_V0->SetBinEntries(3130,3);
   qMap_Ag_C0_V0->SetBinEntries(3133,103);
   qMap_Ag_C0_V0->SetBinEntries(3184,1);
   qMap_Ag_C0_V0->SetBinEntries(3187,2063);
   qMap_Ag_C0_V0->SetBinEntries(3238,1);
   qMap_Ag_C0_V0->SetBinEntries(3241,98);
   qMap_Ag_C0_V0->SetBinEntries(3292,550);
   qMap_Ag_C0_V0->SetBinEntries(3295,3318);
   qMap_Ag_C0_V0->SetBinEntries(3346,587);
   qMap_Ag_C0_V0->SetBinEntries(3349,405);
   qMap_Ag_C0_V0->SetBinEntries(3400,19);
   qMap_Ag_C0_V0->SetBinEntries(3403,2004);
   qMap_Ag_C0_V0->SetBinEntries(3454,14);
   qMap_Ag_C0_V0->SetBinEntries(3457,363);
   qMap_Ag_C0_V0->SetBinEntries(3508,12);
   qMap_Ag_C0_V0->SetBinEntries(3511,68);
   qMap_Ag_C0_V0->SetBinEntries(3562,2);
   qMap_Ag_C0_V0->SetBinEntries(3565,2295);
   qMap_Ag_C0_V0->SetBinEntries(3616,1);
   qMap_Ag_C0_V0->SetBinEntries(3619,145);
   qMap_Ag_C0_V0->SetBinEntries(3670,956);
   qMap_Ag_C0_V0->SetBinEntries(3673,1995);
   qMap_Ag_C0_V0->SetBinEntries(3727,4573);
   qMap_Ag_C0_V0->SetBinEntries(3778,1);
   qMap_Ag_C0_V0->SetBinEntries(3781,508);
   qMap_Ag_C0_V0->SetBinEntries(3832,366);
   qMap_Ag_C0_V0->SetBinEntries(3835,3222);
   qMap_Ag_C0_V0->SetBinEntries(3886,3);
   qMap_Ag_C0_V0->SetBinEntries(3889,1836);
   qMap_Ag_C0_V0->SetBinEntries(3940,2);
   qMap_Ag_C0_V0->SetBinEntries(3943,4694);
   qMap_Ag_C0_V0->SetBinEntries(3997,99);
   qMap_Ag_C0_V0->SetBinEntries(4048,1);
   qMap_Ag_C0_V0->SetBinEntries(4102,1);
   qMap_Ag_C0_V0->SetBinEntries(4105,292);
   qMap_Ag_C0_V0->SetBinEntries(4156,21);
   qMap_Ag_C0_V0->SetBinEntries(4159,2021);
   qMap_Ag_C0_V0->SetBinEntries(4210,211);
   qMap_Ag_C0_V0->SetBinEntries(4213,78);
   qMap_Ag_C0_V0->SetBinEntries(4264,4);
   qMap_Ag_C0_V0->SetBinEntries(4267,6680);
   qMap_Ag_C0_V0->SetBinEntries(4321,13);
   qMap_Ag_C0_V0->SetBinContent(55,2796383);
   qMap_Ag_C0_V0->SetBinContent(56,5150);
   qMap_Ag_C0_V0->SetBinContent(57,4665);
   qMap_Ag_C0_V0->SetBinContent(58,1024);
   qMap_Ag_C0_V0->SetBinContent(59,2000);
   qMap_Ag_C0_V0->SetBinContent(60,1019);
   qMap_Ag_C0_V0->SetBinContent(61,6915);
   qMap_Ag_C0_V0->SetBinContent(62,955);
   qMap_Ag_C0_V0->SetBinContent(63,1691);
   qMap_Ag_C0_V0->SetBinContent(64,4091);
   qMap_Ag_C0_V0->SetBinContent(65,4765);
   qMap_Ag_C0_V0->SetBinContent(66,2752);
   qMap_Ag_C0_V0->SetBinContent(67,191397);
   qMap_Ag_C0_V0->SetBinContent(70,1583);
   qMap_Ag_C0_V0->SetBinContent(71,438);
   qMap_Ag_C0_V0->SetBinContent(74,818);
   qMap_Ag_C0_V0->SetBinContent(75,600);
   qMap_Ag_C0_V0->SetBinContent(77,94);
   qMap_Ag_C0_V0->SetBinContent(78,323);
   qMap_Ag_C0_V0->SetBinContent(79,1700);
   qMap_Ag_C0_V0->SetBinContent(80,619);
   qMap_Ag_C0_V0->SetBinContent(81,697);
   qMap_Ag_C0_V0->SetBinContent(82,209);
   qMap_Ag_C0_V0->SetBinContent(83,268);
   qMap_Ag_C0_V0->SetBinContent(84,106);
   qMap_Ag_C0_V0->SetBinContent(85,141);
   qMap_Ag_C0_V0->SetBinContent(87,214);
   qMap_Ag_C0_V0->SetBinContent(88,59);
   qMap_Ag_C0_V0->SetBinContent(90,76);
   qMap_Ag_C0_V0->SetBinContent(91,1026);
   qMap_Ag_C0_V0->SetBinContent(93,67968);
   qMap_Ag_C0_V0->SetBinContent(94,228);
   qMap_Ag_C0_V0->SetBinContent(95,238);
   qMap_Ag_C0_V0->SetBinContent(96,202);
   qMap_Ag_C0_V0->SetBinContent(99,164);
   qMap_Ag_C0_V0->SetBinContent(100,92);
   qMap_Ag_C0_V0->SetBinContent(101,237);
   qMap_Ag_C0_V0->SetBinContent(102,93);
   qMap_Ag_C0_V0->SetBinContent(103,262);
   qMap_Ag_C0_V0->SetBinContent(104,451);
   qMap_Ag_C0_V0->SetBinContent(105,67);
   qMap_Ag_C0_V0->SetBinContent(106,1754001);
   qMap_Ag_C0_V0->SetBinContent(109,1342);
   qMap_Ag_C0_V0->SetBinContent(163,3346);
   qMap_Ag_C0_V0->SetBinContent(217,5714);
   qMap_Ag_C0_V0->SetBinContent(268,186);
   qMap_Ag_C0_V0->SetBinContent(271,6270);
   qMap_Ag_C0_V0->SetBinContent(322,124);
   qMap_Ag_C0_V0->SetBinContent(325,2788);
   qMap_Ag_C0_V0->SetBinContent(376,451);
   qMap_Ag_C0_V0->SetBinContent(379,8183);
   qMap_Ag_C0_V0->SetBinContent(430,704);
   qMap_Ag_C0_V0->SetBinContent(433,325);
   qMap_Ag_C0_V0->SetBinContent(484,404);
   qMap_Ag_C0_V0->SetBinContent(487,948);
   qMap_Ag_C0_V0->SetBinContent(538,522);
   qMap_Ag_C0_V0->SetBinContent(541,546);
   qMap_Ag_C0_V0->SetBinContent(595,1333);
   qMap_Ag_C0_V0->SetBinContent(646,582);
   qMap_Ag_C0_V0->SetBinContent(649,1777);
   qMap_Ag_C0_V0->SetBinContent(700,1702);
   qMap_Ag_C0_V0->SetBinContent(703,2604);
   qMap_Ag_C0_V0->SetBinContent(754,52);
   qMap_Ag_C0_V0->SetBinContent(757,2660);
   qMap_Ag_C0_V0->SetBinContent(811,6687);
   qMap_Ag_C0_V0->SetBinContent(862,1041);
   qMap_Ag_C0_V0->SetBinContent(865,831);
   qMap_Ag_C0_V0->SetBinContent(916,634);
   qMap_Ag_C0_V0->SetBinContent(919,152999);
   qMap_Ag_C0_V0->SetBinContent(970,1786);
   qMap_Ag_C0_V0->SetBinContent(973,12352);
   qMap_Ag_C0_V0->SetBinContent(1024,414);
   qMap_Ag_C0_V0->SetBinContent(1078,705);
   qMap_Ag_C0_V0->SetBinContent(1081,3659);
   qMap_Ag_C0_V0->SetBinContent(1132,1229);
   qMap_Ag_C0_V0->SetBinContent(1135,67395);
   qMap_Ag_C0_V0->SetBinContent(1186,551);
   qMap_Ag_C0_V0->SetBinContent(1189,3654);
   qMap_Ag_C0_V0->SetBinContent(1240,74);
   qMap_Ag_C0_V0->SetBinContent(1243,4214);
   qMap_Ag_C0_V0->SetBinContent(1294,564);
   qMap_Ag_C0_V0->SetBinContent(1297,6235);
   qMap_Ag_C0_V0->SetBinContent(1348,404);
   qMap_Ag_C0_V0->SetBinContent(1351,1937);
   qMap_Ag_C0_V0->SetBinContent(1402,210);
   qMap_Ag_C0_V0->SetBinContent(1405,69588);
   qMap_Ag_C0_V0->SetBinContent(1456,232);
   qMap_Ag_C0_V0->SetBinContent(1459,3704);
   qMap_Ag_C0_V0->SetBinContent(1510,1178);
   qMap_Ag_C0_V0->SetBinContent(1513,1161);
   qMap_Ag_C0_V0->SetBinContent(1564,2178);
   qMap_Ag_C0_V0->SetBinContent(1567,3402);
   qMap_Ag_C0_V0->SetBinContent(1618,2630);
   qMap_Ag_C0_V0->SetBinContent(1621,67791);
   qMap_Ag_C0_V0->SetBinContent(1672,273);
   qMap_Ag_C0_V0->SetBinContent(1675,351374);
   qMap_Ag_C0_V0->SetBinContent(1726,182);
   qMap_Ag_C0_V0->SetBinContent(1729,1823);
   qMap_Ag_C0_V0->SetBinContent(1780,202);
   qMap_Ag_C0_V0->SetBinContent(1783,1424);
   qMap_Ag_C0_V0->SetBinContent(1834,177);
   qMap_Ag_C0_V0->SetBinContent(1837,11035);
   qMap_Ag_C0_V0->SetBinContent(1888,1271);
   qMap_Ag_C0_V0->SetBinContent(1891,6597);
   qMap_Ag_C0_V0->SetBinContent(1942,1056);
   qMap_Ag_C0_V0->SetBinContent(1945,1555);
   qMap_Ag_C0_V0->SetBinContent(1996,273);
   qMap_Ag_C0_V0->SetBinContent(1999,717);
   qMap_Ag_C0_V0->SetBinContent(2050,815);
   qMap_Ag_C0_V0->SetBinContent(2053,1635);
   qMap_Ag_C0_V0->SetBinContent(2104,847);
   qMap_Ag_C0_V0->SetBinContent(2107,4247);
   qMap_Ag_C0_V0->SetBinContent(2158,323);
   qMap_Ag_C0_V0->SetBinContent(2161,74625);
   qMap_Ag_C0_V0->SetBinContent(2212,91);
   qMap_Ag_C0_V0->SetBinContent(2215,7052);
   qMap_Ag_C0_V0->SetBinContent(2266,970);
   qMap_Ag_C0_V0->SetBinContent(2269,1660);
   qMap_Ag_C0_V0->SetBinContent(2288,111369);
   qMap_Ag_C0_V0->SetBinContent(2289,1151496);
   qMap_Ag_C0_V0->SetBinContent(2290,2190139);
   qMap_Ag_C0_V0->SetBinContent(2291,1368783);
   qMap_Ag_C0_V0->SetBinContent(2292,285936);
   qMap_Ag_C0_V0->SetBinContent(2320,302);
   qMap_Ag_C0_V0->SetBinContent(2323,3948);
   qMap_Ag_C0_V0->SetBinContent(2342,232481);
   qMap_Ag_C0_V0->SetBinContent(2343,7053197);
   qMap_Ag_C0_V0->SetBinContent(2344,2446020);
   qMap_Ag_C0_V0->SetBinContent(2345,2554047);
   qMap_Ag_C0_V0->SetBinContent(2346,802772);
   qMap_Ag_C0_V0->SetBinContent(2347,5478);
   qMap_Ag_C0_V0->SetBinContent(2374,1975);
   qMap_Ag_C0_V0->SetBinContent(2377,3756);
   qMap_Ag_C0_V0->SetBinContent(2396,1909295);
   qMap_Ag_C0_V0->SetBinContent(2397,2611031);
   qMap_Ag_C0_V0->SetBinContent(2398,2568975);
   qMap_Ag_C0_V0->SetBinContent(2399,2913199);
   qMap_Ag_C0_V0->SetBinContent(2400,2226021);
   qMap_Ag_C0_V0->SetBinContent(2401,220516);
   qMap_Ag_C0_V0->SetBinContent(2428,1216);
   qMap_Ag_C0_V0->SetBinContent(2431,917722);
   qMap_Ag_C0_V0->SetBinContent(2450,2931289);
   qMap_Ag_C0_V0->SetBinContent(2451,3048586);
   qMap_Ag_C0_V0->SetBinContent(2452,3060180);
   qMap_Ag_C0_V0->SetBinContent(2453,3192634);
   qMap_Ag_C0_V0->SetBinContent(2454,2490246);
   qMap_Ag_C0_V0->SetBinContent(2455,1804398);
   qMap_Ag_C0_V0->SetBinContent(2482,875);
   qMap_Ag_C0_V0->SetBinContent(2485,2814);
   qMap_Ag_C0_V0->SetBinContent(2504,2924028);
   qMap_Ag_C0_V0->SetBinContent(2505,3147937);
   qMap_Ag_C0_V0->SetBinContent(2506,3367101);
   qMap_Ag_C0_V0->SetBinContent(2507,3335239);
   qMap_Ag_C0_V0->SetBinContent(2508,2683346);
   qMap_Ag_C0_V0->SetBinContent(2509,2755777);
   qMap_Ag_C0_V0->SetBinContent(2536,204);
   qMap_Ag_C0_V0->SetBinContent(2539,374686);
   qMap_Ag_C0_V0->SetBinContent(2558,3074550);
   qMap_Ag_C0_V0->SetBinContent(2559,3249453);
   qMap_Ag_C0_V0->SetBinContent(2560,3154735);
   qMap_Ag_C0_V0->SetBinContent(2561,3579298);
   qMap_Ag_C0_V0->SetBinContent(2562,2740018);
   qMap_Ag_C0_V0->SetBinContent(2563,2082087);
   qMap_Ag_C0_V0->SetBinContent(2590,1018);
   qMap_Ag_C0_V0->SetBinContent(2593,3257972);
   qMap_Ag_C0_V0->SetBinContent(2612,2809470);
   qMap_Ag_C0_V0->SetBinContent(2613,2764235);
   qMap_Ag_C0_V0->SetBinContent(2614,3170286);
   qMap_Ag_C0_V0->SetBinContent(2615,3030829);
   qMap_Ag_C0_V0->SetBinContent(2616,2726178);
   qMap_Ag_C0_V0->SetBinContent(2617,1241217);
   qMap_Ag_C0_V0->SetBinContent(2644,56);
   qMap_Ag_C0_V0->SetBinContent(2647,967);
   qMap_Ag_C0_V0->SetBinContent(2666,1808711);
   qMap_Ag_C0_V0->SetBinContent(2667,2584351);
   qMap_Ag_C0_V0->SetBinContent(2668,2878101);
   qMap_Ag_C0_V0->SetBinContent(2669,2596079);
   qMap_Ag_C0_V0->SetBinContent(2670,2278448);
   qMap_Ag_C0_V0->SetBinContent(2671,33196);
   qMap_Ag_C0_V0->SetBinContent(2698,198);
   qMap_Ag_C0_V0->SetBinContent(2701,5831);
   qMap_Ag_C0_V0->SetBinContent(2720,550984);
   qMap_Ag_C0_V0->SetBinContent(2721,5727945);
   qMap_Ag_C0_V0->SetBinContent(2722,2433486);
   qMap_Ag_C0_V0->SetBinContent(2723,2285482);
   qMap_Ag_C0_V0->SetBinContent(2724,890562);
   qMap_Ag_C0_V0->SetBinContent(2725,555);
   qMap_Ag_C0_V0->SetBinContent(2752,269);
   qMap_Ag_C0_V0->SetBinContent(2755,70307);
   qMap_Ag_C0_V0->SetBinContent(2776,1562);
   qMap_Ag_C0_V0->SetBinContent(2777,2315);
   qMap_Ag_C0_V0->SetBinContent(2806,162);
   qMap_Ag_C0_V0->SetBinContent(2809,184560);
   qMap_Ag_C0_V0->SetBinContent(2860,288);
   qMap_Ag_C0_V0->SetBinContent(2863,151097);
   qMap_Ag_C0_V0->SetBinContent(2914,1604);
   qMap_Ag_C0_V0->SetBinContent(2917,5233);
   qMap_Ag_C0_V0->SetBinContent(2968,57);
   qMap_Ag_C0_V0->SetBinContent(2971,584429);
   qMap_Ag_C0_V0->SetBinContent(3022,115);
   qMap_Ag_C0_V0->SetBinContent(3025,681441);
   qMap_Ag_C0_V0->SetBinContent(3076,750);
   qMap_Ag_C0_V0->SetBinContent(3079,1.10108e+07);
   qMap_Ag_C0_V0->SetBinContent(3130,192);
   qMap_Ag_C0_V0->SetBinContent(3133,7908);
   qMap_Ag_C0_V0->SetBinContent(3184,71);
   qMap_Ag_C0_V0->SetBinContent(3187,355717);
   qMap_Ag_C0_V0->SetBinContent(3238,78);
   qMap_Ag_C0_V0->SetBinContent(3241,8311);
   qMap_Ag_C0_V0->SetBinContent(3292,102612);
   qMap_Ag_C0_V0->SetBinContent(3295,271603);
   qMap_Ag_C0_V0->SetBinContent(3346,41067);
   qMap_Ag_C0_V0->SetBinContent(3349,31213);
   qMap_Ag_C0_V0->SetBinContent(3400,1205);
   qMap_Ag_C0_V0->SetBinContent(3403,172978);
   qMap_Ag_C0_V0->SetBinContent(3454,846);
   qMap_Ag_C0_V0->SetBinContent(3457,31717);
   qMap_Ag_C0_V0->SetBinContent(3508,879);
   qMap_Ag_C0_V0->SetBinContent(3511,5423);
   qMap_Ag_C0_V0->SetBinContent(3562,109);
   qMap_Ag_C0_V0->SetBinContent(3565,196751);
   qMap_Ag_C0_V0->SetBinContent(3616,52);
   qMap_Ag_C0_V0->SetBinContent(3619,11519);
   qMap_Ag_C0_V0->SetBinContent(3670,65214);
   qMap_Ag_C0_V0->SetBinContent(3673,177555);
   qMap_Ag_C0_V0->SetBinContent(3727,448830);
   qMap_Ag_C0_V0->SetBinContent(3778,54);
   qMap_Ag_C0_V0->SetBinContent(3781,43585);
   qMap_Ag_C0_V0->SetBinContent(3832,26953);
   qMap_Ag_C0_V0->SetBinContent(3835,672865);
   qMap_Ag_C0_V0->SetBinContent(3886,236);
   qMap_Ag_C0_V0->SetBinContent(3889,799477);
   qMap_Ag_C0_V0->SetBinContent(3940,148);
   qMap_Ag_C0_V0->SetBinContent(3943,1528409);
   qMap_Ag_C0_V0->SetBinContent(3997,9061);
   qMap_Ag_C0_V0->SetBinContent(4048,55);
   qMap_Ag_C0_V0->SetBinContent(4102,98);
   qMap_Ag_C0_V0->SetBinContent(4105,89932);
   qMap_Ag_C0_V0->SetBinContent(4156,1518);
   qMap_Ag_C0_V0->SetBinContent(4159,190205);
   qMap_Ag_C0_V0->SetBinContent(4210,16728);
   qMap_Ag_C0_V0->SetBinContent(4213,6831);
   qMap_Ag_C0_V0->SetBinContent(4264,273);
   qMap_Ag_C0_V0->SetBinContent(4267,561869);
   qMap_Ag_C0_V0->SetBinContent(4321,1270);
   qMap_Ag_C0_V0->SetBinError(55,245484.8);
   qMap_Ag_C0_V0->SetBinError(56,652.2116);
   qMap_Ag_C0_V0->SetBinError(57,704.5616);
   qMap_Ag_C0_V0->SetBinError(58,319.8812);
   qMap_Ag_C0_V0->SetBinError(59,442.816);
   qMap_Ag_C0_V0->SetBinError(60,325.5902);
   qMap_Ag_C0_V0->SetBinError(61,856.8623);
   qMap_Ag_C0_V0->SetBinError(62,305.8284);
   qMap_Ag_C0_V0->SetBinError(63,436.6864);
   qMap_Ag_C0_V0->SetBinError(64,629.5991);
   qMap_Ag_C0_V0->SetBinError(65,685.7164);
   qMap_Ag_C0_V0->SetBinError(66,502.4739);
   qMap_Ag_C0_V0->SetBinError(67,4266.267);
   qMap_Ag_C0_V0->SetBinError(70,393.7321);
   qMap_Ag_C0_V0->SetBinError(71,221.7611);
   qMap_Ag_C0_V0->SetBinError(74,281.6274);
   qMap_Ag_C0_V0->SetBinError(75,251.9921);
   qMap_Ag_C0_V0->SetBinError(77,94);
   qMap_Ag_C0_V0->SetBinError(78,189.9974);
   qMap_Ag_C0_V0->SetBinError(79,397.2782);
   qMap_Ag_C0_V0->SetBinError(80,241.0747);
   qMap_Ag_C0_V0->SetBinError(81,265.7235);
   qMap_Ag_C0_V0->SetBinError(82,150.0833);
   qMap_Ag_C0_V0->SetBinError(83,159.9187);
   qMap_Ag_C0_V0->SetBinError(84,106);
   qMap_Ag_C0_V0->SetBinError(85,141);
   qMap_Ag_C0_V0->SetBinError(87,125.4273);
   qMap_Ag_C0_V0->SetBinError(88,59);
   qMap_Ag_C0_V0->SetBinError(90,76);
   qMap_Ag_C0_V0->SetBinError(91,286.9878);
   qMap_Ag_C0_V0->SetBinError(93,65531.39);
   qMap_Ag_C0_V0->SetBinError(94,115.8792);
   qMap_Ag_C0_V0->SetBinError(95,137.8187);
   qMap_Ag_C0_V0->SetBinError(96,143.4015);
   qMap_Ag_C0_V0->SetBinError(99,116.6619);
   qMap_Ag_C0_V0->SetBinError(100,70.93659);
   qMap_Ag_C0_V0->SetBinError(101,137.0292);
   qMap_Ag_C0_V0->SetBinError(102,93);
   qMap_Ag_C0_V0->SetBinError(103,155.8589);
   qMap_Ag_C0_V0->SetBinError(104,208.7031);
   qMap_Ag_C0_V0->SetBinError(105,67);
   qMap_Ag_C0_V0->SetBinError(106,12787.68);
   qMap_Ag_C0_V0->SetBinError(109,337.2002);
   qMap_Ag_C0_V0->SetBinError(163,523.0392);
   qMap_Ag_C0_V0->SetBinError(217,662.7775);
   qMap_Ag_C0_V0->SetBinError(268,111.5616);
   qMap_Ag_C0_V0->SetBinError(271,715.3153);
   qMap_Ag_C0_V0->SetBinError(322,87.68124);
   qMap_Ag_C0_V0->SetBinError(325,489.2934);
   qMap_Ag_C0_V0->SetBinError(376,172.8959);
   qMap_Ag_C0_V0->SetBinError(379,791.8668);
   qMap_Ag_C0_V0->SetBinError(430,226.8303);
   qMap_Ag_C0_V0->SetBinError(433,145.0483);
   qMap_Ag_C0_V0->SetBinError(484,184.0598);
   qMap_Ag_C0_V0->SetBinError(487,255.0961);
   qMap_Ag_C0_V0->SetBinError(538,204.6558);
   qMap_Ag_C0_V0->SetBinError(541,246.4508);
   qMap_Ag_C0_V0->SetBinError(595,330.7219);
   qMap_Ag_C0_V0->SetBinError(646,209.8047);
   qMap_Ag_C0_V0->SetBinError(649,371.6732);
   qMap_Ag_C0_V0->SetBinError(700,394.1497);
   qMap_Ag_C0_V0->SetBinError(703,459.8239);
   qMap_Ag_C0_V0->SetBinError(754,52);
   qMap_Ag_C0_V0->SetBinError(757,444.1306);
   qMap_Ag_C0_V0->SetBinError(811,751.8903);
   qMap_Ag_C0_V0->SetBinError(862,282.1471);
   qMap_Ag_C0_V0->SetBinError(865,255.1568);
   qMap_Ag_C0_V0->SetBinError(916,218.0183);
   qMap_Ag_C0_V0->SetBinError(919,3707.25);
   qMap_Ag_C0_V0->SetBinError(970,382.4395);
   qMap_Ag_C0_V0->SetBinError(973,1002.122);
   qMap_Ag_C0_V0->SetBinError(1024,141.6686);
   qMap_Ag_C0_V0->SetBinError(1078,228.8558);
   qMap_Ag_C0_V0->SetBinError(1081,550.1227);
   qMap_Ag_C0_V0->SetBinError(1132,280.6047);
   qMap_Ag_C0_V0->SetBinError(1135,65532.08);
   qMap_Ag_C0_V0->SetBinError(1186,202.2498);
   qMap_Ag_C0_V0->SetBinError(1189,567.0767);
   qMap_Ag_C0_V0->SetBinError(1240,74);
   qMap_Ag_C0_V0->SetBinError(1243,600.4448);
   qMap_Ag_C0_V0->SetBinError(1294,221.5265);
   qMap_Ag_C0_V0->SetBinError(1297,713.8382);
   qMap_Ag_C0_V0->SetBinError(1348,174.3273);
   qMap_Ag_C0_V0->SetBinError(1351,415.7367);
   qMap_Ag_C0_V0->SetBinError(1402,121.8606);
   qMap_Ag_C0_V0->SetBinError(1405,65522.38);
   qMap_Ag_C0_V0->SetBinError(1456,119.1889);
   qMap_Ag_C0_V0->SetBinError(1459,560.7905);
   qMap_Ag_C0_V0->SetBinError(1510,305.2507);
   qMap_Ag_C0_V0->SetBinError(1513,341.4777);
   qMap_Ag_C0_V0->SetBinError(1564,381.7381);
   qMap_Ag_C0_V0->SetBinError(1567,499.0391);
   qMap_Ag_C0_V0->SetBinError(1618,460.2217);
   qMap_Ag_C0_V0->SetBinError(1621,65529.66);
   qMap_Ag_C0_V0->SetBinError(1672,137.2989);
   qMap_Ag_C0_V0->SetBinError(1675,5658.434);
   qMap_Ag_C0_V0->SetBinError(1726,110.6165);
   qMap_Ag_C0_V0->SetBinError(1729,379.9066);
   qMap_Ag_C0_V0->SetBinError(1780,117.652);
   qMap_Ag_C0_V0->SetBinError(1783,368.8062);
   qMap_Ag_C0_V0->SetBinError(1834,105.6835);
   qMap_Ag_C0_V0->SetBinError(1837,992.454);
   qMap_Ag_C0_V0->SetBinError(1888,313.1565);
   qMap_Ag_C0_V0->SetBinError(1891,737.6903);
   qMap_Ag_C0_V0->SetBinError(1942,262.0611);
   qMap_Ag_C0_V0->SetBinError(1945,366.7001);
   qMap_Ag_C0_V0->SetBinError(1996,137.8441);
   qMap_Ag_C0_V0->SetBinError(1999,248.5578);
   qMap_Ag_C0_V0->SetBinError(2050,224.2253);
   qMap_Ag_C0_V0->SetBinError(2053,384.1159);
   qMap_Ag_C0_V0->SetBinError(2104,276.917);
   qMap_Ag_C0_V0->SetBinError(2107,593.2512);
   qMap_Ag_C0_V0->SetBinError(2158,149.2816);
   qMap_Ag_C0_V0->SetBinError(2161,65538.67);
   qMap_Ag_C0_V0->SetBinError(2212,91);
   qMap_Ag_C0_V0->SetBinError(2215,781.6035);
   qMap_Ag_C0_V0->SetBinError(2266,282.4748);
   qMap_Ag_C0_V0->SetBinError(2269,363.2327);
   qMap_Ag_C0_V0->SetBinError(2288,65565.42);
   qMap_Ag_C0_V0->SetBinError(2289,236325.5);
   qMap_Ag_C0_V0->SetBinError(2290,196909.2);
   qMap_Ag_C0_V0->SetBinError(2291,173590.6);
   qMap_Ag_C0_V0->SetBinError(2292,65659.92);
   qMap_Ag_C0_V0->SetBinError(2320,142.464);
   qMap_Ag_C0_V0->SetBinError(2323,591.4524);
   qMap_Ag_C0_V0->SetBinError(2342,4805.131);
   qMap_Ag_C0_V0->SetBinError(2343,578921.9);
   qMap_Ag_C0_V0->SetBinError(2344,67335.32);
   qMap_Ag_C0_V0->SetBinError(2345,16762.69);
   qMap_Ag_C0_V0->SetBinError(2346,92960.67);
   qMap_Ag_C0_V0->SetBinError(2347,780.943);
   qMap_Ag_C0_V0->SetBinError(2374,401.8171);
   qMap_Ag_C0_V0->SetBinError(2377,582.9631);
   qMap_Ag_C0_V0->SetBinError(2396,14060.3);
   qMap_Ag_C0_V0->SetBinError(2397,17115.86);
   qMap_Ag_C0_V0->SetBinError(2398,16747.34);
   qMap_Ag_C0_V0->SetBinError(2399,18963.43);
   qMap_Ag_C0_V0->SetBinError(2400,67094.33);
   qMap_Ag_C0_V0->SetBinError(2401,4796.877);
   qMap_Ag_C0_V0->SetBinError(2428,293.8469);
   qMap_Ag_C0_V0->SetBinError(2431,217388.9);
   qMap_Ag_C0_V0->SetBinError(2450,68202.99);
   qMap_Ag_C0_V0->SetBinError(2451,19898.32);
   qMap_Ag_C0_V0->SetBinError(2452,19778.43);
   qMap_Ag_C0_V0->SetBinError(2453,20658.38);
   qMap_Ag_C0_V0->SetBinError(2454,16223.11);
   qMap_Ag_C0_V0->SetBinError(2455,13947.25);
   qMap_Ag_C0_V0->SetBinError(2482,254.0217);
   qMap_Ag_C0_V0->SetBinError(2485,512.5446);
   qMap_Ag_C0_V0->SetBinError(2504,19113.37);
   qMap_Ag_C0_V0->SetBinError(2505,20421.98);
   qMap_Ag_C0_V0->SetBinError(2506,21720.23);
   qMap_Ag_C0_V0->SetBinError(2507,21534.31);
   qMap_Ag_C0_V0->SetBinError(2508,17490.54);
   qMap_Ag_C0_V0->SetBinError(2509,18002.55);
   qMap_Ag_C0_V0->SetBinError(2536,121.2271);
   qMap_Ag_C0_V0->SetBinError(2539,5860.588);
   qMap_Ag_C0_V0->SetBinError(2558,20068.39);
   qMap_Ag_C0_V0->SetBinError(2559,21140.68);
   qMap_Ag_C0_V0->SetBinError(2560,20440.98);
   qMap_Ag_C0_V0->SetBinError(2561,69335.39);
   qMap_Ag_C0_V0->SetBinError(2562,17938.42);
   qMap_Ag_C0_V0->SetBinError(2563,15557.25);
   qMap_Ag_C0_V0->SetBinError(2590,248.0927);
   qMap_Ag_C0_V0->SetBinError(2593,419685.9);
   qMap_Ag_C0_V0->SetBinError(2612,67956);
   qMap_Ag_C0_V0->SetBinError(2613,18127.89);
   qMap_Ag_C0_V0->SetBinError(2614,20554.43);
   qMap_Ag_C0_V0->SetBinError(2615,19630.81);
   qMap_Ag_C0_V0->SetBinError(2616,17761.18);
   qMap_Ag_C0_V0->SetBinError(2617,11802.35);
   qMap_Ag_C0_V0->SetBinError(2644,56);
   qMap_Ag_C0_V0->SetBinError(2647,274.7635);
   qMap_Ag_C0_V0->SetBinError(2666,13226.69);
   qMap_Ag_C0_V0->SetBinError(2667,16854.71);
   qMap_Ag_C0_V0->SetBinError(2668,18683.3);
   qMap_Ag_C0_V0->SetBinError(2669,16946.07);
   qMap_Ag_C0_V0->SetBinError(2670,14946.51);
   qMap_Ag_C0_V0->SetBinError(2671,1922.483);
   qMap_Ag_C0_V0->SetBinError(2698,114.4203);
   qMap_Ag_C0_V0->SetBinError(2701,692.8514);
   qMap_Ag_C0_V0->SetBinError(2720,92847.48);
   qMap_Ag_C0_V0->SetBinError(2721,490607.4);
   qMap_Ag_C0_V0->SetBinError(2722,16018.42);
   qMap_Ag_C0_V0->SetBinError(2723,15045.49);
   qMap_Ag_C0_V0->SetBinError(2724,66058.32);
   qMap_Ag_C0_V0->SetBinError(2725,227.6686);
   qMap_Ag_C0_V0->SetBinError(2752,135.7092);
   qMap_Ag_C0_V0->SetBinError(2755,65530.33);
   qMap_Ag_C0_V0->SetBinError(2776,350.5139);
   qMap_Ag_C0_V0->SetBinError(2777,415.9074);
   qMap_Ag_C0_V0->SetBinError(2806,94.04254);
   qMap_Ag_C0_V0->SetBinError(2809,4147.116);
   qMap_Ag_C0_V0->SetBinError(2860,145.4923);
   qMap_Ag_C0_V0->SetBinError(2863,3742.387);
   qMap_Ag_C0_V0->SetBinError(2914,346.5198);
   qMap_Ag_C0_V0->SetBinError(2917,701.75);
   qMap_Ag_C0_V0->SetBinError(2968,57);
   qMap_Ag_C0_V0->SetBinError(2971,131160.6);
   qMap_Ag_C0_V0->SetBinError(3022,83.21658);
   qMap_Ag_C0_V0->SetBinError(3025,207238.1);
   qMap_Ag_C0_V0->SetBinError(3076,233.7905);
   qMap_Ag_C0_V0->SetBinError(3079,828977.1);
   qMap_Ag_C0_V0->SetBinError(3130,114.0877);
   qMap_Ag_C0_V0->SetBinError(3133,807.5122);
   qMap_Ag_C0_V0->SetBinError(3184,71);
   qMap_Ag_C0_V0->SetBinError(3187,113548.7);
   qMap_Ag_C0_V0->SetBinError(3238,78);
   qMap_Ag_C0_V0->SetBinError(3241,854.4817);
   qMap_Ag_C0_V0->SetBinError(3292,65548.73);
   qMap_Ag_C0_V0->SetBinError(3295,4914.277);
   qMap_Ag_C0_V0->SetBinError(3346,1739.336);
   qMap_Ag_C0_V0->SetBinError(3349,1657.347);
   qMap_Ag_C0_V0->SetBinError(3400,283.3743);
   qMap_Ag_C0_V0->SetBinError(3403,4027.016);
   qMap_Ag_C0_V0->SetBinError(3454,233.645);
   qMap_Ag_C0_V0->SetBinError(3457,1727.891);
   qMap_Ag_C0_V0->SetBinError(3508,257.6606);
   qMap_Ag_C0_V0->SetBinError(3511,687.8815);
   qMap_Ag_C0_V0->SetBinError(3562,77.46612);
   qMap_Ag_C0_V0->SetBinError(3565,4266.592);
   qMap_Ag_C0_V0->SetBinError(3616,52);
   qMap_Ag_C0_V0->SetBinError(3619,984.3318);
   qMap_Ag_C0_V0->SetBinError(3670,2188.492);
   qMap_Ag_C0_V0->SetBinError(3673,4090.787);
   qMap_Ag_C0_V0->SetBinError(3727,65792.69);
   qMap_Ag_C0_V0->SetBinError(3778,54);
   qMap_Ag_C0_V0->SetBinError(3781,2003.462);
   qMap_Ag_C0_V0->SetBinError(3832,1446.018);
   qMap_Ag_C0_V0->SetBinError(3835,160582.9);
   qMap_Ag_C0_V0->SetBinError(3886,141.0532);
   qMap_Ag_C0_V0->SetBinError(3889,207260.8);
   qMap_Ag_C0_V0->SetBinError(3940,104.69);
   qMap_Ag_C0_V0->SetBinError(3943,270280.8);
   qMap_Ag_C0_V0->SetBinError(3997,930.6723);
   qMap_Ag_C0_V0->SetBinError(4048,55);
   qMap_Ag_C0_V0->SetBinError(4102,98);
   qMap_Ag_C0_V0->SetBinError(4105,65551.3);
   qMap_Ag_C0_V0->SetBinError(4156,339.4289);
   qMap_Ag_C0_V0->SetBinError(4159,4359.659);
   qMap_Ag_C0_V0->SetBinError(4210,1199.281);
   qMap_Ag_C0_V0->SetBinError(4213,793.5572);
   qMap_Ag_C0_V0->SetBinError(4264,137.5754);
   qMap_Ag_C0_V0->SetBinError(4267,7206.929);
   qMap_Ag_C0_V0->SetBinError(4321,364.0247);
   qMap_Ag_C0_V0->SetMinimum(0);
   qMap_Ag_C0_V0->SetEntries(1117634);
   qMap_Ag_C0_V0->SetContour(20);
   qMap_Ag_C0_V0->SetContourLevel(0,0);
   qMap_Ag_C0_V0->SetContourLevel(1,109.3403);
   qMap_Ag_C0_V0->SetContourLevel(2,218.6806);
   qMap_Ag_C0_V0->SetContourLevel(3,328.021);
   qMap_Ag_C0_V0->SetContourLevel(4,437.3613);
   qMap_Ag_C0_V0->SetContourLevel(5,546.7016);
   qMap_Ag_C0_V0->SetContourLevel(6,656.0419);
   qMap_Ag_C0_V0->SetContourLevel(7,765.3823);
   qMap_Ag_C0_V0->SetContourLevel(8,874.7226);
   qMap_Ag_C0_V0->SetContourLevel(9,984.0629);
   qMap_Ag_C0_V0->SetContourLevel(10,1093.403);
   qMap_Ag_C0_V0->SetContourLevel(11,1202.744);
   qMap_Ag_C0_V0->SetContourLevel(12,1312.084);
   qMap_Ag_C0_V0->SetContourLevel(13,1421.424);
   qMap_Ag_C0_V0->SetContourLevel(14,1530.765);
   qMap_Ag_C0_V0->SetContourLevel(15,1640.105);
   qMap_Ag_C0_V0->SetContourLevel(16,1749.445);
   qMap_Ag_C0_V0->SetContourLevel(17,1858.785);
   qMap_Ag_C0_V0->SetContourLevel(18,1968.126);
   qMap_Ag_C0_V0->SetContourLevel(19,2077.466);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   qMap_Ag_C0_V0->SetLineColor(ci);
   qMap_Ag_C0_V0->GetXaxis()->SetTitle("col");
   qMap_Ag_C0_V0->GetXaxis()->SetRange(0,36);
   qMap_Ag_C0_V0->GetXaxis()->SetNdivisions(508);
   qMap_Ag_C0_V0->GetXaxis()->SetLabelFont(42);
   qMap_Ag_C0_V0->GetXaxis()->SetLabelSize(0.05);
   qMap_Ag_C0_V0->GetXaxis()->SetTitleSize(0.05);
   qMap_Ag_C0_V0->GetXaxis()->SetTitleOffset(1.1);
   qMap_Ag_C0_V0->GetXaxis()->SetTitleFont(42);
   qMap_Ag_C0_V0->GetYaxis()->SetTitle("row");
   qMap_Ag_C0_V0->GetYaxis()->SetRange(30,60);
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

  TF2 *g2D =new TF2("g2d",Gaus2D,0,50,0,80,5);
  g2D -> SetParNames("Amplitude","X_{0}","#sigma_{x}","Y_{0}","#sigma_{y}");

  g2D -> SetParameters(200,30,0.75, 46,1);

  //-------------------------------------------------------------------------------------


  //------------------------------ SAVE NAME OF File ----------------------------------------------

    string name;
    cout << '\n' << "Please, enter the name of folder/file: " << name << " \n";

    cin >> name ;
    cout << '\n' << "Name is defined as: " << name << " \n \n";



  //------------------------------ Fit Data -------------------------------------------------

  //qMap_Ag_C0_V0 -> Fit("g2d");

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
  qMap_Ag_C0_V0 -> GetXaxis() -> SetLabelSize( qMap_Ag_C0_V0 -> GetZaxis() -> GetLabelSize() ); //Y-Axis
  //qMap_Ag_C0_V0 -> GetXaxis() -> SetTitleSize( qMap_Ag_C0_V0 -> GetZaxis() -> GetTitleSize() ); //Y-Axis


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
  qMap_Ag_C0_V0->GetXaxis()->SetRange(0,36);
  
  qMap_Ag_C0_V0->Draw(); // Cont0
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
