int sintable[] =
{
0,201,402,603,804,1005,1206,1407,
1608,1809,2010,2211,2412,2613,2814,3014,
3215,3416,3617,3818,4018,4219,4420,4620,
4821,5021,5222,5422,5622,5823,6023,6223,
6423,6623,6823,7023,7223,7423,7623,7822,
8022,8221,8421,8620,8819,9019,9218,9417,
9616,9814,10013,10212,10410,10609,10807,11006,
11204,11402,11600,11797,11995,12193,12390,12588,
12785,12982,13179,13376,13573,13769,13966,14162,
14359,14555,14751,14946,15142,15338,15533,15728,
15923,16118,16313,16508,16702,16897,17091,17285,
17479,17672,17866,18059,18253,18446,18638,18831,
19024,19216,19408,19600,19792,19983,20175,20366,
20557,20748,20938,21129,21319,21509,21699,21889,
22078,22267,22456,22645,22833,23022,23210,23398,
23586,23773,23960,24147,24334,24521,24707,24893,
25079,25265,25450,25635,25820,26005,26189,26373,
26557,26741,26925,27108,27291,27473,27656,27838,
28020,28201,28383,28564,28745,28925,29105,29285,
29465,29645,29824,30003,30181,30360,30538,30715,
30893,31070,31247,31424,31600,31776,31952,32127,
32302,32477,32651,32826,32999,33173,33346,33519,
33692,33864,34036,34208,34379,34550,34721,34891,
35061,35231,35400,35569,35738,35906,36074,36242,
36409,36576,36743,36909,37075,37241,37406,37571,
37736,37900,38064,38227,38390,38553,38716,38878,
39039,39201,39362,39522,39682,39842,40002,40161,
40319,40478,40636,40793,40950,41107,41263,41419,
41575,41730,41885,42040,42194,42347,42501,42653,
42806,42958,43110,43261,43412,43562,43712,43862,
44011,44160,44308,44456,44603,44750,44897,45043,
45189,45335,45480,45624,45768,45912,46055,46198,
46340,46482,46624,46765,46906,47046,47186,47325,
47464,47602,47740,47878,48015,48151,48288,48423,
48558,48693,48828,48961,49095,49228,49360,49492,
49624,49755,49886,50016,50146,50275,50403,50532,
50660,50787,50914,51040,51166,51291,51416,51541,
51665,51788,51911,52033,52155,52277,52398,52518,
52639,52758,52877,52996,53114,53231,53348,53465,
53581,53696,53811,53926,54040,54153,54266,54379,
54491,54602,54713,54823,54933,55043,55152,55260,
55368,55475,55582,55688,55794,55899,56004,56108,
56212,56315,56417,56519,56621,56722,56822,56922,
57022,57120,57219,57316,57414,57510,57606,57702,
57797,57892,57986,58079,58172,58264,58356,58447,
58538,58628,58718,58807,58895,58983,59070,59157,
59243,59329,59414,59499,59583,59666,59749,59831,
59913,59994,60075,60155,60235,60313,60392,60470,
60547,60624,60700,60775,60850,60924,60998,61071,
61144,61216,61288,61359,61429,61499,61568,61637,
61705,61772,61839,61905,61971,62036,62100,62164,
62228,62291,62353,62414,62475,62536,62596,62655,
62714,62772,62829,62886,62942,62998,63053,63108,
63162,63215,63268,63320,63371,63422,63473,63522,
63571,63620,63668,63715,63762,63808,63854,63899,
63943,63987,64030,64073,64115,64156,64197,64237,
64276,64315,64353,64391,64428,64465,64501,64536,
64571,64605,64638,64671,64703,64735,64766,64796,
64826,64855,64884,64912,64939,64966,64992,65018,
65043,65067,65091,65114,65136,65158,65179,65200,
65220,65239,65258,65276,65294,65311,65327,65343,
65358,65372,65386,65400,65412,65424,65436,65446,
65457,65466,65475,65483,65491,65498,65505,65511,
65516,65520,65524,65528,65531,65533,65534,65535,
65536,65535,65534,65533,65531,65528,65524,65520,
65516,65511,65505,65498,65491,65483,65475,65466,
65457,65446,65436,65424,65412,65400,65386,65372,
65358,65343,65327,65311,65294,65276,65258,65239,
65220,65200,65179,65158,65136,65114,65091,65067,
65043,65018,64992,64966,64939,64912,64884,64855,
64826,64796,64766,64735,64703,64671,64638,64605,
64571,64536,64501,64465,64428,64391,64353,64315,
64276,64237,64197,64156,64115,64073,64030,63987,
63943,63899,63854,63808,63762,63715,63668,63620,
63571,63522,63473,63422,63371,63320,63268,63215,
63162,63108,63053,62998,62942,62886,62829,62772,
62714,62655,62596,62536,62475,62414,62353,62291,
62228,62164,62100,62036,61971,61905,61839,61772,
61705,61637,61568,61499,61429,61359,61288,61216,
61144,61071,60998,60924,60850,60775,60700,60624,
60547,60470,60392,60313,60235,60155,60075,59994,
59913,59831,59749,59666,59583,59499,59414,59329,
59243,59157,59070,58983,58895,58807,58718,58628,
58538,58447,58356,58264,58172,58079,57986,57892,
57797,57702,57606,57510,57414,57316,57219,57120,
57022,56922,56822,56722,56621,56519,56417,56315,
56212,56108,56004,55899,55794,55688,55582,55475,
55368,55260,55152,55043,54933,54823,54713,54602,
54491,54379,54266,54153,54040,53926,53811,53696,
53581,53465,53348,53231,53114,52996,52877,52758,
52639,52518,52398,52277,52155,52033,51911,51788,
51665,51541,51416,51291,51166,51040,50914,50787,
50660,50532,50403,50275,50146,50016,49886,49755,
49624,49492,49360,49228,49095,48961,48828,48693,
48558,48423,48288,48151,48015,47878,47740,47602,
47464,47325,47186,47046,46906,46765,46624,46482,
46340,46198,46055,45912,45768,45624,45480,45335,
45189,45043,44897,44750,44603,44456,44308,44160,
44011,43862,43712,43562,43412,43261,43110,42958,
42806,42653,42501,42347,42194,42040,41885,41730,
41575,41419,41263,41107,40950,40793,40636,40478,
40319,40161,40002,39842,39682,39522,39362,39201,
39039,38878,38716,38553,38390,38227,38064,37900,
37736,37571,37406,37241,37075,36909,36743,36576,
36409,36242,36074,35906,35738,35569,35400,35231,
35061,34891,34721,34550,34379,34208,34036,33864,
33692,33519,33346,33173,32999,32826,32651,32477,
32302,32127,31952,31776,31600,31424,31247,31070,
30893,30715,30538,30360,30181,30003,29824,29645,
29465,29285,29105,28925,28745,28564,28383,28201,
28020,27838,27656,27473,27291,27108,26925,26741,
26557,26373,26189,26005,25820,25635,25450,25265,
25079,24893,24707,24521,24334,24147,23960,23773,
23586,23398,23210,23022,22833,22645,22456,22267,
22078,21889,21699,21509,21319,21129,20938,20748,
20557,20366,20175,19983,19792,19600,19408,19216,
19024,18831,18638,18446,18253,18059,17866,17672,
17479,17285,17091,16897,16702,16508,16313,16118,
15923,15728,15533,15338,15142,14946,14751,14555,
14359,14162,13966,13769,13573,13376,13179,12982,
12785,12588,12390,12193,11995,11797,11600,11402,
11204,11006,10807,10609,10410,10212,10013,9814,
9616,9417,9218,9019,8819,8620,8421,8221,
8022,7822,7623,7423,7223,7023,6823,6623,
6423,6223,6023,5823,5622,5422,5222,5021,
4821,4620,4420,4219,4018,3818,3617,3416,
3215,3014,2814,2613,2412,2211,2010,1809,
1608,1407,1206,1005,804,603,402,201,
0,-201,-402,-603,-804,-1005,-1206,-1407,
-1608,-1809,-2010,-2211,-2412,-2613,-2814,-3014,
-3215,-3416,-3617,-3818,-4018,-4219,-4420,-4620,
-4821,-5021,-5222,-5422,-5622,-5823,-6023,-6223,
-6423,-6623,-6823,-7023,-7223,-7423,-7623,-7822,
-8022,-8221,-8421,-8620,-8819,-9019,-9218,-9417,
-9616,-9814,-10013,-10212,-10410,-10609,-10807,-11006,
-11204,-11402,-11600,-11797,-11995,-12193,-12390,-12588,
-12785,-12982,-13179,-13376,-13573,-13769,-13966,-14162,
-14359,-14555,-14751,-14946,-15142,-15338,-15533,-15728,
-15923,-16118,-16313,-16508,-16702,-16897,-17091,-17285,
-17479,-17672,-17866,-18059,-18253,-18446,-18638,-18831,
-19024,-19216,-19408,-19600,-19792,-19983,-20175,-20366,
-20557,-20748,-20938,-21129,-21319,-21509,-21699,-21889,
-22078,-22267,-22456,-22645,-22833,-23022,-23210,-23398,
-23586,-23773,-23960,-24147,-24334,-24521,-24707,-24893,
-25079,-25265,-25450,-25635,-25820,-26005,-26189,-26373,
-26557,-26741,-26925,-27108,-27291,-27473,-27656,-27838,
-28020,-28201,-28383,-28564,-28745,-28925,-29105,-29285,
-29465,-29645,-29824,-30003,-30181,-30360,-30538,-30715,
-30893,-31070,-31247,-31424,-31600,-31776,-31952,-32127,
-32302,-32477,-32651,-32826,-32999,-33173,-33346,-33519,
-33692,-33864,-34036,-34208,-34379,-34550,-34721,-34891,
-35061,-35231,-35400,-35569,-35738,-35906,-36074,-36242,
-36409,-36576,-36743,-36909,-37075,-37241,-37406,-37571,
-37736,-37900,-38064,-38227,-38390,-38553,-38716,-38878,
-39039,-39201,-39362,-39522,-39682,-39842,-40002,-40161,
-40319,-40478,-40636,-40793,-40950,-41107,-41263,-41419,
-41575,-41730,-41885,-42040,-42194,-42347,-42501,-42653,
-42806,-42958,-43110,-43261,-43412,-43562,-43712,-43862,
-44011,-44160,-44308,-44456,-44603,-44750,-44897,-45043,
-45189,-45335,-45480,-45624,-45768,-45912,-46055,-46198,
-46340,-46482,-46624,-46765,-46906,-47046,-47186,-47325,
-47464,-47602,-47740,-47878,-48015,-48151,-48288,-48423,
-48558,-48693,-48828,-48961,-49095,-49228,-49360,-49492,
-49624,-49755,-49886,-50016,-50146,-50275,-50403,-50532,
-50660,-50787,-50914,-51040,-51166,-51291,-51416,-51541,
-51665,-51788,-51911,-52033,-52155,-52277,-52398,-52518,
-52639,-52758,-52877,-52996,-53114,-53231,-53348,-53465,
-53581,-53696,-53811,-53926,-54040,-54153,-54266,-54379,
-54491,-54602,-54713,-54823,-54933,-55043,-55152,-55260,
-55368,-55475,-55582,-55688,-55794,-55899,-56004,-56108,
-56212,-56315,-56417,-56519,-56621,-56722,-56822,-56922,
-57022,-57120,-57219,-57316,-57414,-57510,-57606,-57702,
-57797,-57892,-57986,-58079,-58172,-58264,-58356,-58447,
-58538,-58628,-58718,-58807,-58895,-58983,-59070,-59157,
-59243,-59329,-59414,-59499,-59583,-59666,-59749,-59831,
-59913,-59994,-60075,-60155,-60235,-60313,-60392,-60470,
-60547,-60624,-60700,-60775,-60850,-60924,-60998,-61071,
-61144,-61216,-61288,-61359,-61429,-61499,-61568,-61637,
-61705,-61772,-61839,-61905,-61971,-62036,-62100,-62164,
-62228,-62291,-62353,-62414,-62475,-62536,-62596,-62655,
-62714,-62772,-62829,-62886,-62942,-62998,-63053,-63108,
-63162,-63215,-63268,-63320,-63371,-63422,-63473,-63522,
-63571,-63620,-63668,-63715,-63762,-63808,-63854,-63899,
-63943,-63987,-64030,-64073,-64115,-64156,-64197,-64237,
-64276,-64315,-64353,-64391,-64428,-64465,-64501,-64536,
-64571,-64605,-64638,-64671,-64703,-64735,-64766,-64796,
-64826,-64855,-64884,-64912,-64939,-64966,-64992,-65018,
-65043,-65067,-65091,-65114,-65136,-65158,-65179,-65200,
-65220,-65239,-65258,-65276,-65294,-65311,-65327,-65343,
-65358,-65372,-65386,-65400,-65412,-65424,-65436,-65446,
-65457,-65466,-65475,-65483,-65491,-65498,-65505,-65511,
-65516,-65520,-65524,-65528,-65531,-65533,-65534,-65535,
-65536,-65535,-65534,-65533,-65531,-65528,-65524,-65520,
-65516,-65511,-65505,-65498,-65491,-65483,-65475,-65466,
-65457,-65446,-65436,-65424,-65412,-65400,-65386,-65372,
-65358,-65343,-65327,-65311,-65294,-65276,-65258,-65239,
-65220,-65200,-65179,-65158,-65136,-65114,-65091,-65067,
-65043,-65018,-64992,-64966,-64939,-64912,-64884,-64855,
-64826,-64796,-64766,-64735,-64703,-64671,-64638,-64605,
-64571,-64536,-64501,-64465,-64428,-64391,-64353,-64315,
-64276,-64237,-64197,-64156,-64115,-64073,-64030,-63987,
-63943,-63899,-63854,-63808,-63762,-63715,-63668,-63620,
-63571,-63522,-63473,-63422,-63371,-63320,-63268,-63215,
-63162,-63108,-63053,-62998,-62942,-62886,-62829,-62772,
-62714,-62655,-62596,-62536,-62475,-62414,-62353,-62291,
-62228,-62164,-62100,-62036,-61971,-61905,-61839,-61772,
-61705,-61637,-61568,-61499,-61429,-61359,-61288,-61216,
-61144,-61071,-60998,-60924,-60850,-60775,-60700,-60624,
-60547,-60470,-60392,-60313,-60235,-60155,-60075,-59994,
-59913,-59831,-59749,-59666,-59583,-59499,-59414,-59329,
-59243,-59157,-59070,-58983,-58895,-58807,-58718,-58628,
-58538,-58447,-58356,-58264,-58172,-58079,-57986,-57892,
-57797,-57702,-57606,-57510,-57414,-57316,-57219,-57120,
-57022,-56922,-56822,-56722,-56621,-56519,-56417,-56315,
-56212,-56108,-56004,-55899,-55794,-55688,-55582,-55475,
-55368,-55260,-55152,-55043,-54933,-54823,-54713,-54602,
-54491,-54379,-54266,-54153,-54040,-53926,-53811,-53696,
-53581,-53465,-53348,-53231,-53114,-52996,-52877,-52758,
-52639,-52518,-52398,-52277,-52155,-52033,-51911,-51788,
-51665,-51541,-51416,-51291,-51166,-51040,-50914,-50787,
-50660,-50532,-50403,-50275,-50146,-50016,-49886,-49755,
-49624,-49492,-49360,-49228,-49095,-48961,-48828,-48693,
-48558,-48423,-48288,-48151,-48015,-47878,-47740,-47602,
-47464,-47325,-47186,-47046,-46906,-46765,-46624,-46482,
-46340,-46198,-46055,-45912,-45768,-45624,-45480,-45335,
-45189,-45043,-44897,-44750,-44603,-44456,-44308,-44160,
-44011,-43862,-43712,-43562,-43412,-43261,-43110,-42958,
-42806,-42653,-42501,-42347,-42194,-42040,-41885,-41730,
-41575,-41419,-41263,-41107,-40950,-40793,-40636,-40478,
-40319,-40161,-40002,-39842,-39682,-39522,-39362,-39201,
-39039,-38878,-38716,-38553,-38390,-38227,-38064,-37900,
-37736,-37571,-37406,-37241,-37075,-36909,-36743,-36576,
-36409,-36242,-36074,-35906,-35738,-35569,-35400,-35231,
-35061,-34891,-34721,-34550,-34379,-34208,-34036,-33864,
-33692,-33519,-33346,-33173,-32999,-32826,-32651,-32477,
-32302,-32127,-31952,-31776,-31600,-31424,-31247,-31070,
-30893,-30715,-30538,-30360,-30181,-30003,-29824,-29645,
-29465,-29285,-29105,-28925,-28745,-28564,-28383,-28201,
-28020,-27838,-27656,-27473,-27291,-27108,-26925,-26741,
-26557,-26373,-26189,-26005,-25820,-25635,-25450,-25265,
-25079,-24893,-24707,-24521,-24334,-24147,-23960,-23773,
-23586,-23398,-23210,-23022,-22833,-22645,-22456,-22267,
-22078,-21889,-21699,-21509,-21319,-21129,-20938,-20748,
-20557,-20366,-20175,-19983,-19792,-19600,-19408,-19216,
-19024,-18831,-18638,-18446,-18253,-18059,-17866,-17672,
-17479,-17285,-17091,-16897,-16702,-16508,-16313,-16118,
-15923,-15728,-15533,-15338,-15142,-14946,-14751,-14555,
-14359,-14162,-13966,-13769,-13573,-13376,-13179,-12982,
-12785,-12588,-12390,-12193,-11995,-11797,-11600,-11402,
-11204,-11006,-10807,-10609,-10410,-10212,-10013,-9814,
-9616,-9417,-9218,-9019,-8819,-8620,-8421,-8221,
-8022,-7822,-7623,-7423,-7223,-7023,-6823,-6623,
-6423,-6223,-6023,-5823,-5622,-5422,-5222,-5021,
-4821,-4620,-4420,-4219,-4018,-3818,-3617,-3416,
-3215,-3014,-2814,-2613,-2412,-2211,-2010,-1809,
-1608,-1407,-1206,-1005,-804,-603,-402,-201
};

short radarang[] =
{
-27653,-27646,-27638,-27630,-27622,-27615,-27607,-27599,
-27591,-27583,-27575,-27567,-27559,-27551,-27543,-27535,
-27527,-27519,-27511,-27503,-27495,-27487,-27479,-27470,
-27462,-27454,-27446,-27437,-27429,-27421,-27412,-27404,
-27395,-27387,-27378,-27370,-27361,-27353,-27344,-27335,
-27327,-27318,-27309,-27301,-27292,-27283,-27274,-27265,
-27257,-27248,-27239,-27230,-27221,-27212,-27203,-27194,
-27185,-27175,-27166,-27157,-27148,-27139,-27129,-27120,
-27111,-27101,-27092,-27082,-27073,-27064,-27054,-27044,
-27035,-27025,-27016,-27006,-26996,-26986,-26977,-26967,
-26957,-26947,-26937,-26927,-26917,-26907,-26897,-26887,
-26877,-26867,-26857,-26847,-26836,-26826,-26816,-26805,
-26795,-26785,-26774,-26764,-26753,-26743,-26732,-26721,
-26711,-26700,-26689,-26679,-26668,-26657,-26646,-26635,
-26624,-26613,-26602,-26591,-26580,-26569,-26557,-26546,
-26535,-26524,-26512,-26501,-26489,-26478,-26466,-26455,
-26443,-26432,-26420,-26408,-26396,-26385,-26373,-26361,
-26349,-26337,-26325,-26313,-26301,-26289,-26276,-26264,
-26252,-26240,-26227,-26215,-26202,-26190,-26177,-26165,
-26152,-26139,-26127,-26114,-26101,-26088,-26075,-26062,
-26049,-26036,-26023,-26010,-25996,-25983,-25970,-25956,
-25943,-25929,-25916,-25902,-25889,-25875,-25861,-25847,
-25834,-25820,-25806,-25792,-25778,-25763,-25749,-25735,
-25721,-25706,-25692,-25678,-25663,-25648,-25634,-25619,
-25604,-25590,-25575,-25560,-25545,-25530,-25515,-25499,
-25484,-25469,-25454,-25438,-25423,-25407,-25392,-25376,
-25360,-25344,-25329,-25313,-25297,-25281,-25264,-25248,
-25232,-25216,-25199,-25183,-25166,-25150,-25133,-25116,
-25100,-25083,-25066,-25049,-25032,-25014,-24997,-24980,
-24963,-24945,-24928,-24910,-24892,-24875,-24857,-24839,
-24821,-24803,-24785,-24766,-24748,-24730,-24711,-24693,
-24674,-24655,-24637,-24618,-24599,-24580,-24561,-24541,
-24522,-24503,-24483,-24464,-24444,-24424,-24405,-24385,
-24365,-24345,-24325,-24304,-24284,-24263,-24243,-24222,
-24202,-24181,-24160,-24139,-24118,-24096,-24075,-24054,
-24032,-24011,-23989,-23967,-23945,-23923,-23901,-23879,
-23857,-23834,-23812,-23789,-23766,-23743,-23720,-23697,
-23674,-23651,-23627,-23604,-23580,-23556,-23533,-23509,
-23485,-23460,-23436,-23412,-23387,-23362,-23337,-23312,
-23287,-23262,-23237,-23211,-23186,-23160,-23134,-23108,
-23082,-23056,-23030,-23003,-22977,-22950,-22923,-22896,
-22869,-22842,-22814,-22787,-22759,-22731,-22703,-22675,
-22647,-22618,-22590,-22561,-22532,-22503,-22474,-22445,
-22415,-22386,-22356,-22326,-22296,-22265,-22235,-22204,
-22174,-22143,-22112,-22080,-22049,-22017,-21986,-21954,
-21922,-21889,-21857,-21824,-21792,-21759,-21725,-21692,
-21659,-21625,-21591,-21557,-21523,-21488,-21454,-21419,
-21384,-21348,-21313,-21277,-21242,-21206,-21169,-21133,
-21096,-21060,-21022,-20985,-20948,-20910,-20872,-20834,
-20796,-20757,-20719,-20680,-20640,-20601,-20561,-20521,
-20481,-20441,-20400,-20359,-20318,-20277,-20236,-20194,
-20152,-20110,-20067,-20024,-19981,-19938,-19894,-19851,
-19807,-19762,-19718,-19673,-19628,-19582,-19537,-19491,
-19445,-19398,-19351,-19304,-19257,-19209,-19162,-19113,
-19065,-19016,-18967,-18918,-18868,-18818,-18768,-18717,
-18666,-18615,-18564,-18512,-18460,-18407,-18355,-18301,
-18248,-18194,-18140,-18086,-18031,-17976,-17920,-17865,
-17808,-17752,-17695,-17638,-17580,-17522,-17464,-17406,
-17347,-17287,-17227,-17167,-17107,-17046,-16985,-16923,
-16861,-16799,-16736,-16673,-16609,-16545,-16481,-16416,
-16351,-16285,-16219,-16153,-16086,-16019,-15951,-15883,
-15814,-15745,-15676,-15606,-15536,-15465,-15394,-15323,
-15251,-15178,-15105,-15032,-14958,-14884,-14809,-14734,
-14658,-14582,-14505,-14428,-14350,-14272,-14194,-14115,
-14035,-13955,-13875,-13794,-13712,-13630,-13548,-13465,
-13382,-13298,-13213,-13128,-13043,-12957,-12870,-12783,
-12696,-12608,-12519,-12430,-12341,-12251,-12160,-12069,
-11977,-11885,-11792,-11699,-11605,-11511,-11416,-11321,
-11225,-11129,-11032,-10934,-10836,-10738,-10639,-10539,
-10439,-10338,-10237,-10136,-10033,-9931,-9827,-9724,
-9619,-9514,-9409,-9303,-9197,-9090,-8983,-8875,
-8766,-8657,-8548,-8438,-8328,-8217,-8105,-7993,
-7881,-7768,-7655,-7541,-7427,-7312,-7197,-7081,
-6965,-6848,-6731,-6614,-6496,-6377,-6258,-6139,
-6020,-5900,-5779,-5658,-5537,-5416,-5294,-5171,
-5049,-4925,-4802,-4678,-4554,-4430,-4305,-4180,
-4055,-3929,-3803,-3677,-3550,-3423,-3296,-3169,
-3042,-2914,-2786,-2658,-2529,-2401,-2272,-2143,
-2014,-1885,-1755,-1626,-1496,-1367,-1237,-1107,
-977,-847,-716,-586,-456,-325,-195,-65
};

