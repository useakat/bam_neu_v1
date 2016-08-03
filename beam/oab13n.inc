C/*-----------------------------------------------------
C// Neutrino flux table at 1000 km
C// Off-axis angle is 1.3 deg. for nu_mu focusing beam
C// Enu(GeV), nu_mu, bar{nu_mu}, nu_e, bar{nu_e}
C-------------------------------------------------------*
      real*8 oab13n(300,5)
      data (oab13n(1,oi),oi=1,5) / 0.2500000E-01, 0.1428816E+04, 0.2139464E+04, 0.2580431E+02, 0.3604364E+01 /
      data (oab13n(2,oi),oi=1,5) / 0.7500000E-01, 0.7158561E+04, 0.6614442E+04, 0.1080290E+03, 0.1319469E+02 /
      data (oab13n(3,oi),oi=1,5) / 0.1250000E+00, 0.1493593E+05, 0.3851611E+04, 0.2124652E+03, 0.2058549E+02 /
      data (oab13n(4,oi),oi=1,5) / 0.1750000E+00, 0.2194431E+05, 0.3089811E+04, 0.3529614E+03, 0.2828278E+02 /
      data (oab13n(5,oi),oi=1,5) / 0.2250000E+00, 0.3075110E+05, 0.2981142E+04, 0.4414632E+03, 0.3816126E+02 /
      data (oab13n(6,oi),oi=1,5) / 0.2750000E+00, 0.4150900E+05, 0.2931044E+04, 0.5466107E+03, 0.4071601E+02 /
      data (oab13n(7,oi),oi=1,5) / 0.3250000E+00, 0.5273990E+05, 0.3116597E+04, 0.5817849E+03, 0.4869537E+02 /
      data (oab13n(8,oi),oi=1,5) / 0.3750000E+00, 0.6364099E+05, 0.3223448E+04, 0.6089298E+03, 0.5625531E+02 /
      data (oab13n(9,oi),oi=1,5) / 0.4250000E+00, 0.7372527E+05, 0.3399836E+04, 0.6507172E+03, 0.5326858E+02 /
      data (oab13n(10,oi),oi=1,5) / 0.4750000E+00, 0.8311851E+05, 0.3573986E+04, 0.6632316E+03, 0.5308352E+02 /
      data (oab13n(11,oi),oi=1,5) / 0.5250000E+00, 0.9110882E+05, 0.3718603E+04, 0.7121555E+03, 0.5318362E+02 /
      data (oab13n(12,oi),oi=1,5) / 0.5750000E+00, 0.9889028E+05, 0.3993940E+04, 0.6840641E+03, 0.5408314E+02 /
      data (oab13n(13,oi),oi=1,5) / 0.6250000E+00, 0.1067666E+06, 0.4025919E+04, 0.6563462E+03, 0.5653479E+02 /
      data (oab13n(14,oi),oi=1,5) / 0.6750000E+00, 0.1159465E+06, 0.4089037E+04, 0.6829506E+03, 0.5457508E+02 /
      data (oab13n(15,oi),oi=1,5) / 0.7250000E+00, 0.1269680E+06, 0.4157444E+04, 0.7036758E+03, 0.5389961E+02 /
      data (oab13n(16,oi),oi=1,5) / 0.7750000E+00, 0.1360406E+06, 0.4258597E+04, 0.5946624E+03, 0.5573345E+02 /
      data (oab13n(17,oi),oi=1,5) / 0.8250000E+00, 0.1400002E+06, 0.3992604E+04, 0.6125905E+03, 0.5144687E+02 /
      data (oab13n(18,oi),oi=1,5) / 0.8750000E+00, 0.1380778E+06, 0.4024480E+04, 0.6020867E+03, 0.5015373E+02 /
      data (oab13n(19,oi),oi=1,5) / 0.9250000E+00, 0.1349740E+06, 0.4199281E+04, 0.5978992E+03, 0.4381999E+02 /
      data (oab13n(20,oi),oi=1,5) / 0.9750000E+00, 0.1352037E+06, 0.3914002E+04, 0.5906700E+03, 0.5252766E+02 /
      data (oab13n(21,oi),oi=1,5) / 0.1025000E+01, 0.1334374E+06, 0.3931365E+04, 0.5103390E+03, 0.4240571E+02 /
      data (oab13n(22,oi),oi=1,5) / 0.1075000E+01, 0.1255963E+06, 0.3927952E+04, 0.5367690E+03, 0.4699032E+02 /
      data (oab13n(23,oi),oi=1,5) / 0.1125000E+01, 0.1180043E+06, 0.3711457E+04, 0.5016896E+03, 0.4907988E+02 /
      data (oab13n(24,oi),oi=1,5) / 0.1175000E+01, 0.1081318E+06, 0.3679635E+04, 0.4430523E+03, 0.5223338E+02 /
      data (oab13n(25,oi),oi=1,5) / 0.1225000E+01, 0.9849319E+05, 0.3588413E+04, 0.4455465E+03, 0.4046827E+02 /
      data (oab13n(26,oi),oi=1,5) / 0.1275000E+01, 0.8852602E+05, 0.3335283E+04, 0.4626544E+03, 0.4571046E+02 /
      data (oab13n(27,oi),oi=1,5) / 0.1325000E+01, 0.8097126E+05, 0.3336519E+04, 0.3679047E+03, 0.4817851E+02 /
      data (oab13n(28,oi),oi=1,5) / 0.1375000E+01, 0.6985550E+05, 0.3274761E+04, 0.3724448E+03, 0.4643138E+02 /
      data (oab13n(29,oi),oi=1,5) / 0.1425000E+01, 0.6483138E+05, 0.3045463E+04, 0.3963095E+03, 0.6072390E+02 /
      data (oab13n(30,oi),oi=1,5) / 0.1475000E+01, 0.5703436E+05, 0.2821118E+04, 0.4336739E+03, 0.5277648E+02 /
      data (oab13n(31,oi),oi=1,5) / 0.1525000E+01, 0.5169313E+05, 0.2812627E+04, 0.3796651E+03, 0.4103999E+02 /
      data (oab13n(32,oi),oi=1,5) / 0.1575000E+01, 0.4743009E+05, 0.3020641E+04, 0.3177396E+03, 0.3861835E+02 /
      data (oab13n(33,oi),oi=1,5) / 0.1625000E+01, 0.4172858E+05, 0.2562094E+04, 0.3136452E+03, 0.4596993E+02 /
      data (oab13n(34,oi),oi=1,5) / 0.1675000E+01, 0.3737375E+05, 0.2347901E+04, 0.2579968E+03, 0.5186345E+02 /
      data (oab13n(35,oi),oi=1,5) / 0.1725000E+01, 0.3327090E+05, 0.2640314E+04, 0.2682960E+03, 0.3887478E+02 /
      data (oab13n(36,oi),oi=1,5) / 0.1775000E+01, 0.3009205E+05, 0.2307539E+04, 0.2411454E+03, 0.3507011E+02 /
      data (oab13n(37,oi),oi=1,5) / 0.1825000E+01, 0.2694537E+05, 0.2521568E+04, 0.2693729E+03, 0.3780144E+02 /
      data (oab13n(38,oi),oi=1,5) / 0.1875000E+01, 0.2535559E+05, 0.2512926E+04, 0.1918972E+03, 0.4374713E+02 /
      data (oab13n(39,oi),oi=1,5) / 0.1925000E+01, 0.2153835E+05, 0.2239471E+04, 0.2687770E+03, 0.3749900E+02 /
      data (oab13n(40,oi),oi=1,5) / 0.1975000E+01, 0.2082594E+05, 0.2095890E+04, 0.2240813E+03, 0.3789721E+02 /
      data (oab13n(41,oi),oi=1,5) / 0.2025000E+01, 0.1916668E+05, 0.2267779E+04, 0.1993049E+03, 0.3375615E+02 /
      data (oab13n(42,oi),oi=1,5) / 0.2075000E+01, 0.1781875E+05, 0.2318046E+04, 0.1975232E+03, 0.3190683E+02 /
      data (oab13n(43,oi),oi=1,5) / 0.2125000E+01, 0.1541132E+05, 0.1904569E+04, 0.1732404E+03, 0.4457356E+02 /
      data (oab13n(44,oi),oi=1,5) / 0.2175000E+01, 0.1514230E+05, 0.1697898E+04, 0.1862184E+03, 0.3254477E+02 /
      data (oab13n(45,oi),oi=1,5) / 0.2225000E+01, 0.1402544E+05, 0.1638180E+04, 0.2114560E+03, 0.3392762E+02 /
      data (oab13n(46,oi),oi=1,5) / 0.2275000E+01, 0.1248655E+05, 0.1649536E+04, 0.1661460E+03, 0.3314010E+02 /
      data (oab13n(47,oi),oi=1,5) / 0.2325000E+01, 0.1175828E+05, 0.1635838E+04, 0.1531671E+03, 0.4790338E+02 /
      data (oab13n(48,oi),oi=1,5) / 0.2375000E+01, 0.1125295E+05, 0.1580815E+04, 0.1857918E+03, 0.3378394E+02 /
      data (oab13n(49,oi),oi=1,5) / 0.2425000E+01, 0.1086948E+05, 0.1576235E+04, 0.1454241E+03, 0.2868390E+02 /
      data (oab13n(50,oi),oi=1,5) / 0.2475000E+01, 0.9770591E+04, 0.1488993E+04, 0.1292916E+03, 0.2516585E+02 /
      data (oab13n(51,oi),oi=1,5) / 0.2525000E+01, 0.9093528E+04, 0.1384059E+04, 0.1955037E+03, 0.3107354E+02 /
      data (oab13n(52,oi),oi=1,5) / 0.2575000E+01, 0.9342077E+04, 0.1321054E+04, 0.1457464E+03, 0.3108832E+02 /
      data (oab13n(53,oi),oi=1,5) / 0.2625000E+01, 0.8551196E+04, 0.1235198E+04, 0.1481475E+03, 0.2468382E+02 /
      data (oab13n(54,oi),oi=1,5) / 0.2675000E+01, 0.8810467E+04, 0.1148058E+04, 0.1567830E+03, 0.3192180E+02 /
      data (oab13n(55,oi),oi=1,5) / 0.2725000E+01, 0.8044001E+04, 0.1292040E+04, 0.1934616E+03, 0.2859044E+02 /
      data (oab13n(56,oi),oi=1,5) / 0.2775000E+01, 0.8041367E+04, 0.1497607E+04, 0.1634275E+03, 0.2380559E+02 /
      data (oab13n(57,oi),oi=1,5) / 0.2825000E+01, 0.6579852E+04, 0.1115499E+04, 0.1225020E+03, 0.2648209E+02 /
      data (oab13n(58,oi),oi=1,5) / 0.2875000E+01, 0.6606772E+04, 0.1126620E+04, 0.1203354E+03, 0.2515094E+02 /
      data (oab13n(59,oi),oi=1,5) / 0.2925000E+01, 0.6567941E+04, 0.1070604E+04, 0.1133518E+03, 0.2327367E+02 /
      data (oab13n(60,oi),oi=1,5) / 0.2975000E+01, 0.6052908E+04, 0.1153350E+04, 0.1081670E+03, 0.3158521E+02 /
      data (oab13n(61,oi),oi=1,5) / 0.3025000E+01, 0.5644331E+04, 0.9318118E+03, 0.1261521E+03, 0.2595631E+02 /
      data (oab13n(62,oi),oi=1,5) / 0.3075000E+01, 0.5973770E+04, 0.8686110E+03, 0.1111491E+03, 0.2734351E+02 /
      data (oab13n(63,oi),oi=1,5) / 0.3125000E+01, 0.4792435E+04, 0.8864774E+03, 0.1150235E+03, 0.2955068E+02 /
      data (oab13n(64,oi),oi=1,5) / 0.3175000E+01, 0.4879814E+04, 0.8969281E+03, 0.1208307E+03, 0.2454437E+02 /
      data (oab13n(65,oi),oi=1,5) / 0.3225000E+01, 0.5455894E+04, 0.9083582E+03, 0.1004387E+03, 0.2265359E+02 /
      data (oab13n(66,oi),oi=1,5) / 0.3275000E+01, 0.5027342E+04, 0.1057345E+04, 0.9117739E+02, 0.2190524E+02 /
      data (oab13n(67,oi),oi=1,5) / 0.3325000E+01, 0.4410514E+04, 0.8875798E+03, 0.1265185E+03, 0.1873781E+02 /
      data (oab13n(68,oi),oi=1,5) / 0.3375000E+01, 0.5227411E+04, 0.5304278E+03, 0.1327377E+03, 0.2063923E+02 /
      data (oab13n(69,oi),oi=1,5) / 0.3425000E+01, 0.4159571E+04, 0.1139968E+04, 0.1132752E+03, 0.2061475E+02 /
      data (oab13n(70,oi),oi=1,5) / 0.3475000E+01, 0.3951743E+04, 0.1056869E+04, 0.9861966E+02, 0.2347771E+02 /
      data (oab13n(71,oi),oi=1,5) / 0.3525000E+01, 0.2953725E+04, 0.6282942E+03, 0.1275728E+03, 0.2282949E+02 /
      data (oab13n(72,oi),oi=1,5) / 0.3575000E+01, 0.3778170E+04, 0.7935184E+03, 0.1002385E+03, 0.2582477E+02 /
      data (oab13n(73,oi),oi=1,5) / 0.3625000E+01, 0.4586874E+04, 0.9722725E+03, 0.9255146E+02, 0.2149518E+02 /
      data (oab13n(74,oi),oi=1,5) / 0.3675000E+01, 0.3747612E+04, 0.4195238E+03, 0.8834340E+02, 0.1958503E+02 /
      data (oab13n(75,oi),oi=1,5) / 0.3725000E+01, 0.3327090E+04, 0.7733718E+03, 0.1229104E+03, 0.1504692E+02 /
      data (oab13n(76,oi),oi=1,5) / 0.3775000E+01, 0.3476369E+04, 0.6094603E+03, 0.8286052E+02, 0.2448058E+02 /
      data (oab13n(77,oi),oi=1,5) / 0.3825000E+01, 0.3298289E+04, 0.6897555E+03, 0.8036481E+02, 0.1868568E+02 /
      data (oab13n(78,oi),oi=1,5) / 0.3875000E+01, 0.3187920E+04, 0.6745512E+03, 0.7329722E+02, 0.1252142E+02 /
      data (oab13n(79,oi),oi=1,5) / 0.3925000E+01, 0.3070741E+04, 0.6257224E+03, 0.7929021E+02, 0.1678588E+02 /
      data (oab13n(80,oi),oi=1,5) / 0.3975000E+01, 0.3170005E+04, 0.3017093E+03, 0.8076209E+02, 0.2107377E+02 /
      data (oab13n(81,oi),oi=1,5) / 0.4025000E+01, 0.3514719E+04, 0.5264744E+03, 0.8221716E+02, 0.2299336E+02 /
      data (oab13n(82,oi),oi=1,5) / 0.4075000E+01, 0.3359631E+04, 0.6025397E+03, 0.7142953E+02, 0.1750718E+02 /
      data (oab13n(83,oi),oi=1,5) / 0.4125000E+01, 0.2897288E+04, 0.6408207E+03, 0.6738090E+02, 0.1089012E+02 /
      data (oab13n(84,oi),oi=1,5) / 0.4175000E+01, 0.2087769E+04, 0.5450907E+03, 0.7710539E+02, 0.2032438E+02 /
      data (oab13n(85,oi),oi=1,5) / 0.4225000E+01, 0.2783791E+04, 0.4500754E+03, 0.6123696E+02, 0.9987482E+01 /
      data (oab13n(86,oi),oi=1,5) / 0.4275000E+01, 0.3101112E+04, 0.7532131E+03, 0.8245326E+02, 0.1363991E+02 /
      data (oab13n(87,oi),oi=1,5) / 0.4325000E+01, 0.2073077E+04, 0.5480441E+03, 0.6435157E+02, 0.1454451E+02 /
      data (oab13n(88,oi),oi=1,5) / 0.4375000E+01, 0.2161562E+04, 0.6074984E+03, 0.6806585E+02, 0.1770720E+02 /
      data (oab13n(89,oi),oi=1,5) / 0.4425000E+01, 0.2562716E+04, 0.6935390E+03, 0.7286651E+02, 0.1788830E+02 /
      data (oab13n(90,oi),oi=1,5) / 0.4475000E+01, 0.2032560E+04, 0.2646135E+03, 0.5868806E+02, 0.1282800E+02 /
      data (oab13n(91,oi),oi=1,5) / 0.4525000E+01, 0.2904377E+04, 0.4568669E+03, 0.6270460E+02, 0.1387233E+02 /
      data (oab13n(92,oi),oi=1,5) / 0.4575000E+01, 0.2172866E+04, 0.8262237E+03, 0.5444126E+02, 0.1130308E+02 /
      data (oab13n(93,oi),oi=1,5) / 0.4625000E+01, 0.2115078E+04, 0.3446948E+03, 0.6532031E+02, 0.1506600E+02 /
      data (oab13n(94,oi),oi=1,5) / 0.4675000E+01, 0.2051228E+04, 0.2781152E+03, 0.5761493E+02, 0.9881974E+01 /
      data (oab13n(95,oi),oi=1,5) / 0.4725000E+01, 0.1899388E+04, 0.3255092E+03, 0.5772270E+02, 0.1682828E+02 /
      data (oab13n(96,oi),oi=1,5) / 0.4775000E+01, 0.1936646E+04, 0.2675844E+03, 0.6194959E+02, 0.1461390E+02 /
      data (oab13n(97,oi),oi=1,5) / 0.4825000E+01, 0.2066620E+04, 0.4721125E+03, 0.6503126E+02, 0.2058356E+02 /
      data (oab13n(98,oi),oi=1,5) / 0.4875000E+01, 0.1849094E+04, 0.3668161E+03, 0.6074502E+02, 0.1718767E+02 /
      data (oab13n(99,oi),oi=1,5) / 0.4925000E+01, 0.1969083E+04, 0.3233176E+03, 0.5595385E+02, 0.2185988E+02 /
      data (oab13n(100,oi),oi=1,5) / 0.4975000E+01, 0.1863229E+04, 0.4168138E+03, 0.8584959E+02, 0.1856728E+02 /
      data (oab13n(101,oi),oi=1,5) / 0.5025000E+01, 0.1556686E+04, 0.1671376E+03, 0.4606465E+02, 0.1187510E+02 /
      data (oab13n(102,oi),oi=1,5) / 0.5075000E+01, 0.1955489E+04, 0.2575810E+03, 0.4841258E+02, 0.1300265E+02 /
      data (oab13n(103,oi),oi=1,5) / 0.5125000E+01, 0.1333025E+04, 0.4471999E+03, 0.5603293E+02, 0.1784632E+02 /
      data (oab13n(104,oi),oi=1,5) / 0.5175000E+01, 0.1715783E+04, 0.4283609E+03, 0.3987182E+02, 0.8654833E+01 /
      data (oab13n(105,oi),oi=1,5) / 0.5225000E+01, 0.1855410E+04, 0.2669715E+03, 0.4671980E+02, 0.1328075E+02 /
      data (oab13n(106,oi),oi=1,5) / 0.5275000E+01, 0.1613856E+04, 0.2901680E+03, 0.1201771E+03, 0.6643495E+01 /
      data (oab13n(107,oi),oi=1,5) / 0.5325000E+01, 0.1734075E+04, 0.2296168E+03, 0.4116313E+02, 0.1287560E+02 /
      data (oab13n(108,oi),oi=1,5) / 0.5375000E+01, 0.2026557E+04, 0.4144989E+03, 0.8749427E+02, 0.6851160E+01 /
      data (oab13n(109,oi),oi=1,5) / 0.5425000E+01, 0.2199625E+04, 0.3555836E+03, 0.3374063E+02, 0.3884695E+01 /
      data (oab13n(110,oi),oi=1,5) / 0.5475000E+01, 0.1806437E+04, 0.7863839E+03, 0.3274721E+02, 0.6609958E+01 /
      data (oab13n(111,oi),oi=1,5) / 0.5525000E+01, 0.1605993E+04, 0.1959373E+03, 0.3002021E+02, 0.5863373E+01 /
      data (oab13n(112,oi),oi=1,5) / 0.5575000E+01, 0.1718657E+04, 0.2938086E+03, 0.4954043E+02, 0.1278990E+02 /
      data (oab13n(113,oi),oi=1,5) / 0.5625000E+01, 0.1551704E+04, 0.3096720E+03, 0.6688194E+02, 0.1607926E+02 /
      data (oab13n(114,oi),oi=1,5) / 0.5675000E+01, 0.1560741E+04, 0.3590583E+03, 0.3471597E+02, 0.1188979E+02 /
      data (oab13n(115,oi),oi=1,5) / 0.5725000E+01, 0.1082136E+04, 0.2619409E+03, 0.3466892E+02, 0.3163408E+01 /
      data (oab13n(116,oi),oi=1,5) / 0.5775000E+01, 0.1104671E+04, 0.2401220E+03, 0.3971517E+02, 0.1079857E+02 /
      data (oab13n(117,oi),oi=1,5) / 0.5825000E+01, 0.1037119E+04, 0.1770481E+03, 0.2930205E+02, 0.4600613E+01 /
      data (oab13n(118,oi),oi=1,5) / 0.5875000E+01, 0.1476882E+04, 0.4936499E+03, 0.3435087E+02, 0.5303518E+01 /
      data (oab13n(119,oi),oi=1,5) / 0.5925000E+01, 0.1544393E+04, 0.5060409E+02, 0.3539340E+02, 0.8379110E+01 /
      data (oab13n(120,oi),oi=1,5) / 0.5975000E+01, 0.1486968E+04, 0.1233704E+03, 0.3088426E+02, 0.8137559E+01 /
      data (oab13n(121,oi),oi=1,5) / 0.6025000E+01, 0.1392203E+04, 0.1770363E+02, 0.5850988E+02, 0.1209172E+02 /
      data (oab13n(122,oi),oi=1,5) / 0.6075000E+01, 0.1288767E+04, 0.2921940E+03, 0.1102931E+03, 0.8539835E+01 /
      data (oab13n(123,oi),oi=1,5) / 0.6125000E+01, 0.1246486E+04, 0.1421222E+03, 0.2832729E+02, 0.6432201E+01 /
      data (oab13n(124,oi),oi=1,5) / 0.6175000E+01, 0.1368825E+04, 0.2476749E+03, 0.2852346E+02, 0.5491020E+01 /
      data (oab13n(125,oi),oi=1,5) / 0.6225000E+01, 0.9327562E+03, 0.2537298E+02, 0.3067734E+02, 0.1380264E+02 /
      data (oab13n(126,oi),oi=1,5) / 0.6275000E+01, 0.1372435E+04, 0.2759939E+03, 0.3089109E+02, 0.8784249E+01 /
      data (oab13n(127,oi),oi=1,5) / 0.6325000E+01, 0.1173183E+04, 0.2185407E+03, 0.2864211E+02, 0.9219961E+01 /
      data (oab13n(128,oi),oi=1,5) / 0.6375000E+01, 0.1017532E+04, 0.4997554E+03, 0.2526378E+02, 0.1109495E+02 /
      data (oab13n(129,oi),oi=1,5) / 0.6425000E+01, 0.1794333E+04, 0.1511034E+03, 0.2837788E+02, 0.8464060E+01 /
      data (oab13n(130,oi),oi=1,5) / 0.6475000E+01, 0.1059812E+04, 0.2068572E+03, 0.1897695E+02, 0.6035648E+01 /
      data (oab13n(131,oi),oi=1,5) / 0.6525000E+01, 0.1029414E+04, 0.2787937E+02, 0.2487892E+02, 0.3346451E+01 /
      data (oab13n(132,oi),oi=1,5) / 0.6575000E+01, 0.7746626E+03, 0.3571315E+02, 0.2934860E+02, 0.1127930E+02 /
      data (oab13n(133,oi),oi=1,5) / 0.6625000E+01, 0.7825778E+03, 0.3065725E+02, 0.3524922E+02, 0.7072489E+01 /
      data (oab13n(134,oi),oi=1,5) / 0.6675000E+01, 0.9971626E+03, 0.2870807E+03, 0.1658664E+02, 0.2893284E+01 /
      data (oab13n(135,oi),oi=1,5) / 0.6725000E+01, 0.5492103E+03, 0.1337199E+02, 0.2885135E+02, 0.8213341E+01 /
      data (oab13n(136,oi),oi=1,5) / 0.6775000E+01, 0.8951776E+03, 0.1479026E+03, 0.2624501E+02, 0.1065864E+02 /
      data (oab13n(137,oi),oi=1,5) / 0.6825000E+01, 0.9063238E+03, 0.1558084E+03, 0.1674260E+02, 0.6002333E+01 /
      data (oab13n(138,oi),oi=1,5) / 0.6875000E+01, 0.7493673E+03, 0.2291413E+03, 0.1672690E+02, 0.3589884E+01 /
      data (oab13n(139,oi),oi=1,5) / 0.6925000E+01, 0.1077597E+04, 0.3457673E+02, 0.1795036E+02, 0.3376333E+01 /
      data (oab13n(140,oi),oi=1,5) / 0.6975000E+01, 0.9553351E+03, 0.1335754E+02, 0.1694143E+02, 0.6107931E+01 /
      data (oab13n(141,oi),oi=1,5) / 0.7025000E+01, 0.6836174E+03, 0.1680767E+03, 0.2022980E+02, 0.5282689E+01 /
      data (oab13n(142,oi),oi=1,5) / 0.7075000E+01, 0.9394167E+03, 0.9545025E+01, 0.1251951E+02, 0.1889547E+01 /
      data (oab13n(143,oi),oi=1,5) / 0.7125000E+01, 0.8460639E+03, 0.1401346E+02, 0.1802136E+02, 0.7098406E+01 /
      data (oab13n(144,oi),oi=1,5) / 0.7175000E+01, 0.1436297E+04, 0.2400020E+02, 0.2308056E+02, 0.6171670E+01 /
      data (oab13n(145,oi),oi=1,5) / 0.7225000E+01, 0.6618902E+03, 0.1795232E+03, 0.3621721E+02, 0.2112228E+02 /
      data (oab13n(146,oi),oi=1,5) / 0.7275000E+01, 0.6434165E+03, 0.1119593E+02, 0.1374927E+02, 0.4982629E+00 /
      data (oab13n(147,oi),oi=1,5) / 0.7325000E+01, 0.1038075E+04, 0.1768228E+03, 0.1928945E+02, 0.8232581E+01 /
      data (oab13n(148,oi),oi=1,5) / 0.7375000E+01, 0.4810037E+03, 0.1493781E+02, 0.2180048E+02, 0.6141186E+01 /
      data (oab13n(149,oi),oi=1,5) / 0.7425000E+01, 0.5259069E+03, 0.1753369E+02, 0.1509315E+02, 0.4676645E+01 /
      data (oab13n(150,oi),oi=1,5) / 0.7475000E+01, 0.4397723E+03, 0.2363363E+02, 0.2070591E+02, 0.8882065E+01 /
      data (oab13n(151,oi),oi=1,5) / 0.7525000E+01, 0.8713644E+03, 0.2636526E+03, 0.1516367E+02, 0.4941032E+01 /
      data (oab13n(152,oi),oi=1,5) / 0.7575000E+01, 0.7272998E+03, 0.1453620E+02, 0.1533183E+02, 0.7435977E+01 /
      data (oab13n(153,oi),oi=1,5) / 0.7625000E+01, 0.7873082E+03, 0.1905136E+03, 0.7254875E+01, 0.6109253E+00 /
      data (oab13n(154,oi),oi=1,5) / 0.7675000E+01, 0.8425912E+03, 0.1824623E+03, 0.1652412E+02, 0.5917258E+01 /
      data (oab13n(155,oi),oi=1,5) / 0.7725000E+01, 0.6452944E+03, 0.1927281E+03, 0.8298011E+01, 0.1779721E+01 /
      data (oab13n(156,oi),oi=1,5) / 0.7775000E+01, 0.9140049E+03, 0.1919277E+03, 0.1591718E+02, 0.2119719E+01 /
      data (oab13n(157,oi),oi=1,5) / 0.7825000E+01, 0.6917182E+03, 0.1034655E+02, 0.1161941E+02, 0.1654676E+01 /
      data (oab13n(158,oi),oi=1,5) / 0.7875000E+01, 0.6768473E+03, 0.6568482E+01, 0.1930190E+02, 0.6048159E+01 /
      data (oab13n(159,oi),oi=1,5) / 0.7925000E+01, 0.6791171E+03, 0.1863557E+02, 0.1569115E+02, 0.6127422E+01 /
      data (oab13n(160,oi),oi=1,5) / 0.7975000E+01, 0.3565321E+03, 0.1345006E+02, 0.8286813E+01, 0.2226545E+01 /
      data (oab13n(161,oi),oi=1,5) / 0.8025000E+01, 0.5841032E+03, 0.1365450E+02, 0.7143153E+01, 0.1693644E+01 /
      data (oab13n(162,oi),oi=1,5) / 0.8075000E+01, 0.4662606E+03, 0.2080088E+03, 0.1086550E+02, 0.2211338E+01 /
      data (oab13n(163,oi),oi=1,5) / 0.8125000E+01, 0.3656954E+03, 0.6970775E+01, 0.1534096E+02, 0.7069455E+01 /
      data (oab13n(164,oi),oi=1,5) / 0.8175000E+01, 0.4057540E+03, 0.1275484E+02, 0.1059797E+02, 0.1402768E+01 /
      data (oab13n(165,oi),oi=1,5) / 0.8225000E+01, 0.3835311E+03, 0.5740457E+01, 0.9360940E+01, 0.4478161E+00 /
      data (oab13n(166,oi),oi=1,5) / 0.8275000E+01, 0.3459631E+03, 0.4211579E+03, 0.1151061E+02, 0.1548318E+01 /
      data (oab13n(167,oi),oi=1,5) / 0.8325000E+01, 0.4986967E+03, 0.1322975E+02, 0.1979507E+02, 0.1009453E+02 /
      data (oab13n(168,oi),oi=1,5) / 0.8375000E+01, 0.2938855E+03, 0.2076234E+02, 0.8045521E+01, 0.1430427E+01 /
      data (oab13n(169,oi),oi=1,5) / 0.8425000E+01, 0.4942815E+03, 0.2348979E+03, 0.9135359E+01, 0.3950173E+01 /
      data (oab13n(170,oi),oi=1,5) / 0.8475000E+01, 0.3435115E+03, 0.1976208E+02, 0.9813332E+01, 0.3769922E+01 /
      data (oab13n(171,oi),oi=1,5) / 0.8525000E+01, 0.3367977E+03, 0.1079967E+02, 0.1314044E+02, 0.1905596E+01 /
      data (oab13n(172,oi),oi=1,5) / 0.8575000E+01, 0.3172069E+03, 0.7805538E+01, 0.6433440E+01, 0.0000000E+00 /
      data (oab13n(173,oi),oi=1,5) / 0.8625000E+01, 0.3475668E+03, 0.2355383E+03, 0.9285314E+01, 0.0000000E+00 /
      data (oab13n(174,oi),oi=1,5) / 0.8675000E+01, 0.3197153E+03, 0.1906996E+02, 0.9196890E+01, 0.3555574E+01 /
      data (oab13n(175,oi),oi=1,5) / 0.8725000E+01, 0.2786798E+03, 0.2257557E+02, 0.6167711E+01, 0.0000000E+00 /
      data (oab13n(176,oi),oi=1,5) / 0.8775000E+01, 0.2753187E+03, 0.8111399E+01, 0.1375194E+02, 0.6597359E+01 /
      data (oab13n(177,oi),oi=1,5) / 0.8825000E+01, 0.2913390E+03, 0.1151379E+02, 0.6901518E+01, 0.0000000E+00 /
      data (oab13n(178,oi),oi=1,5) / 0.8875000E+01, 0.2531690E+03, 0.1498947E+02, 0.1331884E+02, 0.5592262E+01 /
      data (oab13n(179,oi),oi=1,5) / 0.8925000E+01, 0.2510469E+03, 0.3361745E+01, 0.7156215E+01, 0.3983355E+00 /
      data (oab13n(180,oi),oi=1,5) / 0.8975000E+01, 0.2758766E+03, 0.6814034E+01, 0.1087799E+02, 0.8235163E+01 /
      data (oab13n(181,oi),oi=1,5) / 0.9025000E+01, 0.2497866E+03, 0.0000000E+00, 0.4885014E+01, 0.0000000E+00 /
      data (oab13n(182,oi),oi=1,5) / 0.9075000E+01, 0.5201976E+03, 0.0000000E+00, 0.6347044E+01, 0.1116680E+01 /
      data (oab13n(183,oi),oi=1,5) / 0.9125000E+01, 0.2819928E+03, 0.3527938E+01, 0.6536435E+01, 0.0000000E+00 /
      data (oab13n(184,oi),oi=1,5) / 0.9175000E+01, 0.2655089E+03, 0.1244716E+02, 0.8411753E+01, 0.3943318E+01 /
      data (oab13n(185,oi),oi=1,5) / 0.9225000E+01, 0.2159564E+03, 0.1080564E+02, 0.7414847E+01, 0.1794326E+01 /
      data (oab13n(186,oi),oi=1,5) / 0.9275000E+01, 0.5104544E+03, 0.1819960E+02, 0.7795765E+01, 0.4654994E+01 /
      data (oab13n(187,oi),oi=1,5) / 0.9325000E+01, 0.2611078E+03, 0.3695273E+01, 0.4861585E+01, 0.6414395E+00 /
      data (oab13n(188,oi),oi=1,5) / 0.9375000E+01, 0.2472227E+03, 0.2791028E+02, 0.6569844E+01, 0.2134037E+01 /
      data (oab13n(189,oi),oi=1,5) / 0.9425000E+01, 0.2480941E+03, 0.0000000E+00, 0.1109991E+02, 0.7250426E+01 /
      data (oab13n(190,oi),oi=1,5) / 0.9475000E+01, 0.2278690E+03, 0.1141142E+02, 0.7771597E+01, 0.2791394E+01 /
      data (oab13n(191,oi),oi=1,5) / 0.9525000E+01, 0.1938188E+03, 0.9626000E+01, 0.1046944E+02, 0.6352174E+01 /
      data (oab13n(192,oi),oi=1,5) / 0.9575000E+01, 0.2659871E+03, 0.3868268E+01, 0.8597782E+01, 0.2087778E+01 /
      data (oab13n(193,oi),oi=1,5) / 0.9625000E+01, 0.2195014E+03, 0.7841506E+01, 0.4759042E+01, 0.0000000E+00 /
      data (oab13n(194,oi),oi=1,5) / 0.9675000E+01, 0.7273054E+03, 0.3962659E+01, 0.8735321E+01, 0.4131993E+00 /
      data (oab13n(195,oi),oi=1,5) / 0.9725000E+01, 0.2419502E+03, 0.6005933E+01, 0.7659877E+01, 0.4352333E+01 /
      data (oab13n(196,oi),oi=1,5) / 0.9775000E+01, 0.1899414E+03, 0.6036119E+01, 0.9615756E+01, 0.5424121E+01 /
      data (oab13n(197,oi),oi=1,5) / 0.9825000E+01, 0.2266302E+03, 0.1630133E+02, 0.6503375E+01, 0.4209325E+01 /
      data (oab13n(198,oi),oi=1,5) / 0.9875000E+01, 0.2167049E+03, 0.0000000E+00, 0.2712563E+01, 0.0000000E+00 /
      data (oab13n(199,oi),oi=1,5) / 0.9925000E+01, 0.1875152E+03, 0.1671995E+02, 0.3231720E+01, 0.0000000E+00 /
      data (oab13n(200,oi),oi=1,5) / 0.9975000E+01, 0.2336891E+03, 0.8397386E+01, 0.1394588E+01, 0.0000000E+00 /
      data (oab13n(201,oi),oi=1,5) / 0.1002500E+02, 0.3124313E+03, 0.1704988E+02, 0.3342561E+01, 0.0000000E+00 /
      data (oab13n(202,oi),oi=1,5) / 0.1007500E+02, 0.1954528E+03, 0.4276889E+01, 0.5257972E+01, 0.0000000E+00 /
      data (oab13n(203,oi),oi=1,5) / 0.1012500E+02, 0.1603529E+03, 0.8673138E+01, 0.1645148E+01, 0.0000000E+00 /
      data (oab13n(204,oi),oi=1,5) / 0.1017500E+02, 0.1969944E+03, 0.6576419E+01, 0.1623304E+01, 0.0000000E+00 /
      data (oab13n(205,oi),oi=1,5) / 0.1022500E+02, 0.2807642E+03, 0.6641885E+01, 0.3273500E+01, 0.7950826E+00 /
      data (oab13n(206,oi),oi=1,5) / 0.1027500E+02, 0.1407627E+03, 0.8950490E+01, 0.1580928E+01, 0.0000000E+00 /
      data (oab13n(207,oi),oi=1,5) / 0.1032500E+02, 0.1892675E+03, 0.0000000E+00, 0.5672287E+01, 0.0000000E+00 /
      data (oab13n(208,oi),oi=1,5) / 0.1037500E+02, 0.2050271E+03, 0.4570725E+01, 0.1219136E+02, 0.6439334E+01 /
      data (oab13n(209,oi),oi=1,5) / 0.1042500E+02, 0.1333493E+03, 0.2537495E+02, 0.2957312E+01, 0.0000000E+00 /
      data (oab13n(210,oi),oi=1,5) / 0.1047500E+02, 0.1160050E+03, 0.0000000E+00, 0.1271667E+01, 0.0000000E+00 /
      data (oab13n(211,oi),oi=1,5) / 0.1052500E+02, 0.1452645E+03, 0.9374226E+01, 0.8177485E+01, 0.6370133E+01 /
      data (oab13n(212,oi),oi=1,5) / 0.1057500E+02, 0.1963975E+03, 0.0000000E+00, 0.5456705E+01, 0.0000000E+00 /
      data (oab13n(213,oi),oi=1,5) / 0.1062500E+02, 0.1527309E+03, 0.1193870E+02, 0.1807585E+01, 0.0000000E+00 /
      data (oab13n(214,oi),oi=1,5) / 0.1067500E+02, 0.1301330E+03, 0.3434942E+03, 0.7971436E+01, 0.3385238E+01 /
      data (oab13n(215,oi),oi=1,5) / 0.1072500E+02, 0.1361909E+03, 0.4878493E+01, 0.2569331E+01, 0.0000000E+00 /
      data (oab13n(216,oi),oi=1,5) / 0.1077500E+02, 0.1400436E+03, 0.1471861E+02, 0.2570989E+01, 0.0000000E+00 /
      data (oab13n(217,oi),oi=1,5) / 0.1082500E+02, 0.1387769E+03, 0.0000000E+00, 0.3764585E+01, 0.0000000E+00 /
      data (oab13n(218,oi),oi=1,5) / 0.1087500E+02, 0.1374404E+03, 0.0000000E+00, 0.4184029E+01, 0.3284549E+01 /
      data (oab13n(219,oi),oi=1,5) / 0.1092500E+02, 0.1363957E+03, 0.2271745E+02, 0.4021541E+01, 0.0000000E+00 /
      data (oab13n(220,oi),oi=1,5) / 0.1097500E+02, 0.1911981E+03, 0.5114865E+01, 0.1577585E+01, 0.5440977E+00 /
      data (oab13n(221,oi),oi=1,5) / 0.1102500E+02, 0.1775337E+03, 0.7723469E+01, 0.2229126E+01, 0.0000000E+00 /
      data (oab13n(222,oi),oi=1,5) / 0.1107500E+02, 0.1479136E+03, 0.1034367E+02, 0.2486089E+01, 0.0000000E+00 /
      data (oab13n(223,oi),oi=1,5) / 0.1112500E+02, 0.2015550E+03, 0.1050162E+02, 0.9701119E+01, 0.7423061E+01 /
      data (oab13n(224,oi),oi=1,5) / 0.1117500E+02, 0.1556872E+03, 0.5282481E+01, 0.9555317E+00, 0.0000000E+00 /
      data (oab13n(225,oi),oi=1,5) / 0.1122500E+02, 0.1278889E+03, 0.0000000E+00, 0.6658703E+00, 0.0000000E+00 /
      data (oab13n(226,oi),oi=1,5) / 0.1127500E+02, 0.1559666E+03, 0.0000000E+00, 0.4250595E+01, 0.2399346E+01 /
      data (oab13n(227,oi),oi=1,5) / 0.1132500E+02, 0.1573647E+03, 0.5444457E+01, 0.2766409E+01, 0.0000000E+00 /
      data (oab13n(228,oi),oi=1,5) / 0.1137500E+02, 0.1232347E+03, 0.5478649E+01, 0.2029296E+01, 0.0000000E+00 /
      data (oab13n(229,oi),oi=1,5) / 0.1142500E+02, 0.1408934E+03, 0.8282357E+01, 0.7152491E+00, 0.0000000E+00 /
      data (oab13n(230,oi),oi=1,5) / 0.1147500E+02, 0.1198345E+03, 0.8389895E+01, 0.3934637E+01, 0.0000000E+00 /
      data (oab13n(231,oi),oi=1,5) / 0.1152500E+02, 0.1518864E+03, 0.8451827E+01, 0.2472100E+01, 0.0000000E+00 /
      data (oab13n(232,oi),oi=1,5) / 0.1157500E+02, 0.2069068E+03, 0.0000000E+00, 0.7079330E+01, 0.4937769E+01 /
      data (oab13n(233,oi),oi=1,5) / 0.1162500E+02, 0.6867221E+02, 0.0000000E+00, 0.1958150E+01, 0.0000000E+00 /
      data (oab13n(234,oi),oi=1,5) / 0.1167500E+02, 0.1327512E+03, 0.0000000E+00, 0.2292020E+01, 0.0000000E+00 /
      data (oab13n(235,oi),oi=1,5) / 0.1172500E+02, 0.1018797E+03, 0.5808374E+01, 0.3911725E+01, 0.2471637E+01 /
      data (oab13n(236,oi),oi=1,5) / 0.1177500E+02, 0.1437779E+03, 0.0000000E+00, 0.1719008E+01, 0.0000000E+00 /
      data (oab13n(237,oi),oi=1,5) / 0.1182500E+02, 0.1596924E+03, 0.5900581E+01, 0.3948866E+01, 0.0000000E+00 /
      data (oab13n(238,oi),oi=1,5) / 0.1187500E+02, 0.9247294E+02, 0.5983293E+01, 0.3001914E+01, 0.0000000E+00 /
      data (oab13n(239,oi),oi=1,5) / 0.1192500E+02, 0.1233783E+03, 0.0000000E+00, 0.2449325E+01, 0.0000000E+00 /
      data (oab13n(240,oi),oi=1,5) / 0.1197500E+02, 0.1000147E+03, 0.1515218E+02, 0.1649724E+01, 0.0000000E+00 /
      data (oab13n(241,oi),oi=1,5) / 0.1202500E+02, 0.6430959E+02, 0.6104237E+01, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(242,oi),oi=1,5) / 0.1207500E+02, 0.1078747E+03, 0.0000000E+00, 0.7284374E+00, 0.0000000E+00 /
      data (oab13n(243,oi),oi=1,5) / 0.1212500E+02, 0.1182014E+03, 0.0000000E+00, 0.3124764E+01, 0.3124764E+01 /
      data (oab13n(244,oi),oi=1,5) / 0.1217500E+02, 0.1473333E+03, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(245,oi),oi=1,5) / 0.1222500E+02, 0.1169765E+03, 0.0000000E+00, 0.1477545E+01, 0.0000000E+00 /
      data (oab13n(246,oi),oi=1,5) / 0.1227500E+02, 0.1179526E+03, 0.0000000E+00, 0.1300801E+01, 0.0000000E+00 /
      data (oab13n(247,oi),oi=1,5) / 0.1232500E+02, 0.8358892E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(248,oi),oi=1,5) / 0.1237500E+02, 0.1296702E+03, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(249,oi),oi=1,5) / 0.1242500E+02, 0.1567952E+03, 0.0000000E+00, 0.1034404E+01, 0.0000000E+00 /
      data (oab13n(250,oi),oi=1,5) / 0.1247500E+02, 0.9541984E+02, 0.2305465E+02, 0.2034569E+01, 0.0000000E+00 /
      data (oab13n(251,oi),oi=1,5) / 0.1252500E+02, 0.1327742E+03, 0.0000000E+00, 0.8490850E+00, 0.0000000E+00 /
      data (oab13n(252,oi),oi=1,5) / 0.1257500E+02, 0.1204582E+03, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(253,oi),oi=1,5) / 0.1262500E+02, 0.1078441E+03, 0.0000000E+00, 0.9276652E+00, 0.0000000E+00 /
      data (oab13n(254,oi),oi=1,5) / 0.1267500E+02, 0.1088330E+03, 0.0000000E+00, 0.1454883E+01, 0.0000000E+00 /
      data (oab13n(255,oi),oi=1,5) / 0.1272500E+02, 0.7876493E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(256,oi),oi=1,5) / 0.1277500E+02, 0.6560168E+02, 0.0000000E+00, 0.1423489E+01, 0.0000000E+00 /
      data (oab13n(257,oi),oi=1,5) / 0.1282500E+02, 0.6259820E+02, 0.0000000E+00, 0.1503204E+01, 0.0000000E+00 /
      data (oab13n(258,oi),oi=1,5) / 0.1287500E+02, 0.7013525E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(259,oi),oi=1,5) / 0.1292500E+02, 0.4948678E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(260,oi),oi=1,5) / 0.1297500E+02, 0.1175500E+03, 0.0000000E+00, 0.8189086E+00, 0.0000000E+00 /
      data (oab13n(261,oi),oi=1,5) / 0.1302500E+02, 0.9688861E+02, 0.7169225E+01, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(262,oi),oi=1,5) / 0.1307500E+02, 0.9053387E+02, 0.0000000E+00, 0.1035172E+01, 0.0000000E+00 /
      data (oab13n(263,oi),oi=1,5) / 0.1312500E+02, 0.9832586E+02, 0.0000000E+00, 0.1409994E+01, 0.0000000E+00 /
      data (oab13n(264,oi),oi=1,5) / 0.1317500E+02, 0.9904198E+02, 0.0000000E+00, 0.2719136E+01, 0.0000000E+00 /
      data (oab13n(265,oi),oi=1,5) / 0.1322500E+02, 0.8151838E+02, 0.0000000E+00, 0.1127606E+01, 0.0000000E+00 /
      data (oab13n(266,oi),oi=1,5) / 0.1327500E+02, 0.5585682E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(267,oi),oi=1,5) / 0.1332500E+02, 0.7140398E+02, 0.0000000E+00, 0.1470371E+01, 0.0000000E+00 /
      data (oab13n(268,oi),oi=1,5) / 0.1337500E+02, 0.1437659E+03, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(269,oi),oi=1,5) / 0.1342500E+02, 0.7627472E+02, 0.0000000E+00, 0.1414007E+01, 0.0000000E+00 /
      data (oab13n(270,oi),oi=1,5) / 0.1347500E+02, 0.9602279E+02, 0.7665782E+01, 0.1096964E+01, 0.0000000E+00 /
      data (oab13n(271,oi),oi=1,5) / 0.1352500E+02, 0.4253291E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(272,oi),oi=1,5) / 0.1357500E+02, 0.5849841E+02, 0.0000000E+00, 0.7410658E+00, 0.0000000E+00 /
      data (oab13n(273,oi),oi=1,5) / 0.1362500E+02, 0.8636180E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(274,oi),oi=1,5) / 0.1367500E+02, 0.9892384E+02, 0.7894946E+01, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(275,oi),oi=1,5) / 0.1372500E+02, 0.7575490E+02, 0.0000000E+00, 0.1837081E+01, 0.0000000E+00 /
      data (oab13n(276,oi),oi=1,5) / 0.1377500E+02, 0.8015987E+02, 0.8037358E+01, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(277,oi),oi=1,5) / 0.1382500E+02, 0.6877463E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(278,oi),oi=1,5) / 0.1387500E+02, 0.6505883E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(279,oi),oi=1,5) / 0.1392500E+02, 0.4924218E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(280,oi),oi=1,5) / 0.1397500E+02, 0.6200987E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(281,oi),oi=1,5) / 0.1402500E+02, 0.6653966E+02, 0.0000000E+00, 0.1178198E+01, 0.0000000E+00 /
      data (oab13n(282,oi),oi=1,5) / 0.1407500E+02, 0.1257330E+03, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(283,oi),oi=1,5) / 0.1412500E+02, 0.5067905E+02, 0.0000000E+00, 0.2557755E+01, 0.1042353E+01 /
      data (oab13n(284,oi),oi=1,5) / 0.1417500E+02, 0.6804550E+02, 0.0000000E+00, 0.1407825E+01, 0.0000000E+00 /
      data (oab13n(285,oi),oi=1,5) / 0.1422500E+02, 0.1717125E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(286,oi),oi=1,5) / 0.1427500E+02, 0.6894762E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(287,oi),oi=1,5) / 0.1432500E+02, 0.5642451E+02, 0.0000000E+00, 0.9651990E+00, 0.0000000E+00 /
      data (oab13n(288,oi),oi=1,5) / 0.1437500E+02, 0.4820187E+02, 0.0000000E+00, 0.1233933E+01, 0.0000000E+00 /
      data (oab13n(289,oi),oi=1,5) / 0.1442500E+02, 0.9237859E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(290,oi),oi=1,5) / 0.1447500E+02, 0.8425692E+02, 0.0000000E+00, 0.1739811E+01, 0.0000000E+00 /
      data (oab13n(291,oi),oi=1,5) / 0.1452500E+02, 0.8483718E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(292,oi),oi=1,5) / 0.1457500E+02, 0.4053006E+02, 0.0000000E+00, 0.1335575E+01, 0.0000000E+00 /
      data (oab13n(293,oi),oi=1,5) / 0.1462500E+02, 0.9496168E+02, 0.0000000E+00, 0.8069938E+00, 0.0000000E+00 /
      data (oab13n(294,oi),oi=1,5) / 0.1467500E+02, 0.6374599E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(295,oi),oi=1,5) / 0.1472500E+02, 0.1054558E+03, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(296,oi),oi=1,5) / 0.1477500E+02, 0.2774960E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(297,oi),oi=1,5) / 0.1482500E+02, 0.6508891E+02, 0.0000000E+00, 0.0000000E+00, 0.0000000E+00 /
      data (oab13n(298,oi),oi=1,5) / 0.1487500E+02, 0.5155083E+02, 0.0000000E+00, 0.8249054E+00, 0.0000000E+00 /
      data (oab13n(299,oi),oi=1,5) / 0.1492500E+02, 0.1036970E+03, 0.0000000E+00, 0.1041168E+02, 0.9027353E+01 /
      data (oab13n(300,oi),oi=1,5) / 0.1497500E+02, 0.1896144E+02, 0.0000000E+00, 0.2337350E+01, 0.0000000E+00 /