#include <vector>
#include <iostream>
#include "device.h"
#include "tabulate.h"
#include <gtest/gtest.h>
#include "utilities.h"

class TestTabulate : public ::testing::Test
{
protected:
  // em_x = tf.random.uniform([4, 16], minval=0, maxval=0.2, dtype = tf.float64)
  std::vector<double > info = {
    0, 0.2, 0.4, 0.01, 0.1, -1 
  };  
  std::vector<double > em_x = {
    0.0343909 ,
    0.11357423,
    0.0858676 ,
    0.19337772,
    0.1935728 ,
    0.0477744 ,
    0.05845198,
    0.19080509,
    0.16111261,
    0.07179262,
    0.10078013,
    0.04640909,
    0.10433399,
    0.15650861,
    0.17527857,
    0.04249097
  };
  std::vector<double > em = {
    0.0343909 , 0.08394249, 0.06791791, 0.00903334, 0.11357423, 0.10597251,
    0.05738069, 0.10071109, 0.0858676 , 0.17410445, 0.05390256, 0.09495758,
    0.19337772, 0.02045487, 0.04095526, 0.18431305,
    0.1935728 , 0.03930614, 0.0304133 , 0.15261676, 0.0477744,  0.06838737,
    0.12824902, 0.14125861, 0.05845198, 0.12731053, 0.0315968,  0.14927774,
    0.19080509, 0.19206871, 0.14361383, 0.04083437,
    0.16111261, 0.19944826, 0.16563484, 0.00797179, 0.07179262, 0.16993159,
    0.01834742, 0.08405   , 0.10078013, 0.0773945 , 0.09541813, 0.0042979,
    0.04640909, 0.07968697, 0.18046262, 0.11724063,
    0.10433399, 0.16910201, 0.10653732, 0.07434702, 0.15650861, 0.0350976,
    0.04088021, 0.15753491, 0.17527857, 0.03178642, 0.01599623, 0.08095053,
    0.04249097, 0.17082205, 0.18275348, 0.02921504
  }; 
  std::vector<double> table = {
    6.348551343037398542e-01, 4.209465843706336474e-04, 6.390862740714405368e-03, -1.544448595628262176e-04, -1.891095227974180087e-04, 2.695025951562175852e-05, -1.317549846042939343e+00, -5.624478206903206490e-02, 1.274284553146523905e-02, -6.836227424141475689e-04, -1.438066096020836407e-04, -1.854932873974712940e-06, -9.996964112615246423e-01, 6.928234423723647617e-02, -4.974719973810486084e-03, -2.019584729176823030e-04, 1.077254539742680247e-04, -8.024209768588029797e-06, 3.552689563657350780e-01, -3.578299775339799371e-02, -1.319946251007718743e-03, 1.016701374495701440e-03, -1.057336720791906388e-04,  5.182678943855506567e-06, 1.227750369557627286e+00, 4.100352079064395472e-02, 3.586869164810712295e-03, -4.304540913340443135e-04, -1.269943482892440004e-04, 1.459465404430219674e-05, -1.472642501673147031e+00, -1.611354921283318364e-01, 1.645427874390196360e-02, 2.107392978135091402e-04, -2.193541011180757461e-04, 1.915392497459551146e-05, -2.855174490181606739e-01, 9.774337856626263976e-02, -2.140891880666230714e-03, -7.148328890055103638e-04, 1.965696332267534503e-05,-4.593489654121371453e-06, -1.468441009949382314e+00, -6.360828127262234399e-02, 4.751283295356955282e-03, 8.711899561753186068e-05, -9.937008678852959884e-06,  4.273569346584811685e-07,
    6.348599826995243722e-01, 5.487167506364742930e-04, 6.386116198716365253e-03, -1.619832375568118791e-04, -1.877328309473502049e-04, 2.134130914519164856e-05, -1.318111020264137512e+00, -5.599013082054477008e-02, 1.272225054666903735e-02, -6.893710047488201898e-04, -1.434367581078517366e-04, 3.329508890614227371e-05 , -9.990040854920316793e-01, 6.918278968071900348e-02, -4.980714172967731085e-03, -1.976574487947816198e-04, 1.070037204086153902e-04, -7.859875077388093586e-06, 3.549109954092205532e-01, -3.580909209068139365e-02, -1.289508598157979719e-03, 1.012474257117017967e-03, -1.054418924402112718e-04, -1.245498322204730900e-05, 1.228160763020727630e+00, 4.107512853046493134e-02, 3.573879491390910459e-03, -4.355190226638688713e-04, -1.258433981470396103e-04, 1.610862268100766631e-05, -1.474252210958008291e+00, -1.608063442081248406e-01, 1.646046950167207382e-02, 2.019843636566674109e-04, -2.185756589083626730e-04, 1.978479879983412190e-05, -2.845402300363228942e-01, 9.770034635718018168e-02, -2.162325119197382531e-03, -7.140472215558940627e-04, 1.956302663031799223e-05, 1.932584474244053378e-05, -1.469076617546759334e+00, -6.351322951074317436e-02, 4.753890907276497185e-03, 8.672114560243554321e-05, -1.004574434175897967e-05, -4.345700882560937596e-06,
    6.348661083147921769e-01, 6.763897297752743953e-04, 6.381144275303845745e-03, -1.694690463885140694e-04, -1.868179426353836598e-04, 3.439291082765030046e-05, -1.318669650038090335e+00, -5.573589319299507294e-02, 1.270148368741391351e-02, -6.950749719342792137e-04, -1.422194703304518733e-04, 3.454751241752252323e-05 , -9.983127558632299836e-01, 6.908311652764687061e-02, -4.986579772806746212e-03, -1.933888092529071571e-04, 1.068327546750306073e-04, -2.976978385983384886e-05, 3.545527765488725169e-01, -3.583457894275744043e-02, -1.259197760082061621e-03, 1.008246479193084487e-03, -1.059401869200098984e-04,  1.721968053146218465e-06, 1.228571871257205572e+00, 4.114647496201748883e-02, 3.560738575723638825e-03, -4.405332425718102457e-04, -1.251648759618972115e-04, 3.659080417076460655e-05, -1.475858628153338792e+00, -1.604770750960976822e-01, 1.646639808472218428e-02, 1.932598402043995316e-04, -2.175904819601363058e-04, 1.230256868634094333e-05, -2.835634435191126679e-01, 9.765688571984927624e-02, -2.183734604613508240e-03, -7.132463811570244078e-04, 2.021887442373574272e-05, 1.321401495096886281e-05, -1.469711274366155784e+00, -6.341812571665436660e-02, 4.756486470714936521e-03, 8.631384191910702040e-05, -1.010516500002806932e-05, -1.110874413279218719e-05,
    6.348735101551836735e-01, 8.039610290153098582e-04, 6.375948457075718626e-03, -1.769074132993461279e-04, -1.855677150383903214e-04, 3.421271436711027645e-05, -1.319225739518145257e+00, -5.548207260888919634e-02, 1.268054645200545304e-02, -7.007297564176242621e-04, -1.408885818822980523e-04, 3.124701885930576017e-05 , -9.976224235482542557e-01, 6.898332734138989952e-02, -4.992317635216104131e-03, -1.891404922064061889e-04, 1.053957535708985289e-04, -1.089286646983666076e-06, 3.541943058468561834e-01, -3.585946084769019160e-02, -1.229013912637771933e-03, 1.004009466262262241e-03, -1.059129033455631863e-04, -4.941663399086282537e-06, 1.228983691638902087e+00, 4.121755707472917613e-02, 3.547447845420277635e-03, -4.455036207721562607e-04, -1.239172256532283074e-04, 3.437341080261359686e-05, -1.477461752073406132e+00, -1.601476900261984693e-01, 1.647206544856073471e-02, 1.845724864086241608e-04, -2.173853638475303177e-04, 3.620505631412716563e-05, -2.825870937484175061e-01, 9.761299713537928413e-02, -2.205119732548723246e-03, -7.124245958910824846e-04, 2.074820558303217398e-05, 1.209381466404663338e-05, -1.470344979888463577e+00, -6.332297013406351649e-02, 4.759069711794740656e-03, 8.589935708505183382e-05, -1.045842324058424788e-05, -6.134254562752213537e-06,
    6.348821871815598650e-01, 9.314261853726121809e-04, 6.370530236175125580e-03, -1.842978984547447257e-04, -1.840210089691990327e-04, 2.234897510077387526e-05, -1.319779292891724465e+00, -5.522867246076747227e-02, 1.265944033870337014e-02, -7.063360380236871801e-04, -1.393416734992873119e-04, 1.931167378610719847e-05 , -9.969330896946905218e-01, 6.888342466806646192e-02, -4.997928623431705138e-03, -1.849303524006284602e-04, 1.053651633995249134e-04, -2.870133904891753420e-05, 3.538355893399378616e-01, -3.588374034700148041e-02, -1.198957225773849763e-03, 9.997681359810027708e-04, -1.060678155548662341e-04, -4.107776618240329050e-06, 1.229396221507694564e+00, 4.128837188660083868e-02, 3.534008730169808672e-03, -4.504275777948374090e-04, -1.224778886969254976e-04, 2.455513266683544498e-05, -1.479061581584721008e+00, -1.598181942132129441e-01, 1.647747255391585064e-02, 1.759082956613747337e-04, -2.158335508261176197e-04, 6.406725844410341030e-06, -2.816111850012528728e-01, 9.756868109694678826e-02, -2.226479900633348240e-03, -7.115823288942964460e-04, 2.121038517729223415e-05, 1.358027318850170435e-05, -1.470977733597038872e+00, -6.322776301216057049e-02, 4.761640356162846754e-03, 8.547576468445008296e-05, -1.081874527005240631e-05, -8.845528475774308509e-07,
    6.348921383103013349e-01, 1.058780765759985421e-03, 6.364891110105044131e-03, -1.916363332792569681e-04, -1.827768871456785058e-04, 2.275707291847725182e-05, -1.320330314380025793e+00, -5.497569611120622923e-02, 1.263816684562326688e-02, -7.118908987616576157e-04, -1.380182662155302303e-04, 1.630252530406085050e-05 , -9.962447554247517711e-01, 6.878341103651769428e-02, -5.003413601927745452e-03, -1.807403991329658622e-04, 1.040363362483998831e-04, -4.422604643727719699e-06, 3.534766330394523148e-01, -3.590741998555346121e-02, -1.169027863565602274e-03, 9.955202772264954043e-04, -1.060447700647724903e-04, -1.021743279826507342e-05, 1.229809458175783687e+00, 4.135891644424664892e-02, 3.520422661584679015e-03, -4.553035794622276055e-04, -1.210679214963379874e-04, 1.595827246550979495e-05, -1.480658115605847147e+00, -1.594885928526604546e-01, 1.648262036665308974e-02, 1.672799673730459213e-04, -2.148155690753495697e-04,-1.867405535452657550e-06, -2.806357215496423363e-01, 9.752393810975558408e-02, -2.247814508535729908e-03, -7.107227883497464890e-04, 2.207595560206285042e-05,-1.137331983229785190e-06, -1.471609534977757372e+00, -6.313250460562676303e-02, 4.764198129054059844e-03, 8.503999275315992160e-05, -1.072692568096017848e-05, -1.373273803695183988e-05,
    6.349033624136081189e-01, 1.186020367092407990e-03, 6.359032581545111251e-03, -1.989262833250400370e-04, -1.812752661309344573e-04, 1.302837915648187095e-05, -1.320878808237722746e+00, -5.472314689282183064e-02, 1.261672747063919374e-02, -7.173917679890315846e-04, -1.373052781380030543e-04, 3.768455339511444900e-05 , -9.955574218354472649e-01, 6.868328895828368363e-02, -5.008773436308684712e-03, -1.765844799686671349e-04, 1.034810966435298563e-04, -1.111176255155353207e-05, 3.531174429312692320e-01, -3.593050231143132822e-02, -1.139225984250480384e-03, 9.912704081392112714e-04, -1.064918174657224404e-04,  2.680738443515978403e-06, 1.230223398925979650e+00, 4.142918782293085467e-02, 3.506691073047987512e-03, -4.601302388532728274e-04, -1.198865987378785417e-04, 1.656386182477533959e-05, -1.482251353107205460e+00, -1.591588911206925361e-01, 1.648750985769346228e-02, 1.586901819247656846e-04, -2.147074421644348298e-04, 2.641762503224190698e-05, -2.796607076604977760e-01, 9.747876869099537933e-02, -2.269122958003529523e-03, -7.098388532529275848e-04, 2.226701915637888804e-05, 1.106237844209756009e-05, -1.472240383519069384e+00, -6.303719517464229094e-02, 4.766742755353862819e-03, 8.459962202271287246e-05, -1.132218730142039535e-05,  8.958476322974335592e-07,
    6.349158583197994643e-01, 1.313140616388666637e-03, 6.352956158169477396e-03, -2.061601622854974502e-04, -1.806298821034440756e-04, 3.770936817966389514e-05, -1.321424778752664952e+00, -5.447102810827629538e-02, 1.259512371128685033e-02, -7.228490733933210606e-04, -1.356407402355522122e-04, 2.099832634320949299e-05 , -9.948710899987588396e-01, 6.858306092758209571e-02, -5.014008993202081696e-03, -1.724573933478598642e-04, 1.029144894329912032e-04, -1.738522780636760158e-05, 3.527580249757622521e-01, -3.595298987582695727e-02, -1.109551740263377793e-03, 9.870126155001155040e-04, -1.064931456292656029e-04, -2.059910396978558087e-06, 1.230638041011988815e+00, 4.149918312660194619e-02, 3.492815399561766294e-03, -4.649051157564728157e-04, -1.192927614880224277e-04, 4.072077917749542957e-05, -1.483841293110880866e+00, -1.588290941739924356e-01, 1.649214200293154520e-02, 1.501282794678792006e-04, -2.138853834118830831e-04, 2.633111784219914963e-05, -2.786861475954987011e-01, 9.743317336979973042e-02, -2.290404652904617314e-03, -7.089360554728917595e-04, 2.260180638238835256e-05, 1.741828165826791135e-05, -1.472870278712053782e+00, -6.294183498489253070e-02, 4.769273959660644442e-03, 8.414681093302789892e-05, -1.142905205912834352e-05, -4.014065121916994726e-06,
    6.349296248136164778e-01, 1.440137170869312810e-03, 6.346663352465874847e-03, -2.133510744796659759e-04, -1.788513201196447670e-04, 1.721163944875696416e-05, -1.321968230245579967e+00, -5.421934303028537461e-02, 1.257335706466754244e-02, -7.282542863230233527e-04, -1.343059033644905889e-04, 1.747822893445653714e-05 , -9.941857609618123259e-01, 6.848272942128874607e-02, -5.019121140152461337e-03, -1.683596869525186377e-04, 1.024142382012053007e-04, -2.632719129544749384e-05, 3.523983851077774343e-01, -3.597488523292310947e-02, -1.080005278271846739e-03, 9.827512175914082399e-04, -1.066680880078371994e-04,  3.403258606315080555e-07, 1.231053381658700818e+00, 4.156889948792314576e-02, 3.478797077596604108e-03, -4.696409807358484993e-04, -1.173636798436718986e-04, 1.149931408689037458e-05, -1.485427934690428442e+00, -1.584992071496764965e-01, 1.649651778315383566e-02, 1.415960091521040870e-04, -2.125888038426753843e-04, 7.384582528889821378e-06, -2.777120456109742896e-01, 9.738715268720327112e-02, -2.311658999267464203e-03, -7.080165982958596923e-04, 2.340034491729013294e-05, 5.174033942788913380e-06, -1.473499220050474623e+00, -6.284642430757329812e-02, 4.771791466347353149e-03, 8.368540130389298475e-05, -1.162498575113560591e-05, -5.381585801785509468e-06,
    6.349446606365225509e-01, 1.567005718051586727e-03, 6.340155681555815353e-03, -2.204854663573854625e-04, -1.779502948888764897e-04, 3.196283450610521294e-05, -1.322509167069771951e+00, -5.396809490162747525e-02, 1.255142902735281209e-02, -7.336077414823606981e-04, -1.332538502428148267e-04, 2.525523713666122703e-05 , -9.935014357470516311e-01, 6.838229689892011409e-02, -5.024110745516051704e-03, -1.642860423419652261e-04, 1.011792892256958577e-04, -5.902237032851650630e-06, 3.520385292366049468e-01, -3.599619093977864809e-02, -1.050586739210998023e-03, 9.784837539753422735e-04, -1.066187407206570670e-04, -6.052991441884039902e-06, 1.231469418062474341e+00, 4.163833406830096812e-02, 3.464637544942418459e-03, -4.743218246565151001e-04, -1.164951133813105271e-04, 2.473911917278243621e-05, -1.487011276970676033e+00, -1.581692351651968476e-01, 1.650063818395723983e-02, 1.331001312464952355e-04, -2.118074389246019866e-04, 9.192428068946771109e-06, -2.767384059577842614e-01, 9.734070719609828892e-02, -2.332885405321092481e-03, -7.070743922828596519e-04, 2.373777250910882265e-05, 1.127700884024945933e-05, -1.474127207030835107e+00, -6.275096341939470634e-02, 4.774294999622533293e-03, 8.321347296773265077e-05, -1.162225195759229858e-05, -1.468175407624093560e-05,
    6.349609644870094494e-01, 1.693741975839754832e-03, 6.333434667015966531e-03, -2.275719866012916918e-04, -1.766077012712487378e-04, 2.919052022666632077e-05, -1.323047593610823247e+00, -5.371728693515605280e-02, 1.252934109528984138e-02, -7.389107006611626187e-04, -1.322992615601379437e-04, 3.689337377145077536e-05 , -9.928181153524118230e-01, 6.828176580261838269e-02, -5.028978678356570489e-03, -1.602449667799085492e-04, 1.004819833385002965e-04, -7.012859043909368637e-06, 3.516784632459502014e-01, -3.601690955621394963e-02, -1.021296258318379370e-03, 9.742140050919662845e-04, -1.068837890347894775e-04,  3.261791903209577241e-07, 1.231886147391427544e+00, 4.170748405790913882e-02, 3.450338240560582581e-03, -4.789562532735843967e-04, -1.153902983973557932e-04, 2.856018069496295048e-05, -1.488591319127526624e+00, -1.578391833182464787e-01, 1.650450419566778376e-02, 1.246407552546250339e-04, -2.115332183818513349e-04, 3.149345367837511192e-05, -2.757652328811996956e-01, 9.729383746118988596e-02, -2.354083281534554220e-03, -7.061133365182417328e-04, 2.418809213597686327e-05, 1.280494807360028992e-05, -1.474754239152433311e+00, -6.265545260258377491e-02, 4.776784283590801948e-03, 8.273687806363864625e-05, -1.229952261449745124e-05,  3.204146150058887708e-06,
    6.349785350208994039e-01, 1.820341692612803541e-03, 6.326501834700739083e-03, -2.346100929840904846e-04, -1.748840426396014729e-04, 1.130785525935554482e-05, -1.323583514286295282e+00, -5.346692231381247606e-02, 1.250709476370755191e-02, -7.441705970339035966e-04, -1.303302437099287372e-04, 7.935577538626925858e-06 , -9.921358007514943234e-01, 6.818113855713830995e-02, -5.033725808341922223e-03, -1.562353718150353687e-04, 1.001568149392305130e-04, -2.302258383924021595e-05, 3.513181929939074299e-01, -3.603704364469759169e-02, -9.921339651685744804e-04, 9.699384566370250092e-04, -1.069081013817698415e-04, -2.744679484186812129e-06, 1.232303566785723392e+00, 4.177634667571154814e-02, 3.435900604437185177e-03, -4.835440426346156498e-04, -1.140781768005934266e-04, 2.411509316948267986e-05, -1.490168060387760951e+00, -1.575090566866652331e-01, 1.650811681325956015e-02, 1.162064642248029450e-04, -2.100324946396962247e-04, 4.868837971279583202e-06, -2.747925306207861240e-01, 9.724654405895133413e-02, -2.375252040655950400e-03, -7.051355614741510987e-04, 2.505903781065493165e-05,-2.569082101323676566e-06, -1.475380315917416585e+00, -6.255989214488603956e-02, 4.779259042312647421e-03, 8.224491253736542200e-05, -1.205054378062991984e-05, -1.594987943813344381e-05,
    6.349973708516511994e-01, 1.946800647308156995e-03, 6.319358714566076195e-03, -2.415904693897710526e-04, -1.741570105122868483e-04, 3.342152683043006766e-05, -1.324116933545430141e+00, -5.321700419064152865e-02, 1.248469152702344660e-02, -7.493727578058629766e-04, -1.295525827398787404e-04, 2.659942231629285135e-05 , -9.914544928937398804e-01, 6.808041756983601589e-02, -5.038353005641925050e-03, -1.522500103683389601e-04, 9.911425811568465554e-05, -1.035676665958809070e-05, 3.509577243129330393e-01, -3.605659577023319351e-02, -9.630999837076988784e-04, 9.656594578503095369e-04, -1.070158919994286978e-04, -2.281503112307771063e-06, 1.232721673357858538e+00, 4.184491916948063911e-02, 3.421326077437690516e-03, -4.880823132679394552e-04, -1.129872290747681817e-04, 2.854952342195995698e-05, -1.491741500028839651e+00, -1.571788603283475749e-01, 1.651147703627379656e-02, 1.078118218043548068e-04, -2.094656285123614196e-04, 1.573608604543182341e-05, -2.738203034102859035e-01, 9.719882757757769554e-02, -2.396391097750961291e-03, -7.041328812172977002e-04, 2.511128111671661627e-05, 1.472819566023977703e-05, -1.476005436830838402e+00, -6.246428233956573262e-02, 4.781718999863710830e-03, 8.175246233396933941e-05, -1.310850420537104008e-05,  1.717274673157189222e-05,
    6.350174705506670403e-01, 2.073114649501703322e-03, 6.312006840494438151e-03, -2.485262001215581039e-04, -1.724445833892894095e-04, 1.623821996891234705e-05, -1.324647855868849478e+00, -5.296753568880858964e-02, 1.246213287875118370e-02, -7.545274547770323926e-04, -1.284298383236558551e-04, 3.142127009671183137e-05 , -9.907741927046019859e-01, 6.797960523066012839e-02, -5.042861140826992473e-03, -1.482946605870891395e-04, 9.821987974303589589e-05, -3.593831829470692349e-06, 3.505970630098214080e-01, -3.607556850024738748e-02, -9.341944322877257512e-04, 9.613773761737330267e-04, -1.072343182304808093e-04,  2.791451096706449119e-06, 1.233140464192951757e+00, 4.191319881581374862e-02, 3.406616101162745613e-03, -4.925758895926437772e-04, -1.113902906060245713e-04, 1.275308331152581608e-05, -1.493311637378700762e+00, -1.568485992811522733e-01, 1.651458586873823589e-02, 9.944841367174414462e-05, -2.085492230796830474e-04, 1.276456024245067926e-05, -2.728485554775001987e-01, 9.715068861693920699e-02, -2.417499870240937074e-03, -7.031148500958378164e-04, 2.576543833825076558e-05, 7.841889896124507091e-06, -1.476629601400710978e+00, -6.236862348540499201e-02, 4.784163880393361643e-03, 8.124213252544174404e-05, -1.286332078849730127e-05, -1.821996546344873330e-06,
    6.350388326475970846e-01, 2.199279539485121671e-03, 6.304447750121061969e-03, -2.554047701160370044e-04, -1.716061813901302753e-04, 3.413524324276134592e-05, -1.325176285768258300e+00, -5.271851990161838253e-02, 1.243942031140890699e-02, -7.596346042592860793e-04, -1.269803855069738714e-04, 2.314478643438959578e-05 , -9.900949010857222898e-01, 6.787870391214460841e-02, -5.047251084767826433e-03, -1.443753107913585767e-04, 9.837034053479728221e-05, -3.865274593462701621e-05, 3.502362148656810170e-01, -3.609396440447816545e-02, -9.054174237006253068e-04, 9.570894530963515055e-04, -1.071221722792567601e-04, -5.180134097885568801e-06, 1.233559936349031494e+00, 4.198118292014653419e-02, 3.391772117805412056e-03, -4.970162819604460663e-04, -1.105584293158747960e-04, 2.757032189173095048e-05, -1.494878471815561216e+00, -1.565182785628131401e-01, 1.651744431908664865e-02, 9.112268062696188113e-05, -2.082277461664644284e-04, 3.370820636496137736e-05, -2.718772910441742408e-01, 9.710212778853387350e-02, -2.438577777940475859e-03, -7.020756635958485484e-04, 2.613933618298708639e-05, 1.211520684095310762e-05, -1.477252809138063672e+00, -6.227291588670166161e-02, 4.786593408182711167e-03, 8.072392747742672100e-05, -1.281499371544444526e-05, -1.293175202324119235e-05,
    6.350614556306495295e-01, 2.325291188338546311e-03, 6.296682984661446623e-03, -2.622362895631248896e-04, -1.701076322674243866e-04, 2.573454296903621253e-05, -1.325702227786145437e+00, -5.246995989253622206e-02, 1.241655531642829255e-02, -7.646904682589584622e-04, -1.257704658362481128e-04, 2.439373356208127567e-05 , -9.894166189151047952e-01, 6.777771596940393439e-02, -5.051523708536139086e-03, -1.404733355821404265e-04, 9.677082285072928253e-05, -3.720510878458014501e-06, 3.498751856359115786e-01, -3.611178605486395354e-02, -8.767690652124425499e-04, 9.527998576480508275e-04, -1.072771816869139909e-04, -2.281376475091892258e-06, 1.233980086857325631e+00, 4.204886881676297983e-02, 3.376795570009583514e-03, -5.014114486109571937e-04, -1.092957353261917852e-04, 2.516456964431257380e-05, -1.496442002767713664e+00, -1.561879031708521548e-01, 1.652005340007862977e-02, 8.282284133744905071e-05, -2.067123325224875000e-04, 7.057486539657783089e-06, -2.709065143258797548e-01, 9.705314571543909030e-02, -2.459624243094573216e-03, -7.010187162791577066e-04, 2.672975399789282626e-05, 7.629793933874534523e-06, -1.477875059556995385e+00, -6.217715985326619649e-02, 4.789007307701962507e-03, 8.019935829649041371e-05, -1.318861260046749971e-05, -7.150339348059032240e-06,
    6.350853379468965887e-01, 2.451145498001100487e-03, 6.288714088740080324e-03, -2.690159202421790068e-04, -1.686584359429067433e-04, 1.941481480743946700e-05, -1.326225686495484890e+00, -5.222185869521017709e-02, 1.239353938406437261e-02, -7.696964132049412353e-04, -1.246012242240120604e-04, 2.724071141974432252e-05 , -9.887393470472876089e-01, 6.767664374012982709e-02, -5.055679883306329545e-03, -1.366074591188833347e-04, 9.623033677044332457e-05, -1.113456896173822779e-05, 3.495139810501832756e-01, -3.612903602543367232e-02, -8.482494585971035728e-04, 9.485064841097947883e-04, -1.073561607316583907e-04, -2.239996380309942211e-06, 1.234400912722548371e+00, 4.211625386880359784e-02, 3.361687900729734210e-03, -5.057597926077623488e-04, -1.078411892315765344e-04, 1.508800592977199686e-05, -1.498002229713325750e+00, -1.558574780824932282e-01, 1.652241412871961052e-02, 7.456368677257522147e-05, -2.062001731191939454e-04, 2.069621557469772063e-05, -2.699362295319003291e-01, 9.700374303226286243e-02, -2.480638690415259105e-03, -6.999405672986690023e-04, 2.700789474676622474e-05, 1.556143061449123430e-05, -1.478496352174730522e+00, -6.208135570041733303e-02, 4.791405303667145565e-03, 7.966538051836852740e-05, -1.352687841609079228e-05, -2.789411930543395566e-06,
    6.351104780025849106e-01, 2.576838401336829787e-03, 6.280542610220480118e-03, -2.757414391158645754e-04, -1.675762649448408429e-04, 2.787462665161048641e-05, -1.326746666499438287e+00, -5.197421931349595348e-02, 1.237037400330611749e-02, -7.746541492504023475e-04, -1.232228491818352083e-04, 2.166599538617633252e-05 , -9.880630863135209108e-01, 6.757548954459043078e-02, -5.059720480258220535e-03, -1.327693574508429343e-04, 9.550030312894054513e-05, -1.096549240339310371e-05, 3.491526068124157778e-01, -3.614571689219699124e-02, -8.198587001702131727e-04, 9.442100079790295610e-04, -1.074330339280879455e-04, -2.103241190440061311e-06, 1.234822410923189784e+00, 4.218333546826981417e-02, 3.346450553092000530e-03, -5.100549148199152614e-04, -1.071543306169886722e-04, 3.572075491055831030e-05, -1.499559152180234056e+00, -1.555270082545787691e-01, 1.652452752618108200e-02, 6.633607063542407416e-05, -2.052990867644106118e-04, 1.891505702101457936e-05, -2.689664408651156746e-01, 9.695392038509384469e-02, -2.501620547117759490e-03, -6.988464710389351081e-04, 2.774961528830105395e-05, 4.843681010028069226e-06, -1.479116686511674494e+00, -6.198550374897651011e-02, 4.793787121096219732e-03, 7.912045955652986253e-05, -1.359696279035538403e-05, -9.132339849453571562e-06,
    6.351368741634448867e-01, 2.702365862198193025e-03, 6.272170100036473551e-03, -2.824171711189519380e-04, -1.661976899287730559e-04, 2.457347650017094835e-05, -1.327265172431057128e+00, -5.172704472148267896e-02, 1.234706066178771662e-02, -7.795630288411945592e-04, -1.217395799935142969e-04, 1.184741714306808905e-05 , -9.873878375219384829e-01, 6.747425568563097942e-02, -5.063646370480812467e-03, -1.289626891970745083e-04, 9.513074838211379970e-05, -2.521433322545949321e-05, 3.487910686007592576e-01, -3.616183123303555458e-02, -7.915968808226425679e-04, 9.399119246579864433e-04, -1.077055728285351480e-04,  6.031191175422362627e-06, 1.235244578411804905e+00, 4.225011103602600848e-02, 3.331084970256580589e-03, -5.143079026275864784e-04, -1.055716785023949844e-04, 2.051193936812822612e-05, -1.501112769745742259e+00, -1.551964986234863897e-01, 1.652639461772111712e-02, 5.814089462644928566e-05, -2.041249358339155683e-04, 6.311073191969795411e-06, -2.679971525218879380e-01, 9.690367843145115956e-02, -2.522569242956208650e-03, -6.977319783847560700e-04, 2.827424678587480721e-05, 2.739673941330651616e-06, -1.479736062091468574e+00, -6.188960432526132566e-02, 4.796152485364500034e-03, 7.856828747830194362e-05, -1.395147193446202365e-05, -4.087221013031299888e-06,
    6.351645247550001816e-01, 2.827723875485507743e-03, 6.263598112024793517e-03, -2.890409134869928735e-04, -1.648390823803598971e-04, 2.215887759642637032e-05, -1.327781208952985015e+00, -5.148033786352124164e-02, 1.232360084570068709e-02, -7.844171563535663055e-04, -1.210428935521009746e-04, 3.344327592646507844e-05 , -9.867136014577331249e-01, 6.737294444867666932e-02, -5.067458424877044516e-03, -1.251812701937470213e-04, 9.419473244264059593e-05, -1.679002076268449654e-05, 3.484293720675762929e-01, -3.617738162759492893e-02, -7.634640860539731316e-04, 9.356082122653546981e-04, -1.075431084112703954e-04, -3.044614041061100766e-06, 1.235667412115300623e+00, 4.231657802179918798e-02, 3.315592595281378029e-03, -5.185116053649769336e-04, -1.041674655671950871e-04, 1.242766263135090892e-05, -1.502663082036415076e+00, -1.548659541050484978e-01, 1.652801643260504508e-02, 4.998556989557471122e-05, -2.037688261998792680e-04, 2.657243869390409541e-05, -2.670283686919466826e-01, 9.685301784023310490e-02, -2.543484210258855835e-03, -6.965966582328896994e-04, 2.850491087748043708e-05, 1.232179636112698650e-05, -1.480354478441044286e+00, -6.179365776107784841e-02, 4.798501122259496952e-03, 7.800586916120723585e-05, -1.413851691566035862e-05, -5.727587674967719880e-06,
    6.351934280628791507e-01, 2.952908467203564646e-03, 6.254828202758994093e-03, -2.956111985445306826e-04, -1.636502852942454153e-04, 2.616921494951480123e-05, -1.328294780757159899e+00, -5.123410165425365537e-02, 1.229999603970671068e-02, -7.892274520450543677e-04, -1.195721301312790567e-04, 2.454197033093738297e-05 , -9.860403788833298488e-01, 6.727155810173718331e-02, -5.071157514069617352e-03, -1.214296539729165295e-04, 9.340570341953608358e-05, -1.444050153586573228e-05, 3.480675228394242149e-01, -3.619237065717702262e-02, -7.354603960058733389e-04, 9.313051737393654526e-04, -1.076930273455606579e-04, -7.696053039474192446e-07, 1.236090908935226107e+00, 4.238273390417521269e-02, 3.299974870987111650e-03, -5.226642260988254756e-04, -1.032474625011560351e-04, 2.396475265799989632e-05, -1.504210088727871764e+00, -1.545353795944727493e-01, 1.652939400402650763e-02, 4.186078937618800693e-05, -2.027012231708198600e-04, 1.761148452766873776e-05, -2.660600935582757565e-01, 9.680193929166537592e-02, -2.564364883962782712e-03, -6.954454205710857090e-04, 2.907017700829073683e-05, 9.120785771591908463e-06, -1.480971935090678926e+00, -6.169766439371183325e-02, 4.800832758035045861e-03, 7.743502257440657043e-05, -1.440171540732098418e-05, -4.489324897938611976e-06,
    6.355509554770921721e-01, 4.194364255265300989e-03, 6.156587518227093006e-03, -3.584539136959086518e-04, -1.505562336471176987e-04, 2.631189526673375584e-05, -1.333295991901433553e+00, -4.879824528740911438e-02, 1.205629889598585497e-02, -8.346035033896359156e-04, -1.072962342948566929e-04, 2.412331753624817981e-05 , -9.793640468817854661e-01, 6.625405011186732973e-02, -5.102126473064734317e-03, -8.551069374443776396e-05, 8.618032279329005427e-05, -1.422030758858379208e-05, 3.444418516979214084e-01, -3.631195473807800889e-02, -4.625381215785304145e-04, 8.881537622047225473e-04, -1.080757789189670570e-04,  5.820590714360855199e-08, 1.240361649325028681e+00, 4.302664794411619614e-02, 3.137220402938139478e-03, -5.615677039256951981e-04, -9.125763978623760322e-05, 2.367398552885374808e-05, -1.519498310980496925e+00, -1.512290469691385253e-01, 1.652996628226939199e-02,-3.745688059096337011e-05, -1.938906911473592626e-04, 1.811217640451412989e-05, -2.564062357251438717e-01, 9.626832379335603651e-02, -2.771163091665611831e-03, -6.829069315554202020e-04, 3.363238372709415958e-05, 8.623099725596635004e-06, -1.487093617252511990e+00, -6.073523464295225993e-02, 4.823154268625621383e-03, 7.122599345182346051e-05, -1.664931178025436733e-05, -4.312450972708557703e-06
  };
  std::vector<double > expected_xyz_scatter = {
    0.2713011,  -0.56606281, -0.42305039,  0.14965803,  0.52695372,
   -0.63845663, -0.11624505, -0.63103203,
    0.24412213, -0.50842224, -0.38203148,  0.1353771,   0.47343798,
   -0.57158622, -0.10647548, -0.56671287,
    0.13979394, -0.29123603, -0.21862063,  0.07744574,  0.27118433,
   -0.32761487, -0.06077287, -0.32463492,
    0.24704819, -0.51555848, -0.38509326,  0.1362072,   0.47992214,
   -0.58168358, -0.10566162, -0.57473633,
    0.31158834, -0.65068838, -0.48501479,  0.17143258,  0.60565326,
   -0.73506803, -0.13233106, -0.72541595,
    0.27121003, -0.5656669 , -0.42318034,  0.14974857,  0.52662422,
   -0.637633  , -0.11658482, -0.6305842 ,
    0.21202135, -0.44212972, -0.33094666,  0.11713047,  0.41162829,
   -0.4982129 , -0.0913087 , -0.49286515,
    0.30733526, -0.64054639, -0.48022212,  0.17004692,  0.59640929,
   -0.72111726, -0.13304347, -0.71402776,
    0.24135931, -0.50316388, -0.37699907,  0.13347531,  0.46846154,
   -0.56664651, -0.10429212, -0.56088123,
    0.33429479, -0.69669061, -0.52246841,  0.18502927,  0.64867706,
   -0.78417021, -0.14487244, -0.77659533,
    0.29200237, -0.60840668, -0.45656557,  0.16172246,  0.56650319,
   -0.68453038, -0.12681616, -0.67817995,
    0.13559139, -0.28210652, -0.21258614,  0.07539812,  0.26274303,
   -0.3166084 , -0.05968776, -0.31443544,
    0.30394432, -0.63428311, -0.47381417,  0.16759396,  0.59043739,
   -0.71559513, -0.13003802, -0.70708354,
    0.25830471, -0.53796239, -0.40421268,  0.14323456,  0.50094757,
   -0.6048126 , -0.11264426, -0.59964242,
    0.21979687, -0.45763438, -0.34413143,  0.12197404,  0.42616899,
   -0.51425659, -0.09609854, -0.51009828,
    0.2172166 , -0.45326447, -0.33866506,  0.11979851,  0.421936,
   -0.51130404, -0.09300045, -0.50528542
  }; 
  std::vector<double > expected_dy_dem_x = {
    -0.02067741,
    -0.03787612,
    -0.04180199,
    -0.04158797,
    -0.03938578,
    -0.04047081,
    -0.03819692,
    -0.05383372,
    -0.05179508,
    -0.03552708,
    -0.02812173,
    -0.04451295,
    -0.04586229,
    -0.03794369,
    -0.02917727,
    -0.04478649
  };
  std::vector<double > expected_dy_dem = {
    -3.32965609, -3.32965609, -3.32965609, -3.32965609, -3.33781886, -3.33781886,
    -3.33781886, -3.33781886, -3.33501296, -3.33501296, -3.33501296, -3.33501296,
    -3.34559974, -3.34559974, -3.34559974, -3.34559974,
    -3.34561821, -3.34561821, -3.34561821, -3.34561821, -3.33106684, -3.33106684,
    -3.33106684, -3.33106684, -3.33218328, -3.33218328, -3.33218328, -3.33218328,
    -3.34535585, -3.34535585, -3.34535585, -3.34535585,
    -3.34250754, -3.34250754, -3.34250754, -3.34250754, -3.33356685, -3.33356685,
    -3.33356685, -3.33356685, -3.33652989, -3.33652989, -3.33652989, -3.33652989,
    -3.3309235 , -3.3309235 , -3.3309235 , -3.3309235 ,
    -3.33688909, -3.33688909, -3.33688909, -3.33688909, -3.34206038, -3.34206038,
    -3.34206038, -3.34206038, -3.34387412, -3.34387412, -3.34387412, -3.34387412,
    -3.33051143, -3.33051143, -3.33051143, -3.33051143
  };
  const int nloc = 4;
  const int nnei = 4;
  const int last_layer_size = 8;

  void SetUp() override {
  }
  void TearDown() override {
  }
};

TEST_F(TestTabulate, tabulate_fusion_cpu)
{
  std::vector<double> xyz_scatter(nloc * nnei * last_layer_size);
  deepmd::tabulate_fusion_cpu<double>(&xyz_scatter[0], &table[0], &info[0], &em_x[0], &em[0], nloc, nnei, last_layer_size);
  EXPECT_EQ(xyz_scatter.size(), nloc * nnei * last_layer_size);
  EXPECT_EQ(xyz_scatter.size(), expected_xyz_scatter.size());
  for (int jj = 0; jj < xyz_scatter.size(); ++jj){
    EXPECT_LT(fabs(xyz_scatter[jj] - expected_xyz_scatter[jj]) , 1e-5);
  }
}

TEST_F(TestTabulate, tabulate_fusion_grad_cpu)
{
  std::vector<double> dy_dem_x(em_x.size());
  std::vector<double> dy_dem(em.size());
  std::vector<double> dy(nloc * nnei * last_layer_size, 1.0);
  deepmd::tabulate_fusion_grad_cpu<double>(&dy_dem_x[0], &dy_dem[0], &table[0], &info[0], &em_x[0], &em[0], &dy[0], nloc, nnei, last_layer_size);
  EXPECT_EQ(dy_dem_x.size(), nloc * nnei);
  EXPECT_EQ(dy_dem.size(), nloc * nnei * 4);
  EXPECT_EQ(dy_dem_x.size(), expected_dy_dem_x.size());
  EXPECT_EQ(dy_dem.size(), expected_dy_dem.size());
  for (int jj = 0; jj < dy_dem_x.size(); ++jj){
    EXPECT_LT(fabs(dy_dem_x[jj] - expected_dy_dem_x[jj]) , 1e-5);
  }
  for (int jj = 0; jj < dy_dem.size(); ++jj){
    EXPECT_LT(fabs(dy_dem[jj] - expected_dy_dem[jj]) , 1e-5);
  }
}

#if GOOGLE_CUDA
TEST_F(TestTabulate, tabulate_fusion_gpu_cuda)
{
  std::vector<double> xyz_scatter(nloc * nnei * last_layer_size, 0.0);

  double * xyz_scatter_dev = NULL, * table_dev = NULL, * em_x_dev = NULL, * em_dev = NULL;
  deepmd::malloc_device_memory_sync(xyz_scatter_dev, xyz_scatter);
  deepmd::malloc_device_memory_sync(table_dev, table);
  deepmd::malloc_device_memory_sync(em_x_dev, em_x);
  deepmd::malloc_device_memory_sync(em_dev, em);
  deepmd::tabulate_fusion_gpu_cuda<double>(xyz_scatter_dev, table_dev, &info[0], em_x_dev, em_dev, nloc, nnei, last_layer_size);
  deepmd::memcpy_device_to_host(xyz_scatter_dev, xyz_scatter);
  deepmd::delete_device_memory(xyz_scatter_dev);
  deepmd::delete_device_memory(table_dev);
  deepmd::delete_device_memory(em_x_dev);
  deepmd::delete_device_memory(em_dev);

  EXPECT_EQ(xyz_scatter.size(), nloc * nnei * last_layer_size);
  EXPECT_EQ(xyz_scatter.size(), expected_xyz_scatter.size());
  for (int jj = 0; jj < xyz_scatter.size(); ++jj){
    EXPECT_LT(fabs(xyz_scatter[jj] - expected_xyz_scatter[jj]) , 1e-5);
  }
}

TEST_F(TestTabulate, tabulate_fusion_grad_gpu_cuda)
{
  std::vector<double> dy_dem_x(em_x.size(), 0.0);
  std::vector<double> dy_dem(em.size(), 0.0);
  std::vector<double> dy(nloc * nnei * last_layer_size, 1.0);

  double * dy_dem_x_dev = NULL, * dy_dem_dev = NULL, * table_dev = NULL, * em_x_dev = NULL, * em_dev = NULL, * dy_dev = NULL;
  deepmd::malloc_device_memory_sync(dy_dem_x_dev, dy_dem_x);
  deepmd::malloc_device_memory_sync(dy_dem_dev, dy_dem);
  deepmd::malloc_device_memory_sync(table_dev, table);
  deepmd::malloc_device_memory_sync(em_x_dev, em_x);
  deepmd::malloc_device_memory_sync(em_dev, em);
  deepmd::malloc_device_memory_sync(dy_dev, dy);
  deepmd::tabulate_fusion_grad_gpu_cuda<double>(dy_dem_x_dev, dy_dem_dev, table_dev, &info[0], em_x_dev, em_dev, dy_dev, nloc, nnei, last_layer_size);
  deepmd::memcpy_device_to_host(dy_dem_x_dev, dy_dem_x);
  deepmd::memcpy_device_to_host(dy_dem_dev, dy_dem);
  deepmd::delete_device_memory(dy_dem_x_dev);
  deepmd::delete_device_memory(dy_dem_dev);
  deepmd::delete_device_memory(table_dev);
  deepmd::delete_device_memory(em_x_dev);
  deepmd::delete_device_memory(em_dev);
  deepmd::delete_device_memory(dy_dev);

  EXPECT_EQ(dy_dem_x.size(), nloc * nnei);
  EXPECT_EQ(dy_dem.size(), nloc * nnei * 4);
  EXPECT_EQ(dy_dem_x.size(), expected_dy_dem_x.size());
  EXPECT_EQ(dy_dem.size(), expected_dy_dem.size());
  for (int jj = 0; jj < dy_dem_x.size(); ++jj){
    EXPECT_LT(fabs(dy_dem_x[jj] - expected_dy_dem_x[jj]) , 1e-5);
  }
  for (int jj = 0; jj < dy_dem.size(); ++jj){
    EXPECT_LT(fabs(dy_dem[jj] - expected_dy_dem[jj]) , 1e-5);
  }
}
#endif // GOOGLE_CUDA

#if TENSORFLOW_USE_ROCM
TEST_F(TestTabulate, tabulate_fusion_gpu_rocm)
{
  std::vector<double> xyz_scatter(nloc * nnei * last_layer_size, 0.0);

  double * xyz_scatter_dev = NULL, * table_dev = NULL, * em_x_dev = NULL, * em_dev = NULL;
  deepmd::malloc_device_memory_sync(xyz_scatter_dev, xyz_scatter);
  deepmd::malloc_device_memory_sync(table_dev, table);
  deepmd::malloc_device_memory_sync(em_x_dev, em_x);
  deepmd::malloc_device_memory_sync(em_dev, em);
  deepmd::tabulate_fusion_gpu_rocm<double>(xyz_scatter_dev, table_dev, &info[0], em_x_dev, em_dev, nloc, nnei, last_layer_size);
  deepmd::memcpy_device_to_host(xyz_scatter_dev, xyz_scatter);
  deepmd::delete_device_memory(xyz_scatter_dev);
  deepmd::delete_device_memory(table_dev);
  deepmd::delete_device_memory(em_x_dev);
  deepmd::delete_device_memory(em_dev);

  EXPECT_EQ(xyz_scatter.size(), nloc * nnei * last_layer_size);
  EXPECT_EQ(xyz_scatter.size(), expected_xyz_scatter.size());
  for (int jj = 0; jj < xyz_scatter.size(); ++jj){
    EXPECT_LT(fabs(xyz_scatter[jj] - expected_xyz_scatter[jj]) , 1e-5);
  }
}

TEST_F(TestTabulate, tabulate_fusion_grad_gpu_rocm)
{
  std::vector<double> dy_dem_x(em_x.size(), 0.0);
  std::vector<double> dy_dem(em.size(), 0.0);
  std::vector<double> dy(nloc * nnei * last_layer_size, 1.0);

  double * dy_dem_x_dev = NULL, * dy_dem_dev = NULL, * table_dev = NULL, * em_x_dev = NULL, * em_dev = NULL, * dy_dev = NULL;
  deepmd::malloc_device_memory_sync(dy_dem_x_dev, dy_dem_x);
  deepmd::malloc_device_memory_sync(dy_dem_dev, dy_dem);
  deepmd::malloc_device_memory_sync(table_dev, table);
  deepmd::malloc_device_memory_sync(em_x_dev, em_x);
  deepmd::malloc_device_memory_sync(em_dev, em);
  deepmd::malloc_device_memory_sync(dy_dev, dy);
  deepmd::tabulate_fusion_grad_gpu_rocm<double>(dy_dem_x_dev, dy_dem_dev, table_dev, &info[0], em_x_dev, em_dev, dy_dev, nloc, nnei, last_layer_size);
  deepmd::memcpy_device_to_host(dy_dem_x_dev, dy_dem_x);
  deepmd::memcpy_device_to_host(dy_dem_dev, dy_dem);
  deepmd::delete_device_memory(dy_dem_x_dev);
  deepmd::delete_device_memory(dy_dem_dev);
  deepmd::delete_device_memory(table_dev);
  deepmd::delete_device_memory(em_x_dev);
  deepmd::delete_device_memory(em_dev);
  deepmd::delete_device_memory(dy_dev);

  EXPECT_EQ(dy_dem_x.size(), nloc * nnei);
  EXPECT_EQ(dy_dem.size(), nloc * nnei * 4);
  EXPECT_EQ(dy_dem_x.size(), expected_dy_dem_x.size());
  EXPECT_EQ(dy_dem.size(), expected_dy_dem.size());
  for (int jj = 0; jj < dy_dem_x.size(); ++jj){
    EXPECT_LT(fabs(dy_dem_x[jj] - expected_dy_dem_x[jj]) , 1e-5);
  }
  for (int jj = 0; jj < dy_dem.size(); ++jj){
    EXPECT_LT(fabs(dy_dem[jj] - expected_dy_dem[jj]) , 1e-5);
  }
}
#endif // TENSORFLOW_USE_ROCM
