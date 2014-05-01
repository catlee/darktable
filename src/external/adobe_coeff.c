// file generated by update_dcraw.sh, do not edit!
static void dt_dcraw_adobe_coeff(const char *make, const char *model, float cam_xyz[1][12])
{
static const struct {
const char *prefix;
short black, maximum, trans[12];
} table[] = {
{ "AGFAPHOTO DC-833m", 0, 0,	/* DJC */
{ 11438,-3762,-1115,-2409,9914,2497,-1227,2295,5300 } },
{ "Apple QuickTake", 0, 0,		/* DJC */
{ 21392,-5653,-3353,2406,8010,-415,7166,1427,2078 } },
{ "Canon EOS D2000", 0, 0,
{ 24542,-10860,-3401,-1490,11370,-297,2858,-605,3225 } },
{ "Canon EOS D6000", 0, 0,
{ 20482,-7172,-3125,-1033,10410,-285,2542,226,3136 } },
{ "Canon EOS D30", 0, 0,
{ 9805,-2689,-1312,-5803,13064,3068,-2438,3075,8775 } },
{ "Canon EOS D60", 0, 0xfa0,
{ 6188,-1341,-890,-7168,14489,2937,-2640,3228,8483 } },
{ "Canon EOS 5D Mark III", 0, 0x3c80,
{ 6722,-635,-963,-4287,12460,2028,-908,2162,5668 } },
{ "Canon EOS 5D Mark II", 0, 0x3cf0,
{ 4716,603,-830,-7798,15474,2480,-1496,1937,6651 } },
{ "Canon EOS 5D", 0, 0xe6c,
{ 6347,-479,-972,-8297,15954,2480,-1968,2131,7649 } },
{ "Canon EOS 6D", 0, 0x3c82,
{ 7034,-804,-1014,-4420,12564,2058,-851,1994,5758 } },
{ "Canon EOS 7D", 0, 0x3510,
{ 6844,-996,-856,-3876,11761,2396,-593,1772,6198 } },
{ "Canon EOS 10D", 0, 0xfa0,
{ 8197,-2000,-1118,-6714,14335,2592,-2536,3178,8266 } },
{ "Canon EOS 20Da", 0, 0,
{ 14155,-5065,-1382,-6550,14633,2039,-1623,1824,6561 } },
{ "Canon EOS 20D", 0, 0xfff,
{ 6599,-537,-891,-8071,15783,2424,-1983,2234,7462 } },
{ "Canon EOS 30D", 0, 0,
{ 6257,-303,-1000,-7880,15621,2396,-1714,1904,7046 } },
{ "Canon EOS 40D", 0, 0x3f60,
{ 6071,-747,-856,-7653,15365,2441,-2025,2553,7315 } },
{ "Canon EOS 50D", 0, 0x3d93,
{ 4920,616,-593,-6493,13964,2784,-1774,3178,7005 } },
{ "Canon EOS 60D", 0, 0x2ff7,
{ 6719,-994,-925,-4408,12426,2211,-887,2129,6051 } },
{ "Canon EOS 70D", 0, 0x3bc7,
{ 7034,-804,-1014,-4420,12564,2058,-851,1994,5758 } },
{ "Canon EOS 100D", 0, 0x350f,
{ 6602,-841,-939,-4472,12458,2247,-975,2039,6148 } },
{ "Canon EOS 300D", 0, 0xfa0,
{ 8197,-2000,-1118,-6714,14335,2592,-2536,3178,8266 } },
{ "Canon EOS 350D", 0, 0xfff,
{ 6018,-617,-965,-8645,15881,2975,-1530,1719,7642 } },
{ "Canon EOS 400D", 0, 0xe8e,
{ 7054,-1501,-990,-8156,15544,2812,-1278,1414,7796 } },
{ "Canon EOS 450D", 0, 0x390d,
{ 5784,-262,-821,-7539,15064,2672,-1982,2681,7427 } },
{ "Canon EOS 500D", 0, 0x3479,
{ 4763,712,-646,-6821,14399,2640,-1921,3276,6561 } },
{ "Canon EOS 550D", 0, 0x3dd7,
{ 6941,-1164,-857,-3825,11597,2534,-416,1540,6039 } },
{ "Canon EOS 600D", 0, 0x3510,
{ 6461,-907,-882,-4300,12184,2378,-819,1944,5931 } },
{ "Canon EOS 650D", 0, 0x354d,
{ 6602,-841,-939,-4472,12458,2247,-975,2039,6148 } },
{ "Canon EOS 700D", 0, 0x3c00,
{ 6602,-841,-939,-4472,12458,2247,-975,2039,6148 } },
{ "Canon EOS 1000D", 0, 0xe43,
{ 6771,-1139,-977,-7818,15123,2928,-1244,1437,7533 } },
{ "Canon EOS 1100D", 0, 0x3510,
{ 6444,-904,-893,-4563,12308,2535,-903,2016,6728 } },
{ "Canon EOS 1200D", 0, 0,
{ 6461,-907,-882,-4300,12184,2378,-819,1944,5931 } },
{ "Canon EOS M", 0, 0,
{ 6602,-841,-939,-4472,12458,2247,-975,2039,6148 } },
{ "Canon EOS-1Ds Mark III", 0, 0x3bb0,
{ 5859,-211,-930,-8255,16017,2353,-1732,1887,7448 } },
{ "Canon EOS-1Ds Mark II", 0, 0xe80,
{ 6517,-602,-867,-8180,15926,2378,-1618,1771,7633 } },
{ "Canon EOS-1D Mark IV", 0, 0x3bb0,
{ 6014,-220,-795,-4109,12014,2361,-561,1824,5787 } },
{ "Canon EOS-1D Mark III", 0, 0x3bb0,
{ 6291,-540,-976,-8350,16145,2311,-1714,1858,7326 } },
{ "Canon EOS-1D Mark II N", 0, 0xe80,
{ 6240,-466,-822,-8180,15825,2500,-1801,1938,8042 } },
{ "Canon EOS-1D Mark II", 0, 0xe80,
{ 6264,-582,-724,-8312,15948,2504,-1744,1919,8664 } },
{ "Canon EOS-1DS", 0, 0xe20,
{ 4374,3631,-1743,-7520,15212,2472,-2892,3632,8161 } },
{ "Canon EOS-1D C", 0, 0x3c4e,
{ 6847,-614,-1014,-4669,12737,2139,-1197,2488,6846 } },
{ "Canon EOS-1D X", 0, 0x3c4e,
{ 6847,-614,-1014,-4669,12737,2139,-1197,2488,6846 } },
{ "Canon EOS-1D", 0, 0xe20,
{ 6806,-179,-1020,-8097,16415,1687,-3267,4236,7690 } },
{ "Canon EOS C500", 853, 0,            /* DJC */
{ 17851,-10604,922,-7425,16662,763,-3660,3636,22278 } },
{ "Canon EOS", 0, 0,
{ 8197,-2000,-1118,-6714,14335,2592,-2536,3178,8266 } },
{ "Canon PowerShot A530", 0, 0,
{ 0 } },	/* don't want the A5 matrix */
{ "Canon PowerShot A540", 0, 0,
{ 6871,-2020,-1250,-1484,5668,454,-95,632,2086 } },
{ "Canon PowerShot A50", 0, 0,
{ -5300,9846,1776,3436,684,3939,-5540,9879,6200,-1404,11175,217 } },
{ "Canon PowerShot A5", 0, 0,
{ -4801,9475,1952,2926,1611,4094,-5259,10164,5947,-1554,10883,547 } },
{ "Canon PowerShot G10", 0, 0,
{ 11093,-3906,-1028,-5047,12492,2879,-1003,1750,5561 } },
{ "Canon PowerShot G11", 0, 0,
{ 12177,-4817,-1069,-1612,9864,2049,-98,850,4471 } },
{ "Canon PowerShot G12", 0, 0,
{ 13244,-5501,-1248,-1508,9858,1935,-270,1083,4366 } },
{ "Canon PowerShot G15", 0, 0,
{ 7474,-2301,-567,-4056,11456,2975,-222,716,4181 } },
{ "Canon PowerShot G16", 0, 0,
{ 8020,-2687,-682,-3704,11879,2052,-965,1921,5556 } },
{ "Canon PowerShot G1 X", 0, 0,
{ 7378,-1255,-1043,-4088,12251,2048,-876,1946,5805 } },
{ "Canon PowerShot G1", 0, 0,
{ -4778,9467,2172,4743,-1141,4344,-5146,9908,6077,-1566,11051,557 } },
{ "Canon PowerShot G2", 0, 0,
{ 9087,-2693,-1049,-6715,14382,2537,-2291,2819,7790 } },
{ "Canon PowerShot G3", 0, 0,
{ 9212,-2781,-1073,-6573,14189,2605,-2300,2844,7664 } },
{ "Canon PowerShot G5", 0, 0,
{ 9757,-2872,-933,-5972,13861,2301,-1622,2328,7212 } },
{ "Canon PowerShot G6", 0, 0,
{ 9877,-3775,-871,-7613,14807,3072,-1448,1305,7485 } },
{ "Canon PowerShot G9", 0, 0,
{ 7368,-2141,-598,-5621,13254,2625,-1418,1696,5743 } },
{ "Canon PowerShot Pro1", 0, 0,
{ 10062,-3522,-999,-7643,15117,2730,-765,817,7323 } },
{ "Canon PowerShot Pro70", 34, 0,
{ -4155,9818,1529,3939,-25,4522,-5521,9870,6610,-2238,10873,1342 } },
{ "Canon PowerShot Pro90", 0, 0,
{ -4963,9896,2235,4642,-987,4294,-5162,10011,5859,-1770,11230,577 } },
{ "Canon PowerShot S30", 0, 0,
{ 10566,-3652,-1129,-6552,14662,2006,-2197,2581,7670 } },
{ "Canon PowerShot S40", 0, 0,
{ 8510,-2487,-940,-6869,14231,2900,-2318,2829,9013 } },
{ "Canon PowerShot S45", 0, 0,
{ 8163,-2333,-955,-6682,14174,2751,-2077,2597,8041 } },
{ "Canon PowerShot S50", 0, 0,
{ 8882,-2571,-863,-6348,14234,2288,-1516,2172,6569 } },
{ "Canon PowerShot S60", 0, 0,
{ 8795,-2482,-797,-7804,15403,2573,-1422,1996,7082 } },
{ "Canon PowerShot S70", 0, 0,
{ 9976,-3810,-832,-7115,14463,2906,-901,989,7889 } },
{ "Canon PowerShot S90", 0, 0,
{ 12374,-5016,-1049,-1677,9902,2078,-83,852,4683 } },
{ "Canon PowerShot S95", 0, 0,
{ 13440,-5896,-1279,-1236,9598,1931,-180,1001,4651 } },
{ "Canon PowerShot S100", 0, 0,
{ 7968,-2565,-636,-2873,10697,2513,180,667,4211 } },
{ "Canon PowerShot S110", 0, 0,
{ 8039,-2643,-654,-3783,11230,2930,-206,690,4194 } },
{ "Canon PowerShot S120", 0, 0,
{ 6961,-1685,-695,-4625,12945,1836,-1114,2152,5518 } },
{ "Canon PowerShot SX1 IS", 0, 0,
{ 6578,-259,-502,-5974,13030,3309,-308,1058,4970 } },
{ "Canon PowerShot SX50 HS", 0, 0,
{ 12432,-4753,-1247,-2110,10691,1629,-412,1623,4926 } },
{ "Canon PowerShot A3300", 0, 0,       /* DJC */
{ 10826,-3654,-1023,-3215,11310,1906,0,999,4960 } },
{ "Canon PowerShot A470", 0, 0,	/* DJC */
{ 12513,-4407,-1242,-2680,10276,2405,-878,2215,4734 } },
{ "Canon PowerShot A610", 0, 0,	/* DJC */
{ 15591,-6402,-1592,-5365,13198,2168,-1300,1824,5075 } },
{ "Canon PowerShot A620", 0, 0,	/* DJC */
{ 15265,-6193,-1558,-4125,12116,2010,-888,1639,5220 } },
{ "Canon PowerShot A630", 0, 0,	/* DJC */
{ 14201,-5308,-1757,-6087,14472,1617,-2191,3105,5348 } },
{ "Canon PowerShot A640", 0, 0,	/* DJC */
{ 13124,-5329,-1390,-3602,11658,1944,-1612,2863,4885 } },
{ "Canon PowerShot A650", 0, 0,	/* DJC */
{ 9427,-3036,-959,-2581,10671,1911,-1039,1982,4430 } },
{ "Canon PowerShot A720", 0, 0,	/* DJC */
{ 14573,-5482,-1546,-1266,9799,1468,-1040,1912,3810 } },
{ "Canon PowerShot S3 IS", 0, 0,	/* DJC */
{ 14062,-5199,-1446,-4712,12470,2243,-1286,2028,4836 } },
{ "Canon PowerShot SX110 IS", 0, 0,	/* DJC */
{ 14134,-5576,-1527,-1991,10719,1273,-1158,1929,3581 } },
{ "Canon PowerShot SX220", 0, 0,	/* DJC */
{ 13898,-5076,-1447,-1405,10109,1297,-244,1860,3687 } },
{ "CASIO EX-S20", 0, 0,		/* DJC */
{ 11634,-3924,-1128,-4968,12954,2015,-1588,2648,7206 } },
{ "CASIO EX-Z750", 0, 0,		/* DJC */
{ 10819,-3873,-1099,-4903,13730,1175,-1755,3751,4632 } },
{ "CASIO EX-Z10", 128, 0xfff,	/* DJC */
{ 9790,-3338,-603,-2321,10222,2099,-344,1273,4799 } },
{ "CINE 650", 0, 0,
{ 3390,480,-500,-800,3610,340,-550,2336,1192 } },
{ "CINE 660", 0, 0,
{ 3390,480,-500,-800,3610,340,-550,2336,1192 } },
{ "CINE", 0, 0,
{ 20183,-4295,-423,-3940,15330,3985,-280,4870,9800 } },
{ "Contax N Digital", 0, 0xf1e,
{ 7777,1285,-1053,-9280,16543,2916,-3677,5679,7060 } },
{ "EPSON R-D1", 0, 0,
{ 6827,-1878,-732,-8429,16012,2564,-704,592,7145 } },
{ "FUJIFILM E550", 0, 0,
{ 11044,-3888,-1120,-7248,15168,2208,-1531,2277,8069 } },
{ "FUJIFILM E900", 0, 0,
{ 9183,-2526,-1078,-7461,15071,2574,-2022,2440,8639 } },
{ "FUJIFILM F5", 0, 0,
{ 13690,-5358,-1474,-3369,11600,1998,-132,1554,4395 } },
{ "FUJIFILM F6", 0, 0,
{ 13690,-5358,-1474,-3369,11600,1998,-132,1554,4395 } },
{ "FUJIFILM F77", 0, 0xfe9,
{ 13690,-5358,-1474,-3369,11600,1998,-132,1554,4395 } },
{ "FUJIFILM F7", 0, 0,
{ 10004,-3219,-1201,-7036,15047,2107,-1863,2565,7736 } },
{ "FUJIFILM F8", 0, 0,
{ 13690,-5358,-1474,-3369,11600,1998,-132,1554,4395 } },
{ "FUJIFILM S100FS", 514, 0,
{ 11521,-4355,-1065,-6524,13767,3058,-1466,1984,6045 } },
{ "FUJIFILM S200EXR", 512, 0x3fff,
{ 11401,-4498,-1312,-5088,12751,2613,-838,1568,5941 } },
{ "FUJIFILM S20Pro", 0, 0,
{ 10004,-3219,-1201,-7036,15047,2107,-1863,2565,7736 } },
{ "FUJIFILM S2Pro", 128, 0,
{ 12492,-4690,-1402,-7033,15423,1647,-1507,2111,7697 } },
{ "FUJIFILM S3Pro", 0, 0,
{ 11807,-4612,-1294,-8927,16968,1988,-2120,2741,8006 } },
{ "FUJIFILM S5Pro", 0, 0,
{ 12300,-5110,-1304,-9117,17143,1998,-1947,2448,8100 } },
{ "FUJIFILM S5000", 0, 0,
{ 8754,-2732,-1019,-7204,15069,2276,-1702,2334,6982 } },
{ "FUJIFILM S5100", 0, 0,
{ 11940,-4431,-1255,-6766,14428,2542,-993,1165,7421 } },
{ "FUJIFILM S5500", 0, 0,
{ 11940,-4431,-1255,-6766,14428,2542,-993,1165,7421 } },
{ "FUJIFILM S5200", 0, 0,
{ 9636,-2804,-988,-7442,15040,2589,-1803,2311,8621 } },
{ "FUJIFILM S5600", 0, 0,
{ 9636,-2804,-988,-7442,15040,2589,-1803,2311,8621 } },
{ "FUJIFILM S6", 0, 0,
{ 12628,-4887,-1401,-6861,14996,1962,-2198,2782,7091 } },
{ "FUJIFILM S7000", 0, 0,
{ 10190,-3506,-1312,-7153,15051,2238,-2003,2399,7505 } },
{ "FUJIFILM S9000", 0, 0,
{ 10491,-3423,-1145,-7385,15027,2538,-1809,2275,8692 } },
{ "FUJIFILM S9500", 0, 0,
{ 10491,-3423,-1145,-7385,15027,2538,-1809,2275,8692 } },
{ "FUJIFILM S9100", 0, 0,
{ 12343,-4515,-1285,-7165,14899,2435,-1895,2496,8800 } },
{ "FUJIFILM S9600", 0, 0,
{ 12343,-4515,-1285,-7165,14899,2435,-1895,2496,8800 } },
{ "FUJIFILM IS-1", 0, 0,
{ 21461,-10807,-1441,-2332,10599,1999,289,875,7703 } },
{ "FUJIFILM IS Pro", 0, 0,
{ 12300,-5110,-1304,-9117,17143,1998,-1947,2448,8100 } },
{ "FUJIFILM HS10 HS11", 0, 0xf68,
{ 12440,-3954,-1183,-1123,9674,1708,-83,1614,4086 } },
{ "FUJIFILM HS20EXR", 0, 0,
{ 13690,-5358,-1474,-3369,11600,1998,-132,1554,4395 } },
{ "FUJIFILM HS3", 0, 0,
{ 13690,-5358,-1474,-3369,11600,1998,-132,1554,4395 } },
{ "FUJIFILM X100", 0, 0,
{ 12161,-4457,-1069,-5034,12874,2400,-795,1724,6904 } },
{ "FUJIFILM X10", 0, 0,
{ 13509,-6199,-1254,-4430,12733,1865,-331,1441,5022 } },
{ "FUJIFILM X-Pro1", 0, 0,
{ 10413,-3996,-993,-3721,11640,2361,-733,1540,6011 } },
{ "FUJIFILM X-E1", 0, 0,
{ 10413,-3996,-993,-3721,11640,2361,-733,1540,6011 } },
{ "FUJIFILM XF1", 0, 0,
{ 13509,-6199,-1254,-4430,12733,1865,-331,1441,5022 } },
{ "FUJIFILM X-S1", 0, 0,
{ 13509,-6199,-1254,-4430,12733,1865,-331,1441,5022 } },
{ "Imacon Ixpress", 0, 0,		/* DJC */
{ 7025,-1415,-704,-5188,13765,1424,-1248,2742,6038 } },
{ "KODAK NC2000", 0, 0,
{ 13891,-6055,-803,-465,9919,642,2121,82,1291 } },
{ "Kodak DCS315C", 8, 0,
{ 17523,-4827,-2510,756,8546,-137,6113,1649,2250 } },
{ "Kodak DCS330C", 8, 0,
{ 20620,-7572,-2801,-103,10073,-396,3551,-233,2220 } },
{ "KODAK DCS420", 0, 0,
{ 10868,-1852,-644,-1537,11083,484,2343,628,2216 } },
{ "KODAK DCS460", 0, 0,
{ 10592,-2206,-967,-1944,11685,230,2206,670,1273 } },
{ "KODAK EOSDCS1", 0, 0,
{ 10592,-2206,-967,-1944,11685,230,2206,670,1273 } },
{ "KODAK EOSDCS3B", 0, 0,
{ 9898,-2700,-940,-2478,12219,206,1985,634,1031 } },
{ "Kodak DCS520C", 178, 0,
{ 24542,-10860,-3401,-1490,11370,-297,2858,-605,3225 } },
{ "Kodak DCS560C", 177, 0,
{ 20482,-7172,-3125,-1033,10410,-285,2542,226,3136 } },
{ "Kodak DCS620C", 177, 0,
{ 23617,-10175,-3149,-2054,11749,-272,2586,-489,3453 } },
{ "Kodak DCS620X", 176, 0,
{ 13095,-6231,154,12221,-21,-2137,895,4602,2258 } },
{ "Kodak DCS660C", 173, 0,
{ 18244,-6351,-2739,-791,11193,-521,3711,-129,2802 } },
{ "Kodak DCS720X", 0, 0,
{ 11775,-5884,950,9556,1846,-1286,-1019,6221,2728 } },
{ "Kodak DCS760C", 0, 0,
{ 16623,-6309,-1411,-4344,13923,323,2285,274,2926 } },
{ "Kodak DCS Pro SLR", 0, 0,
{ 5494,2393,-232,-6427,13850,2846,-1876,3997,5445 } },
{ "Kodak DCS Pro 14nx", 0, 0,
{ 5494,2393,-232,-6427,13850,2846,-1876,3997,5445 } },
{ "Kodak DCS Pro 14", 0, 0,
{ 7791,3128,-776,-8588,16458,2039,-2455,4006,6198 } },
{ "Kodak ProBack645", 0, 0,
{ 16414,-6060,-1470,-3555,13037,473,2545,122,4948 } },
{ "Kodak ProBack", 0, 0,
{ 21179,-8316,-2918,-915,11019,-165,3477,-180,4210 } },
{ "KODAK P712", 0, 0,
{ 9658,-3314,-823,-5163,12695,2768,-1342,1843,6044 } },
{ "KODAK P850", 0, 0xf7c,
{ 10511,-3836,-1102,-6946,14587,2558,-1481,1792,6246 } },
{ "KODAK P880", 0, 0xfff,
{ 12805,-4662,-1376,-7480,15267,2360,-1626,2194,7904 } },
{ "KODAK EasyShare Z980", 0, 0,
{ 11313,-3559,-1101,-3893,11891,2257,-1214,2398,4908 } },
{ "KODAK EasyShare Z981", 0, 0,
{ 12729,-4717,-1188,-1367,9187,2582,274,860,4411 } },
{ "KODAK EasyShare Z990", 0, 0xfed,
{ 11749,-4048,-1309,-1867,10572,1489,-138,1449,4522 } },
{ "KODAK EASYSHARE Z1015", 0, 0xef1,
{ 11265,-4286,-992,-4694,12343,2647,-1090,1523,5447 } },
{ "Leaf CMost", 0, 0,
{ 3952,2189,449,-6701,14585,2275,-4536,7349,6536 } },
{ "Leaf Valeo 6", 0, 0,
{ 3952,2189,449,-6701,14585,2275,-4536,7349,6536 } },
{ "Leaf Aptus 54S", 0, 0,
{ 8236,1746,-1314,-8251,15953,2428,-3673,5786,5771 } },
{ "Leaf Aptus 65", 0, 0,
{ 7914,1414,-1190,-8777,16582,2280,-2811,4605,5562 } },
{ "Leaf Aptus 75", 0, 0,
{ 7914,1414,-1190,-8777,16582,2280,-2811,4605,5562 } },
{ "Leaf", 0, 0,
{ 8236,1746,-1314,-8251,15953,2428,-3673,5786,5771 } },
{ "Leica M9", 0, 0,
{ 6260,-1019,-470,-3730,11450,1930,-1409,2950,6210 } },
{ "LEICA X1", 0, 0,
{ 6388,-1362,-305,-4945,11458,2692,-898,1381,8697 } },
{ "LEICA X2", 0, 0,
{ 7158,-1911,-606,-3603,10669,2530,-659,1236,5530 } },
{ "Mamiya ZD", 0, 0,
{ 7645,2579,-1363,-8689,16717,2015,-3712,5941,5961 } },
{ "Micron 2010", 110, 0,		/* DJC */
{ 16695,-3761,-2151,155,9682,163,3433,951,4904 } },
{ "Minolta DiMAGE 5", 0, 0xf7d,
{ 8983,-2942,-963,-6556,14476,2237,-2426,2887,8014 } },
{ "Minolta DiMAGE 7Hi", 0, 0xf7d,
{ 11368,-3894,-1242,-6521,14358,2339,-2475,3056,7285 } },
{ "Minolta DiMAGE 7", 0, 0xf7d,
{ 9144,-2777,-998,-6676,14556,2281,-2470,3019,7744 } },
{ "Minolta DiMAGE A1", 0, 0xf8b,
{ 9274,-2547,-1167,-8220,16323,1943,-2273,2720,8340 } },
{ "MINOLTA DiMAGE A200", 0, 0,
{ 8560,-2487,-986,-8112,15535,2771,-1209,1324,7743 } },
{ "Minolta DiMAGE A2", 0, 0xf8f,
{ 9097,-2726,-1053,-8073,15506,2762,-966,981,7763 } },
{ "Minolta DiMAGE Z2", 0, 0,	/* DJC */
{ 11280,-3564,-1370,-4655,12374,2282,-1423,2168,5396 } },
{ "MINOLTA DYNAX 5", 0, 0xffb,
{ 10284,-3283,-1086,-7957,15762,2316,-829,882,6644 } },
{ "MINOLTA DYNAX 7", 0, 0xffb,
{ 10239,-3104,-1099,-8037,15727,2451,-927,925,6871 } },
{ "MOTOROLA PIXL", 0, 0,		/* DJC */
{ 8898,-989,-1033,-3292,11619,1674,-661,3178,5216 } },
{ "NIKON D100", 0, 0,
{ 5902,-933,-782,-8983,16719,2354,-1402,1455,6464 } },
{ "NIKON D1H", 0, 0,
{ 7577,-2166,-926,-7454,15592,1934,-2377,2808,8606 } },
{ "NIKON D1X", 0, 0,
{ 7702,-2245,-975,-9114,17242,1875,-2679,3055,8521 } },
{ "NIKON D1", 0, 0, /* multiplied by 2.218750, 1.0, 1.148438 */
{ 16772,-4726,-2141,-7611,15713,1972,-2846,3494,9521 } },
{ "NIKON D200", 0, 0xfbc,
{ 8367,-2248,-763,-8758,16447,2422,-1527,1550,8053 } },
{ "NIKON D2H", 0, 0,
{ 5710,-901,-615,-8594,16617,2024,-2975,4120,6830 } },
{ "NIKON D2X", 0, 0,
{ 10231,-2769,-1255,-8301,15900,2552,-797,680,7148 } },
{ "NIKON D3000", 0, 0,
{ 8736,-2458,-935,-9075,16894,2251,-1354,1242,8263 } },
{ "NIKON D3100", 0, 0,
{ 7911,-2167,-813,-5327,13150,2408,-1288,2483,7968 } },
{ "NIKON D3200", 0, 0xfb9,
{ 7013,-1408,-635,-5268,12902,2640,-1470,2801,7379 } },
{ "NIKON D3300", 0, 0,
{ 6988,-1384,-714,-5631,13410,2447,-1485,2204,7318 } },
{ "NIKON D300", 0, 0,
{ 9030,-1992,-715,-8465,16302,2255,-2689,3217,8069 } },
{ "NIKON D3X", 0, 0,
{ 7171,-1986,-648,-8085,15555,2718,-2170,2512,7457 } },
{ "NIKON D3S", 0, 0,
{ 8828,-2406,-694,-4874,12603,2541,-660,1509,7587 } },
{ "NIKON D3", 0, 0,
{ 8139,-2171,-663,-8747,16541,2295,-1925,2008,8093 } },
{ "NIKON D40X", 0, 0,
{ 8819,-2543,-911,-9025,16928,2151,-1329,1213,8449 } },
{ "NIKON D40", 0, 0,
{ 6992,-1668,-806,-8138,15748,2543,-874,850,7897 } },
{ "NIKON D4", 0, 0,
{ 8598,-2848,-857,-5618,13606,2195,-1002,1773,7137 } },
{ "NIKON Df", 0, 0,
{ 8598,-2848,-857,-5618,13606,2195,-1002,1773,7137 } },
{ "NIKON D5000", 0, 0xf00,
{ 7309,-1403,-519,-8474,16008,2622,-2433,2826,8064 } },
{ "NIKON D5100", 0, 0x3de6,
{ 8198,-2239,-724,-4871,12389,2798,-1043,2050,7181 } },
{ "NIKON D5200", 0, 0,
{ 8322,-3112,-1047,-6367,14342,2179,-988,1638,6394 } },
{ "NIKON D5300", 600, 0,
{ 6988,-1384,-714,-5631,13410,2447,-1485,2204,7318 } },
{ "NIKON D50", 0, 0,
{ 7732,-2422,-789,-8238,15884,2498,-859,783,7330 } },
{ "NIKON D600", 0, 0x3e07,
{ 8178,-2245,-609,-4857,12394,2776,-1207,2086,7298 } },
{ "NIKON D610", 0, 0x3e07,
{ 8178,-2245,-609,-4857,12394,2776,-1207,2086,7298 } },
{ "NIKON D60", 0, 0,
{ 8736,-2458,-935,-9075,16894,2251,-1354,1242,8263 } },
{ "NIKON D7000", 0, 0,
{ 8198,-2239,-724,-4871,12389,2798,-1043,2050,7181 } },
{ "NIKON D7100", 0, 0,
{ 8322,-3112,-1047,-6367,14342,2179,-988,1638,6394 } },
{ "NIKON D700", 0, 0,
{ 8139,-2171,-663,-8747,16541,2295,-1925,2008,8093 } },
{ "NIKON D70", 0, 0,
{ 7732,-2422,-789,-8238,15884,2498,-859,783,7330 } },
{ "NIKON D800", 0, 0,
{ 7866,-2108,-555,-4869,12483,2681,-1176,2069,7501 } },
{ "NIKON D80", 0, 0,
{ 8629,-2410,-883,-9055,16940,2171,-1490,1363,8520 } },
{ "NIKON D90", 0, 0xf00,
{ 7309,-1403,-519,-8474,16008,2622,-2434,2826,8064 } },
{ "Nikon E700", 0, 0x3dd,          /* DJC */
{ -3746,10611,1665,9621,-1734,2114,-2389,7082,3064,3406,6116,-244 } },
{ "Nikon E800", 0, 0x3dd,          /* DJC */
{ -3746,10611,1665,9621,-1734,2114,-2389,7082,3064,3406,6116,-244 } },
{ "NIKON E950", 0, 0x3dd,		/* DJC */
{ -3746,10611,1665,9621,-1734,2114,-2389,7082,3064,3406,6116,-244 } },
{ "NIKON E995", 0, 0,	/* copied from E5000 */
{ -5547,11762,2189,5814,-558,3342,-4924,9840,5949,688,9083,96 } },
{ "NIKON E2100", 0, 0,	/* copied from Z2, new white balance */
{ 13142,-4152,-1596,-4655,12374,2282,-1769,2696,6711} },
{ "NIKON E2500", 0, 0,
{ -5547,11762,2189,5814,-558,3342,-4924,9840,5949,688,9083,96 } },
{ "NIKON E3200", 0, 0,		/* DJC */
{ 9846,-2085,-1019,-3278,11109,2170,-774,2134,5745 } },
{ "NIKON E4300", 0, 0,	/* copied from Minolta DiMAGE Z2 */
{ 11280,-3564,-1370,-4655,12374,2282,-1423,2168,5396 } },
{ "NIKON E4500", 0, 0,
{ -5547,11762,2189,5814,-558,3342,-4924,9840,5949,688,9083,96 } },
{ "NIKON E5000", 0, 0,
{ -5547,11762,2189,5814,-558,3342,-4924,9840,5949,688,9083,96 } },
{ "NIKON E5400", 0, 0,
{ 9349,-2987,-1001,-7919,15766,2266,-2098,2680,6839 } },
{ "NIKON E5700", 0, 0,
{ -5368,11478,2368,5537,-113,3148,-4969,10021,5782,778,9028,211 } },
{ "NIKON E8400", 0, 0,
{ 7842,-2320,-992,-8154,15718,2599,-1098,1342,7560 } },
{ "NIKON E8700", 0, 0,
{ 8489,-2583,-1036,-8051,15583,2643,-1307,1407,7354 } },
{ "NIKON E8800", 0, 0,
{ 7971,-2314,-913,-8451,15762,2894,-1442,1520,7610 } },
{ "NIKON COOLPIX A", 0, 0x3e14,
{ 8198,-2239,-724,-4871,12389,2798,-1043,2050,7181 } },
{ "NIKON COOLPIX P330", 0, 0,
{ 10321,-3920,-931,-2750,11146,1824,-442,1545,5539 } },
{ "NIKON COOLPIX P6000", 0, 0,
{ 9698,-3367,-914,-4706,12584,2368,-837,968,5801 } },
{ "NIKON COOLPIX P7000", 0, 0,
{ 11432,-3679,-1111,-3169,11239,2202,-791,1380,4455 } },
{ "NIKON COOLPIX P7100", 0, 0,
{ 11053,-4269,-1024,-1976,10182,2088,-526,1263,4469 } },
{ "NIKON COOLPIX P7700", 200, 0,
{ 10321,-3920,-931,-2750,11146,1824,-442,1545,5539 } },
{ "NIKON COOLPIX P7800", 200, 0, /* copied from P7700 */
{ 10321,-3920,-931,-2750,11146,1824,-442,1545,5539 } },
{ "NIKON 1 V1", 0, 0,
{ 8994,-2667,-865,-4594,12324,2552,-699,1786,6260 } },
{ "NIKON 1 V2", 0, 0,
{ 6588,-1305,-693,-3277,10987,2634,-355,2016,5106 } },
{ "NIKON 1 J1", 0, 0,
{ 8994,-2667,-865,-4594,12324,2552,-699,1786,6260 } },
{ "NIKON 1 J2", 0, 0,
{ 8994,-2667,-865,-4594,12324,2552,-699,1786,6260 } },
{ "NIKON 1 J3", 0, 0,
{ 6588,-1305,-693,-3277,10987,2634,-355,2016,5106 } },
{ "NIKON 1 AW1", 0, 0,
{ 6588,-1305,-693,-3277,10987,2634,-355,2016,5106 } },
{ "NIKON 1 S1", 0, 0,
{ 8994,-2667,-865,-4594,12324,2552,-699,1786,6260 } },
{ "OLYMPUS C5050", 0, 0,
{ 10508,-3124,-1273,-6079,14294,1901,-1653,2306,6237 } },
{ "OLYMPUS C5060", 0, 0,
{ 10445,-3362,-1307,-7662,15690,2058,-1135,1176,7602 } },
{ "OLYMPUS C7070", 0, 0,
{ 10252,-3531,-1095,-7114,14850,2436,-1451,1723,6365 } },
{ "OLYMPUS C8080WZ", 0, 0,
{ 8606,-2509,-1014,-8238,15714,2703,-942,979,7760 } },
{ "OLYMPUS C70", 0, 0,
{ 10793,-3791,-1146,-7498,15177,2488,-1390,1577,7321 } },
{ "OLYMPUS E-10", 0, 0xffc,
{ 12745,-4500,-1416,-6062,14542,1580,-1934,2256,6603 } },
{ "OLYMPUS E-1", 0, 0,
{ 11846,-4767,-945,-7027,15878,1089,-2699,4122,8311 } },
{ "OLYMPUS E-20,E-20N,E-20P", 0, 0xffc,
{ 13173,-4732,-1499,-5807,14036,1895,-2045,2452,7142 } },
{ "OLYMPUS E-300", 0, 0,
{ 7828,-1761,-348,-5788,14071,1830,-2853,4518,6557 } },
{ "OLYMPUS E-330", 0, 0,
{ 8961,-2473,-1084,-7979,15990,2067,-2319,3035,8249 } },
{ "OLYMPUS E-30", 0, 0xfbc,
{ 8144,-1861,-1111,-7763,15894,1929,-1865,2542,7607 } },
{ "OLYMPUS E-3", 0, 0xf99,
{ 9487,-2875,-1115,-7533,15606,2010,-1618,2100,7389 } },
{ "OLYMPUS E-400", 0, 0,
{ 6169,-1483,-21,-7107,14761,2536,-2904,3580,8568 } },
{ "OLYMPUS E-410", 0, 0xf6a,
{ 8856,-2582,-1026,-7761,15766,2082,-2009,2575,7469 } },
{ "OLYMPUS E-420", 0, 0xfd7,
{ 8746,-2425,-1095,-7594,15612,2073,-1780,2309,7416 } },
{ "OLYMPUS E-450", 0, 0xfd2,
{ 8745,-2425,-1095,-7594,15613,2073,-1780,2309,7416 } },
{ "OLYMPUS E-500", 0, 0,
{ 8136,-1968,-299,-5481,13742,1871,-2556,4205,6630 } },
{ "OLYMPUS E-510", 0, 0xf6a,
{ 8785,-2529,-1033,-7639,15624,2112,-1783,2300,7817 } },
{ "OLYMPUS E-520", 0, 0xfd2,
{ 8344,-2322,-1020,-7596,15635,2048,-1748,2269,7287 } },
{ "OLYMPUS E-5", 0, 0xeec,
{ 11200,-3783,-1325,-4576,12593,2206,-695,1742,7504 } },
{ "OLYMPUS E-600", 0, 0xfaf,
{ 8453,-2198,-1092,-7609,15681,2008,-1725,2337,7824 } },
{ "OLYMPUS E-620", 0, 0xfaf,
{ 8453,-2198,-1092,-7609,15681,2008,-1725,2337,7824 } },
{ "OLYMPUS E-P1", 0, 0xffd,
{ 8343,-2050,-1021,-7715,15705,2103,-1831,2380,8235 } },
{ "OLYMPUS E-P2", 0, 0xffd,
{ 8343,-2050,-1021,-7715,15705,2103,-1831,2380,8235 } },
{ "OLYMPUS E-P3", 0, 0,
{ 7575,-2159,-571,-3722,11341,2725,-1434,2819,6271 } },
{ "OLYMPUS E-P5", 0, 0,
{ 8380,-2630,-639,-2887,10725,2496,-627,1427,5438 } },
{ "OLYMPUS E-PL1s", 0, 0,
{ 11409,-3872,-1393,-4572,12757,2003,-709,1810,7415 } },
{ "OLYMPUS E-PL1", 0, 0,
{ 11408,-4289,-1215,-4286,12385,2118,-387,1467,7787 } },
{ "OLYMPUS E-PL2", 0, 0,
{ 15030,-5552,-1806,-3987,12387,1767,-592,1670,7023 } },
{ "OLYMPUS E-PL3", 0, 0,
{ 7575,-2159,-571,-3722,11341,2725,-1434,2819,6271 } },
{ "OLYMPUS E-PL5", 0, 0xfcb,
{ 8380,-2630,-639,-2887,10725,2496,-627,1427,5438 } },
{ "OLYMPUS E-PL6", 0, 0,
{ 8380,-2630,-639,-2887,10725,2496,-627,1427,5438 } },
{ "OLYMPUS E-PM1", 0, 0,
{ 7575,-2159,-571,-3722,11341,2725,-1434,2819,6271 } },
{ "OLYMPUS E-PM2", 0, 0,
{ 8380,-2630,-639,-2887,10725,2496,-627,1427,5438 } },
{ "OLYMPUS E-M10", 0, 0,
{ 8380,-2630,-639,-2887,10725,2496,-627,1427,5438 } },
{ "OLYMPUS E-M1", 0, 0,
{ 7687,-1984,-606,-4327,11928,2721,-1381,2339,6452 } },
{ "OLYMPUS E-M5", 0, 0xfe1,
{ 8380,-2630,-639,-2887,10725,2496,-627,1427,5438 } },
{ "OLYMPUS SP350", 0, 0,
{ 12078,-4836,-1069,-6671,14306,2578,-786,939,7418 } },
{ "OLYMPUS SP3", 0, 0,
{ 11766,-4445,-1067,-6901,14421,2707,-1029,1217,7572 } },
{ "OLYMPUS SP500UZ", 0, 0xfff,
{ 9493,-3415,-666,-5211,12334,3260,-1548,2262,6482 } },
{ "OLYMPUS SP510UZ", 0, 0xffe,
{ 10593,-3607,-1010,-5881,13127,3084,-1200,1805,6721 } },
{ "OLYMPUS SP550UZ", 0, 0xffe,
{ 11597,-4006,-1049,-5432,12799,2957,-1029,1750,6516 } },
{ "OLYMPUS SP560UZ", 0, 0xff9,
{ 10915,-3677,-982,-5587,12986,2911,-1168,1968,6223 } },
{ "OLYMPUS SP570UZ", 0, 0,
{ 11522,-4044,-1146,-4736,12172,2904,-988,1829,6039 } },
{ "OLYMPUS STYLUS1", 0, 0,
{ 9777,-3483,-925,-2886,11297,1800,-602,1663,5134 } },
{ "OLYMPUS XZ-10", 0, 0,
{ 9777,-3483,-925,-2886,11297,1800,-602,1663,5134 } },
{ "OLYMPUS XZ-1", 0, 0,
{ 10901,-4095,-1074,-1141,9208,2293,-62,1417,5158 } },
{ "OLYMPUS XZ-2", 0, 0,
{ 9777,-3483,-925,-2886,11297,1800,-602,1663,5134 } },
{ "PENTAX *ist DL2", 0, 0,
{ 10504,-2438,-1189,-8603,16207,2531,-1022,863,12242 } },
{ "PENTAX *ist DL", 0, 0,
{ 10829,-2838,-1115,-8339,15817,2696,-837,680,11939 } },
{ "PENTAX *ist DS2", 0, 0,
{ 10504,-2438,-1189,-8603,16207,2531,-1022,863,12242 } },
{ "PENTAX *ist DS", 0, 0,
{ 10371,-2333,-1206,-8688,16231,2602,-1230,1116,11282 } },
{ "PENTAX *ist D", 0, 0,
{ 9651,-2059,-1189,-8881,16512,2487,-1460,1345,10687 } },
{ "PENTAX K10D", 0, 0,
{ 9566,-2863,-803,-7170,15172,2112,-818,803,9705 } },
{ "PENTAX K100D", 0, 0,
{ 11095,-3157,-1324,-8377,15834,2720,-1108,947,11688 } },
{ "PENTAX K20D", 0, 0,
{ 9427,-2714,-868,-7493,16092,1373,-2199,3264,7180 } },
{ "PENTAX K200D", 0, 0,
{ 9186,-2678,-907,-8693,16517,2260,-1129,1094,8524 } },
{ "PENTAX K2000", 0, 0,
{ 11057,-3604,-1155,-5152,13046,2329,-282,375,8104 } },
{ "PENTAX K-m", 0, 0,
{ 11057,-3604,-1155,-5152,13046,2329,-282,375,8104 } },
{ "PENTAX K-x", 0, 0,
{ 8843,-2837,-625,-5025,12644,2668,-411,1234,7410 } },
{ "PENTAX K-r", 0, 0,
{ 9895,-3077,-850,-5304,13035,2521,-883,1768,6936 } },
{ "RICOH PENTAX K-3", 0, 0,
{ 7415,-2052,-721,-5186,12788,2682,-1446,2157,6773 } },
{ "PENTAX K-5 II s", 0, 0,
{ 8170,-2725,-639,-4440,12017,2744,-771,1465,6599 } },
{ "PENTAX K-5 II", 0, 0,
{ 8170,-2725,-639,-4440,12017,2744,-771,1465,6599 } },
{ "PENTAX K-5", 0, 0,
{ 8713,-2833,-743,-4342,11900,2772,-722,1543,6247 } },
{ "PENTAX K-7", 0, 0,
{ 9142,-2947,-678,-8648,16967,1663,-2224,2898,8615 } },
{ "PENTAX K-30", 0, 0,
{ 5789,-1749,-775,-2618,8062,1233,-642,1125,4278 } },
{ "PENTAX 645D", 0, 0x3e00,
{ 10646,-3593,-1158,-3329,11699,1831,-667,2874,6287 } },
{ "Panasonic DMC-FZ8", 0, 0xf7f,
{ 8986,-2755,-802,-6341,13575,3077,-1476,2144,6379 } },
{ "Panasonic DMC-FZ18", 0, 0,
{ 9932,-3060,-935,-5809,13331,2753,-1267,2155,5575 } },
{ "Panasonic DMC-FZ28", 15, 0xf96,
{ 10109,-3488,-993,-5412,12812,2916,-1305,2140,5543 } },
{ "Panasonic DMC-FZ30", 0, 0xf94,
{ 10976,-4029,-1141,-7918,15491,2600,-1670,2071,8246 } },
{ "Panasonic DMC-FZ3", 143, 0,
{ 9938,-2780,-890,-4604,12393,2480,-1117,2304,4620 } },
{ "Panasonic DMC-FZ4", 143, 0,
{ 13639,-5535,-1371,-1698,9633,2430,316,1152,4108 } },
{ "Panasonic DMC-FZ50", 0, 0,
{ 7906,-2709,-594,-6231,13351,3220,-1922,2631,6537 } },
{ "Panasonic DMC-FZ7", 144, 0,
{ 11532,-4324,-1066,-2375,10847,1749,-564,1699,4351 } },
{ "LEICA V-LUX1", 0, 0,
{ 7906,-2709,-594,-6231,13351,3220,-1922,2631,6537 } },
{ "Panasonic DMC-L10", 15, 0xf96,
{ 8025,-1942,-1050,-7920,15904,2100,-2456,3005,7039 } },
{ "Panasonic DMC-L1", 0, 0xf7f,
{ 8054,-1885,-1025,-8349,16367,2040,-2805,3542,7629 } },
{ "LEICA DIGILUX 3", 0, 0xf7f,
{ 8054,-1885,-1025,-8349,16367,2040,-2805,3542,7629 } },
{ "Panasonic DMC-LC1", 0, 0,
{ 11340,-4069,-1275,-7555,15266,2448,-2960,3426,7685 } },
{ "LEICA DIGILUX 2", 0, 0,
{ 11340,-4069,-1275,-7555,15266,2448,-2960,3426,7685 } },
{ "Panasonic DMC-LF1", 143, 0,
{ 9379,-3267,-816,-3227,11560,1881,-926,1928,5340 } },
{ "Leica C (Typ 112)", 143, 0,
{ 9379,-3267,-816,-3227,11560,1881,-926,1928,5340 } },
{ "Panasonic DMC-LX1", 0, 0xf7f,
{ 10704,-4187,-1230,-8314,15952,2501,-920,945,8927 } },
{ "LEICA D-LUX2", 0, 0xf7f,
{ 10704,-4187,-1230,-8314,15952,2501,-920,945,8927 } },
{ "Panasonic DMC-LX2", 0, 0,
{ 8048,-2810,-623,-6450,13519,3272,-1700,2146,7049 } },
{ "LEICA D-LUX3", 0, 0,
{ 8048,-2810,-623,-6450,13519,3272,-1700,2146,7049 } },
{ "Panasonic DMC-LX3", 15, 0,
{ 8128,-2668,-655,-6134,13307,3161,-1782,2568,6083 } },
{ "LEICA D-LUX 4", 15, 0,
{ 8128,-2668,-655,-6134,13307,3161,-1782,2568,6083 } },
{ "Panasonic DMC-LX5", 143, 0,
{ 10909,-4295,-948,-1333,9306,2399,22,1738,4582 } },
{ "LEICA D-LUX 5", 143, 0,
{ 10909,-4295,-948,-1333,9306,2399,22,1738,4582 } },
{ "Panasonic DMC-LX7", 143, 0,
{ 10148,-3743,-991,-2837,11366,1659,-701,1893,4899 } },
{ "LEICA D-LUX 6", 143, 0,
{ 10148,-3743,-991,-2837,11366,1659,-701,1893,4899 } },
{ "Panasonic DMC-FZ100", 143, 0xfff,
{ 16197,-6146,-1761,-2393,10765,1869,366,2238,5248 } },
{ "LEICA V-LUX 2", 143, 0xfff,
{ 16197,-6146,-1761,-2393,10765,1869,366,2238,5248 } },
{ "Panasonic DMC-FZ150", 143, 0xfff,
{ 11904,-4541,-1189,-2355,10899,1662,-296,1586,4289 } },
{ "LEICA V-LUX 3", 143, 0xfff,
{ 11904,-4541,-1189,-2355,10899,1662,-296,1586,4289 } },
{ "Panasonic DMC-FZ200", 143, 0xfff,
{ 8112,-2563,-740,-3730,11784,2197,-941,2075,4933 } },
{ "LEICA V-LUX 4", 143, 0xfff,
{ 8112,-2563,-740,-3730,11784,2197,-941,2075,4933 } },
{ "Panasonic DMC-FX150", 15, 0xfff,
{ 9082,-2907,-925,-6119,13377,3058,-1797,2641,5609 } },
{ "Panasonic DMC-G10", 0, 0,
{ 10113,-3400,-1114,-4765,12683,2317,-377,1437,6710 } },
{ "Panasonic DMC-G1", 15, 0xf94,
{ 8199,-2065,-1056,-8124,16156,2033,-2458,3022,7220 } },
{ "Panasonic DMC-G2", 15, 0xf3c,
{ 10113,-3400,-1114,-4765,12683,2317,-377,1437,6710 } },
{ "Panasonic DMC-G3", 143, 0xfff,
{ 6763,-1919,-863,-3868,11515,2684,-1216,2387,5879 } },
{ "Panasonic DMC-G5", 143, 0xfff,
{ 7798,-2562,-740,-3879,11584,2613,-1055,2248,5434 } },
{ "Panasonic DMC-G6", 142, 0xfff,
{ 8294,-2891,-651,-3869,11590,2595,-1183,2267,5352 } },
{ "Panasonic DMC-GF1", 15, 0xf92,
{ 7888,-1902,-1011,-8106,16085,2099,-2353,2866,7330 } },
{ "Panasonic DMC-GF2", 143, 0xfff,
{ 7888,-1902,-1011,-8106,16085,2099,-2353,2866,7330 } },
{ "Panasonic DMC-GF3", 143, 0xfff,
{ 9051,-2468,-1204,-5212,13276,2121,-1197,2510,6890 } },
{ "Panasonic DMC-GF5", 143, 0xfff,
{ 8228,-2945,-660,-3938,11792,2430,-1094,2278,5793 } },
{ "Panasonic DMC-GF6", 143, 0,
{ 8130,-2801,-946,-3520,11289,2552,-1314,2511,5791 } },
{ "Panasonic DMC-GH1", 15, 0xf92,
{ 6299,-1466,-532,-6535,13852,2969,-2331,3112,5984 } },
{ "Panasonic DMC-GH2", 15, 0xf95,
{ 7780,-2410,-806,-3913,11724,2484,-1018,2390,5298 } },
{ "Panasonic DMC-GH3", 144, 0,
{ 6559,-1752,-491,-3672,11407,2586,-962,1875,5130 } },
{ "Panasonic DMC-GM1", 143, 0xf83,
{ 6770,-1895,-744,-5232,13145,2303,-1664,2691,5703 } },
{ "Panasonic DMC-GX1", 143, 0,
{ 6763,-1919,-863,-3868,11515,2684,-1216,2387,5879 } },
{ "Panasonic DMC-GX7", 150, 0,
{ 7610,-2780,-576,-4614,12195,2733,-1375,2393,6490 } },
{ "Phase One H 20", 0, 0,		/* DJC */
{ 1313,1855,-109,-6715,15908,808,-327,1840,6020 } },
{ "Phase One H 25", 0, 0,
{ 2905,732,-237,-8134,16626,1476,-3038,4253,7517 } },
{ "Phase One P 2", 0, 0,
{ 2905,732,-237,-8134,16626,1476,-3038,4253,7517 } },
{ "Phase One P 30", 0, 0,
{ 4516,-245,-37,-7020,14976,2173,-3206,4671,7087 } },
{ "Phase One P 45", 0, 0,
{ 5053,-24,-117,-5684,14076,1702,-2619,4492,5849 } },
{ "Phase One P40", 0, 0,
{ 8035,435,-962,-6001,13872,2320,-1159,3065,5434 } },
{ "Phase One P65", 0, 0,
{ 8035,435,-962,-6001,13872,2320,-1159,3065,5434 } },
{ "RED ONE", 704, 0xffff,		/* DJC */
{ 21014,-7891,-2613,-3056,12201,856,-2203,5125,8042 } },
{ "RICOH GR DIGITAL 2", 0, 0,
{ 8846,-2704,-729,-5265,12708,2871,-1471,1955,6218, } },
{ "RICOH GR DIGITAL 3", 0, 0,
{ 8170,-2496,-655,-5148,13056,2311,-1367,1859,5265 } },
{ "RICOH GR DIGITAL 4", 0, 0,
{ 8235,-2659,-965,-2426,10625,2078,-686,1246,5898 } },
{ "RICOH GXR", 0, 0,
{ 7665,-1873,-562,-8232,15804,2586,-1797,2074,7667 } },
{ "RICOH GXR A12", 0, 0,
{ 8574,-2545,-541,-4753,12305,2761,-1484,2070,8291, } },
{ "RICOH GXR A16", 0, 0,
{ 6398,-1866,-432,-4115,11277,3263,-1177,1550,7289 } },
{ "SAMSUNG EX1", 0, 0x3e00,
{ 8898,-2498,-994,-3144,11328,2066,-760,1381,4576 } },
{ "SAMSUNG EX2F", 0, 0x7ff,
{ 10648,-3897,-1055,-2022,10573,1668,-492,1611,4742 } },
{ "SAMSUNG EK-GN120", 0, 0,    /* Samsung Galaxy NX */
{ 7557,-2522,-739,-4679,12949,1894,-840,1777,5311 } },
{ "SAMSUNG NX300", 0, 0,
{ 7557,-2522,-739,-4679,12949,1894,-840,1777,5311 } },
{ "SAMSUNG NX30", 0, 0,
{ 7557,-2522,-739,-4679,12949,1894,-840,1777,5311 } },
{ "Samsung NX2000", 0, 0,
{ 7557,-2522,-739,-4679,12949,1894,-840,1777,5311 } },
{ "SAMSUNG NX2", 0, 0xfff,	/* NX20, NX200, NX210 */
{ 6933,-2268,-753,-4921,13387,1647,-803,1641,6096 } },
{ "SAMSUNG NX1000", 0, 0,
{ 6933,-2268,-753,-4921,13387,1647,-803,1641,6096 } },
{ "Samsung NX1100", 0, 0,
{ 6933,-2268,-753,-4921,13387,1647,-803,1641,6096 } },
{ "SAMSUNG NX", 0, 0,	/* NX5, NX10, NX11, NX100 */
{ 10332,-3234,-1168,-6111,14639,1520,-1352,2647,8331 } },
{ "SAMSUNG WB2000", 0, 0xfff,
{ 12093,-3557,-1155,-1000,9534,1733,-22,1787,4576 } },
{ "SAMSUNG GX-1", 0, 0,
{ 10504,-2438,-1189,-8603,16207,2531,-1022,863,12242 } },
{ "SAMSUNG GX20", 0, 0,        /* copied from Pentax K20D */
{ 9427,-2714,-868,-7493,16092,1373,-2199,3264,7180 } },
{ "SAMSUNG S85", 0, 0xffff,		/* DJC */
{ 11885,-3968,-1473,-4214,12299,1916,-835,1655,5549 } },
{ "Sinar", 0, 0,			/* DJC */
{ 16442,-2956,-2422,-2877,12128,750,-1136,6066,4559 } },
{ "SONY DSC-F828", 0, 0,
{ 7924,-1910,-777,-8226,15459,2998,-1517,2199,6818,-7242,11401,3481 } },
{ "SONY DSC-R1", 512, 0,
{ 8512,-2641,-694,-8042,15670,2526,-1821,2117,7414 } },
{ "SONY DSC-V3", 0, 0,
{ 7511,-2571,-692,-7894,15088,3060,-948,1111,8128 } },
{ "SONY DSC-RX100M2", 200, 0,
{ 6596,-2079,-562,-4782,13016,1933,-970,1581,5181 } },
{ "SONY DSC-RX100", 200, 0,
{ 8651,-2754,-1057,-3464,12207,1373,-568,1398,4434 } },
{ "SONY DSC-RX10", 800, 0x3fac,
{ 6679,-1825,-745,-5047,13256,1953,-1580,2422,5183 } },
{ "SONY DSC-RX1R", 128, 0,
{ 6344,-1612,-462,-4863,12477,2681,-865,1786,6899 } },
{ "SONY DSC-RX1", 128, 0,
{ 6344,-1612,-462,-4863,12477,2681,-865,1786,6899 } },
{ "SONY DSLR-A100", 0, 0xfeb,
{ 9437,-2811,-774,-8405,16215,2290,-710,596,7181 } },
{ "SONY DSLR-A290", 0, 0,
{ 6038,-1484,-579,-9145,16746,2512,-875,746,7218 } },
{ "SONY DSLR-A200", 0, 0,
{ 9847,-3091,-928,-8485,16345,2225,-715,595,7103 } },
{ "SONY DSLR-A230", 0, 0,
{ 9847,-3091,-928,-8485,16345,2225,-715,595,7103 } },
{ "SONY DSLR-A300", 0, 0,
{ 9847,-3091,-928,-8485,16345,2225,-715,595,7103 } },
{ "SONY DSLR-A330", 0, 0,
{ 9847,-3091,-929,-8485,16346,2225,-714,595,7103 } },
{ "SONY DSLR-A350", 0, 0xffc,
{ 6038,-1484,-578,-9146,16746,2513,-875,746,7217 } },
{ "SONY DSLR-A380", 0, 0,
{ 6038,-1484,-579,-9145,16746,2512,-875,746,7218 } },
{ "SONY DSLR-A390", 0, 0,
{ 6038,-1484,-579,-9145,16746,2512,-875,746,7218 } },
{ "SONY DSLR-A450", 128, 0xfeb,
{ 4950,-580,-103,-5228,12542,3029,-709,1435,7371 } },
{ "SONY DSLR-A500", 128, 0xfeb,
{ 6046,-1127,-278,-5574,13076,2786,-691,1419,7625 } },
{ "SONY DSLR-A550", 128, 0xfeb,
{ 4950,-580,-103,-5228,12542,3029,-709,1435,7371 } },
{ "SONY DSLR-A560", 128, 0xfeb,
{ 4950,-580,-103,-5228,12542,3029,-709,1435,7371 } },
{ "SONY DSLR-A580", 128, 0xfeb,
{ 5932,-1492,-411,-4813,12285,2856,-741,1524,6739 } },
{ "SONY DSLR-A700", 126, 0,
{ 5775,-805,-359,-8574,16295,2391,-1943,2341,7249 } },
{ "SONY DSLR-A850", 128, 0,
{ 5413,-1162,-365,-5665,13098,2866,-608,1179,8440 } },
{ "SONY DSLR-A900", 128, 0,
{ 5209,-1072,-397,-8845,16120,2919,-1618,1803,8654 } },
{ "SONY ILCE-7R", 512, 0x3fac,
{ 4913,-541,-202,-6130,13513,2906,-1564,2151,7183 } },
{ "SONY ILCE-7", 512, 0x3fac,
{ 5271,-712,-347,-6153,13653,2763,-1601,2366,7242 } },
{ "SONY ILCE-3000", 512, 0x3fac,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY ILCE-5000", 512, 0x3fac,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY ILCE-6000", 512, 0x3fac,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY NEX-5N", 128, 0,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY NEX-5R", 128, 0,
{ 6129,-1545,-418,-4930,12490,2743,-977,1693,6615 } },
{ "SONY NEX-5T", 128, 0,
{ 6129,-1545,-418,-4930,12490,2743,-977,1693,6615 } },
{ "SONY NEX-3N", 128, 0,
{ 6129,-1545,-418,-4930,12490,2743,-977,1693,6615 } },
{ "SONY NEX-3", 138, 0,		/* DJC */
{ 6907,-1256,-645,-4940,12621,2320,-1710,2581,6230 } },
{ "SONY NEX-5", 116, 0,		/* DJC */
{ 6807,-1350,-342,-4216,11649,2567,-1089,2001,6420 } },
{ "SONY NEX-3", 128, 0,		/* Adobe */
{ 6549,-1550,-436,-4880,12435,2753,-854,1868,6976 } },
{ "SONY NEX-5", 128, 0,		/* Adobe */
{ 6549,-1550,-436,-4880,12435,2753,-854,1868,6976 } },
{ "SONY NEX-6", 128, 0,
{ 6129,-1545,-418,-4930,12490,2743,-977,1693,6615 } },
{ "SONY NEX-7", 128, 0,
{ 5491,-1192,-363,-4951,12342,2948,-911,1722,7192 } },
{ "SONY NEX-C3", 128, 0,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY NEX-F3", 128, 0,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY SLT-A33", 128, 0,
{ 6069,-1221,-366,-5221,12779,2734,-1024,2066,6834 } },
{ "SONY SLT-A35", 128, 0,
{ 5986,-1618,-415,-4557,11820,3120,-681,1404,6971 } },
{ "SONY SLT-A37", 128, 0,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY SLT-A55V", 128, 0,
{ 5932,-1492,-411,-4813,12285,2856,-741,1524,6739 } },
{ "SONY SLT-A55", 128, 0,
{ 5932,-1492,-411,-4813,12285,2856,-741,1524,6739 } },
{ "SONY SLT-A57", 128, 0,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY SLT-A58", 128, 0,
{ 5991,-1456,-455,-4764,12135,2980,-707,1425,6701 } },
{ "SONY SLT-A65V", 128, 0,
{ 5491,-1192,-363,-4951,12342,2948,-911,1722,7192 } },
{ "SONY SLT-A65", 128, 0,
{ 5491,-1192,-363,-4951,12342,2948,-911,1722,7192 } },
{ "SONY SLT-A77V", 128, 0,
{ 5491,-1192,-363,-4951,12342,2948,-911,1722,7192 } },
{ "SONY SLT-A77", 128, 0,
{ 5491,-1192,-363,-4951,12342,2948,-911,1722,7192 } },
{ "SONY SLT-A99V", 128, 0,
{ 6344,-1612,-462,-4863,12477,2681,-865,1786,6899 } },
{ "SONY SLT-A99", 128, 0,
{ 6344,-1612,-462,-4863,12477,2681,-865,1786,6899 } },
};
char name[130];
int i, j;

sprintf (name, "%s %s", make, model);
for (i=0; i < sizeof table / sizeof *table; i++)
if (!strncmp (name, table[i].prefix, strlen(table[i].prefix))) {
// if (table[i].black)   black   = (ushort) table[i].black;
// if (table[i].maximum) maximum = (ushort) table[i].maximum;
if (table[i].trans[0]) {
for (j=0; j < 12; j++)
cam_xyz[0][j] = table[i].trans[j] / 10000.0;
}
break;
}
}

