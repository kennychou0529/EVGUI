#include "twin.h"

#ifndef _TWIN_SVG_H_
#define _TWIN_SVG_H_

void twin_svg_start (twin_screen_t *screen, const char *name, int x, int y, int w, int h);

static char test[] = "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>"
"<!-- Created with Inkscape (http://www.inkscape.org/) -->"
"<svg"
"   xmlns:dc=\"http://purl.org/dc/elements/1.1/\""
"   xmlns:cc=\"http://web.resource.org/cc/\""
"   xmlns:rdf=\"http://www.w3.org/1999/02/22-rdf-syntax-ns#\""
"   xmlns:svg=\"http://www.w3.org/2000/svg\""
"   xmlns=\"http://www.w3.org/2000/svg\""
"   xmlns:sodipodi=\"http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd\""
"   xmlns:inkscape=\"http://www.inkscape.org/namespaces/inkscape\""
"   id=\"svg2\""
"   sodipodi:version=\"0.32\""
"   inkscape:version=\"0.45.1\""
"   width=\"1000\""
"   height=\"1000\""
"   version=\"1.0\""
"   sodipodi:docbase=\"/users/cortex/rougier/Desktop\""
"   sodipodi:docname=\"baby-gnu.svg\""
"   inkscape:output_extension=\"org.inkscape.output.svg.inkscape\""
"   inkscape:export-filename=\"/users/cortex/rougier/Desktop/baby-gnu.png\""
"   inkscape:export-xdpi=\"27\""
"   inkscape:export-ydpi=\"27\">"
"  <metadata"
"     id=\"metadata7\">"
"    <rdf:RDF>"
"      <cc:Work"
"         rdf:about=\"\">"
"        <dc:format>image/svg+xml</dc:format>"
"        <dc:type"
"           rdf:resource=\"http://purl.org/dc/dcmitype/StillImage\" />"
"        <dc:title>Baby GNU</dc:title>"
"        <dc:date>11/12/2007</dc:date>"
"        <dc:creator>"
"          <cc:Agent>"
"            <dc:title>Nicolas Rougier</dc:title>"
"          </cc:Agent>"
"        </dc:creator>"
"        <cc:license"
"           rdf:resource=\"http://artlibre.org/licence.php/lalgb.html\" />"
"        <dc:description>Baby GNU vector</dc:description>"
"      </cc:Work>"
"      <cc:License"
"         rdf:about=\"http://artlibre.org/licence.php/lalgb.html\">"
"        <cc:permits"
"           rdf:resource=\"http://web.resource.org/cc/Reproduction\" />"
"        <cc:permits"
"           rdf:resource=\"http://web.resource.org/cc/Distribution\" />"
"        <cc:permits"
"           rdf:resource=\"http://web.resource.org/cc/DerivativeWorks\" />"
"        <cc:requires"
"           rdf:resource=\"http://web.resource.org/cc/ShareAlike\" />"
"        <cc:requires"
"           rdf:resource=\"http://web.resource.org/cc/Notice\" />"
"        <cc:requires"
"           rdf:resource=\"http://web.resource.org/cc/Attribution\" />"
"      </cc:License>"
"    </rdf:RDF>"
"  </metadata>"
"  <defs"
"     id=\"defs5\" />"
"  <sodipodi:namedview"
"     inkscape:window-height=\"946\""
"     inkscape:window-width=\"1214\""
"     inkscape:pageshadow=\"2\""
"     inkscape:pageopacity=\"0.0\""
"     guidetolerance=\"10.0\""
"     gridtolerance=\"10.0\""
"     objecttolerance=\"10.0\""
"     borderopacity=\"1.0\""
"     bordercolor=\"#666666\""
"     pagecolor=\"#ffffff\""
"     id=\"base\""
"     inkscape:zoom=\"0.763\""
"     inkscape:cx=\"500\""
"     inkscape:cy=\"500\""
"     inkscape:window-x=\"185\""
"     inkscape:window-y=\"29\""
"     inkscape:current-layer=\"svg2\""
"     inkscape:showpageshadow=\"false\" />"
"  <path"
"     style=\"fill:#bd7d3f;stroke:#000000;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 215.5,616.51973 C 205.52292,614.66717 197.35326,611.31394 192.80443,607.20435 C 185.17285,600.30967 184.85018,598.03156 188.01455,573.38665 C 193.82996,528.09484 203.70724,503.74149 224.12741,484.34705 C 238.57717,470.62312 264.92341,458.63541 309.60274,445.45523 C 325.95777,440.63058 328.16858,440.29327 329.88445,442.36077 C 333.31069,446.48914 335.46348,501.14484 333.98139,546.3752 C 332.8381,581.26596 332.4581,584.35075 329.2462,584.8152 C 328.04733,584.98856 321.089,583.09559 313.78322,580.6086 C 293.24904,573.61848 282.41482,572.3854 278.88641,576.63686 C 278.03598,577.66157 277.38264,582.52441 277.03593,590.41004 C 276.36115,605.75727 274.88567,608.59746 265.24447,613.1077 C 255.31042,617.75494 231.09687,619.41578 215.5,616.51973 z M 745.81315,616.48076 C 739.15591,615.15535 731.96799,612.31611 728.87658,609.79078 C 727.9837,609.0614 726.29788,606.89759 725.13032,604.98232 C 723.32655,602.02341 723.0047,599.9218 722.989,591 C 722.97778,584.62977 722.47968,579.53001 721.72257,578.03379 C 718.80196,572.26203 708.40858,573.01101 686.21678,580.59243 C 678.911,583.08831 671.95267,584.98856 670.7538,584.8152 C 667.55162,584.35215 667.17105,581.29513 666.01033,546.71271 C 664.50465,501.85224 666.68231,446.49757 670.11555,442.36077 C 670.73669,441.61235 672.15606,441 673.26971,441 C 675.71208,441 701.07669,448.44113 717,453.829 C 782.64525,476.041 802.73285,501.32513 811.98545,573.38665 C 815.14982,598.03156 814.82715,600.30967 807.19557,607.20435 C 799.51455,614.14369 784.20648,617.96816 764.5,617.87115 C 757.9,617.83865 749.49092,617.21298 745.81315,616.48076 z \""
"     id=\"arms\""
"     sodipodi:nodetypes=\"csssssssssssccsssssssssssssc\" />"
"  <path"
"     style=\"fill:#bd7d3f;stroke:#000000;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 471.5,723.87698 C 440.68841,721.26386 404.04409,712.01869 377,700.03512 C 337.28889,682.43864 303.82037,655.11669 283.69995,623.86984 C 257.61901,583.36636 251.68895,538.68936 266.67802,495.62688 C 281.61665,452.70929 318.398,414.55899 368.5,390.01522 C 409.44774,369.9559 449.65194,361.06688 499.64319,361.01988 C 530.45516,360.99091 552.84441,363.73468 581,370.99004 C 614.68817,379.67108 653.1103,398.71476 676.5,418.32399 C 711.52835,447.69072 731.12695,478.4509 739.05206,516.5 C 742.06306,530.9561 742.04728,553.5094 739.01569,568.44931 C 734.95388,588.46631 727.69792,606.16905 716.30005,623.86984 C 676.06455,686.35525 591.28923,725.57107 498,724.85222 C 488.925,724.7823 477,724.34344 471.5,723.87698 z \""
"     id=\"body\""
"     sodipodi:nodetypes=\"csssssssssssc\""
"     inkscape:label=\"Body\" />"
"  <path"
"     style=\"fill:#de9349;stroke:#000000;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 525,720.5082 C 577.19878,715.82055 623.56631,700.23031 660,675.11693 C 673.18461,666.02891 684.41964,656.61257 687.97418,651.67112 C 699.22648,636.02842 706.17884,623.6064 710.16358,612.02454 C 711.80241,607.26122 714.3821,587.44099 714.13649,581.5 C 713.86329,574.89167 711.85775,560.05385 710.02809,551.10437 C 707.59761,539.21608 705.5019,533.84621 695.93757,515 C 681.89709,487.33369 665.16095,464.00319 648.84326,449.34965 C 640.15786,441.55002 621.55409,426.85794 618,424.99158 C 616.625,424.26953 611.50167,421.05326 606.61482,417.8443 C 599.9177,413.44664 593.14554,410.2856 579.11482,405.00813 C 553.40175,395.33651 534.35692,391.04401 510.5,389.54308 C 500.6,388.92023 491.45821,388.76824 490.1849,389.20532 C 488.9116,389.64239 485.0866,389.99457 481.6849,389.98794 C 462.71351,389.95096 410.83886,406.37436 393.12186,418.0268 C 388.12677,421.31206 383.79981,424 383.50639,424 C 382.37193,424 357.67084,443.44629 350.77005,449.77217 C 339.96326,459.67863 328.38039,473.83834 318.31051,489.45301 C 312.71905,498.1233 298.81188,524.66456 294.65197,534.60437 C 291.5665,541.97687 288.23815,557.77703 286.89078,571.44782 C 285.67273,583.80649 285.6716,581.36116 286.90168,595.0047 C 288.14731,608.82063 292.47599,621.98636 299.39392,633 C 300.94853,635.475 302.91514,638.625 303.76417,640 C 312.26949,653.77437 323.45086,664.30616 343.5,677.42744 C 363.25525,690.35637 376.89616,696.98881 399.5,704.65559 C 441.78414,718.99753 483.3527,724.24829 525,720.5082 z \""
"     id=\"belly\""
"     sodipodi:nodetypes=\"cssssssssssssssssssssssssc\""
"     inkscape:label=\"Belly\" />"
"  <path"
"     style=\"fill:#4a3118;stroke:none;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 217.81582,654.92012 C 200.12665,653.0466 180.96235,646.29589 172.67416,639.01877 C 166.24159,633.3709 164.6337,629.0021 165.31672,619.0279 C 166.15349,606.80838 169.21442,596.15824 175.66662,583.01658 C 180.6402,572.88655 182.31796,570.52732 189.90234,562.99863 C 203.41644,549.58375 213.8518,545.01878 231.64423,544.73855 C 241.08885,544.5898 243.43801,544.9061 249.71602,547.17176 C 276.20803,556.73245 295,588.31282 295,623.27261 C 295,631.02842 294.65608,632.90952 292.59773,636.41214 C 284.18672,650.72488 252.42499,658.58567 217.81582,654.92012 z M 749.5,654.96662 C 728.99042,652.73454 712.78882,645.6149 707.43677,636.48233 C 705.34012,632.90466 705,631.06085 705,623.27261 C 705,588.08748 724.19356,556.20544 751,546.86292 C 756.27143,545.02573 759.43947,544.62279 767.76117,544.73107 C 785.86671,544.96664 796.59614,549.59623 810.09766,562.99863 C 817.68204,570.52732 819.3598,572.88655 824.33338,583.01658 C 830.78558,596.15824 833.84651,606.80838 834.68328,619.0279 C 835.18866,626.40801 834.98802,628.10315 833.19255,631.62258 C 824.67162,648.32498 786.445,658.98739 749.5,654.96662 z \""
"     id=\"hands\""
"     sodipodi:nodetypes=\"cssssssssccssssssssc\""
"     inkscape:label=\"Hands\" />"
"  <path"
"     style=\"fill:#bd7d3f;stroke:#000000;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 197.88148,476.56162 C 193.2031,473.90359 191.50077,468.73409 191.60442,457.5 C 191.81681,434.48118 202.88045,404.80253 220.82537,379.11363 C 230.7057,364.96952 254.11002,334.20618 259.83288,327.84098 C 265.70167,321.31348 275.62685,314.33125 282.44163,311.93605 C 289.05826,309.61049 298.95422,309.40626 303.34887,311.50457 C 308.95358,314.18064 311.45116,319.19804 311.8487,328.57993 C 312.30577,339.36682 310.80966,344.37004 300.80852,365.5 C 279.54467,410.42534 273.25044,422.34778 265.11364,433.11278 C 243.12535,462.20334 210.13492,483.52343 197.88148,476.56162 z M 788.89418,477.03909 C 770.38928,471.43608 742.7143,446.7127 727.12119,421.85435 C 720.34385,411.04998 691.97037,351.35398 689.47759,342.65458 C 686.97106,333.9072 687.69647,321.53054 691,316.67992 C 694.28456,311.85715 698.43432,310 705.92611,310 C 713.85276,310 721.44337,312.71365 729.40159,318.39252 C 737.4136,324.10977 741.42264,328.59578 758.04893,350.44805 C 776.66368,374.9138 786.06218,388.57625 791.43872,398.98621 C 809.00876,433.00505 814.04265,470.27251 801.91481,476.54405 C 798.89927,478.10345 793.1334,478.32267 788.89418,477.03909 z \""
"     id=\"ears\""
"     sodipodi:nodetypes=\"cssssssssccssssssssc\""
"     inkscape:label=\"Ears\" />"
"  <path"
"     style=\"fill:#4a3118;stroke:none;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 397.95551,758.6332 C 397.65604,758.32767 381.00604,757.87479 360.95551,757.6268 C 314.39889,757.05097 287.62909,754.49333 280.07484,749.89932 C 277.30561,748.21525 277,747.53588 277,743.06392 C 277,726.62758 287.49263,706.72442 303.3325,693.11462 C 329.81595,670.35971 371.94454,658.24892 412.1529,661.83181 C 446.63914,664.90481 473.70067,675.74598 495.34061,695.1578 L 500.18122,699.5 L 504.84061,695.12092 C 551.87357,650.91744 646.40533,649.92874 696.6675,693.11462 C 704.97496,700.25249 711.91791,709.15836 716.45775,718.5 C 721.14094,728.13661 723,735.11675 723,743.06392 C 723,747.53588 722.69439,748.21525 719.92516,749.89932 C 710.42952,755.67397 669.25521,758.2891 589,758.21486 C 562.3689,758.19023 532.83773,756.73788 512.75,754.46488 C 501.61583,753.20501 498.38417,753.20683 487.25,754.47923 C 467.36182,756.75205 399.21878,759.92205 397.95551,758.6332 z \""
"     id=\"feet\""
"     sodipodi:nodetypes=\"cssssscccsssssssc\""
"     inkscape:label=\"Feet\" />"
"  <path"
"     style=\"fill:#bd7d3f;stroke:#000000;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 481.11336,553.93374 C 466.03219,551.25547 440.69993,540.02246 423,528.1647 C 417.225,524.29584 403.95,514.08147 393.5,505.46609 C 383.05,496.85072 369.37888,486.37478 363.11973,482.18622 C 354.86843,476.66453 349.3695,472.00654 343.11973,465.24475 C 329.74736,450.77683 320.12771,445.53624 305,444.47791 C 297.2777,443.93766 296.75385,443.4463 290.38546,430.76954 C 277.42964,404.98004 268.86103,375.70504 265.91181,347.15441 C 264.1832,330.42015 265.23526,296.56858 267.93672,282 C 276.02774,238.36623 293.97496,200.17043 321.30865,168.41232 C 347.06029,138.49233 380.21703,114.76671 416,100.65504 C 429.93446,95.159736 439.53292,92.585693 455.9808,89.933301 C 491.35687,84.228537 531.78575,85.774972 564.29998,94.076591 C 583.80948,99.057809 607.85207,110.36979 629,124.5178 C 688.78228,164.51226 726.3654,226.12644 734.03252,296.70925 C 735.57531,310.91203 734.77944,345.83919 732.60174,359.5 C 728.8336,383.13766 720.43612,409.15753 709.52631,431 C 703.27763,443.51044 702.79472,444 696.70283,444 C 689.25923,444 678.35729,447.63499 671,452.56999 C 667.425,454.96796 660.68086,461.07531 656.01302,466.14187 C 650.33686,472.30288 644.7066,477.17287 639.01302,480.8463 C 628.74241,487.47278 622.14941,492.53405 602.5,508.87638 C 575.13574,531.63512 550.9575,545.25014 525.5,552.23589 C 517.35586,554.47072 490.02407,555.51619 481.11336,553.93374 z \""
"     id=\"head\""
"     sodipodi:nodetypes=\"cssssssssssssssssssssssc\""
"     inkscape:label=\"Head\" />"
"  <path"
"     style=\"fill:#ffffff;fill-opacity:1;stroke:#000000;stroke-opacity:1\""
"     d=\"M 363.63146,389.42498 C 360.22464,388.33711 357.28548,386.3294 353.84199,382.73792 C 347.48126,376.1038 343.87471,369.69816 339.9021,357.97913 C 337.0638,349.60627 336.63318,346.88117 336.21234,334.62899 C 335.66443,318.67716 336.61516,312.90635 341.50555,302.5 C 350.77057,282.78478 375.0547,264.1558 399,258.39455 C 406.47293,256.59655 420.30455,256.66784 427.4977,258.54142 C 448.318,263.96442 466.68496,281.91416 479.52139,309.38336 C 485.25638,321.6559 488,330.32138 488,336.16228 C 488,340.32473 487.49023,341.55849 484.32091,345.06655 C 482.29742,347.30632 475.78544,352.02156 469.84986,355.54485 C 429.56363,379.45834 380.96457,394.95982 363.63146,389.42498 z M 617.68839,389.90632 C 599.99759,387.31952 575.12727,378.62891 550.5,366.42821 C 531.49437,357.01256 519.68104,349.67863 515.081,344.43948 C 511.26601,340.09444 510.98085,334.4348 514.09842,324.9382 C 523.20901,297.18598 541.29185,273.0809 560.25056,263.41573 C 572.90491,256.96453 586.09512,255.36466 600.91901,258.48296 C 624.02368,263.34318 649.97166,283.3655 658.95247,303.2635 C 663.39766,313.11232 664.32126,319.1092 663.78319,334.62899 C 663.37903,346.28634 662.86857,349.77181 660.58461,356.46926 C 654.17498,375.2647 645.73508,386.51635 635.84254,389.45412 C 630.20152,391.12932 626.65624,391.21763 617.68839,389.90632 z \""
"     id=\"path3599\""
"     sodipodi:nodetypes=\"cssssssssssccsssssssssc\" />"
"  <path"
"     style=\"fill:#000000;fill-opacity:1;stroke:#000000;stroke-opacity:1\""
"     d=\"M 425.19605,355.14204 C 415.12593,351.5893 409.63957,343.78039 409.63957,333 C 409.63957,319.48672 419.06873,310 432.5,310 C 448.8422,310 459.66329,325.04098 454.85857,341.07772 C 451.36038,352.75363 437.30964,359.41572 425.19605,355.14204 z M 560.71348,355.57782 C 544.13533,351.11963 538.37117,329.7919 550.32479,317.13906 C 561.0252,305.81274 581.05542,308.3875 587.99016,321.98072 C 594.73271,335.19721 587.95765,351.26238 573.87809,355.44356 C 567.73668,357.26737 567.02324,357.27464 560.71348,355.57782 z \""
"     id=\"path3644\""
"     sodipodi:nodetypes=\"csssccsssc\" />"
"  <path"
"     style=\"fill:#4a3118;stroke:none;stroke-opacity:1;fill-opacity:1\""
"     d=\"M 252.5,338.91217 C 215.41041,332.41703 191.81862,321.39135 168.17757,299.50391 C 146.74036,279.65683 124.37715,240.08476 118.16171,211 C 115.69592,199.46148 114.00802,182.08112 114.00342,168.18189 C 113.99468,141.80486 123.877,102.03405 132.74687,92.75 C 134.82759,90.57212 136.28136,90 139.73471,90 C 143.61039,90 144.62949,90.534248 148.90001,94.804767 C 157.25808,103.16284 169.7809,126.41777 177.44993,147.82209 C 182.68139,162.42313 195.02023,189.68498 199.34889,196.20638 C 204.12971,203.40899 212.88391,211.61876 218.37193,214.04638 C 222.38458,215.82136 223.13708,215.86308 227.49311,214.55211 C 239.37364,210.9766 251.53329,199.68485 276.40516,169.13118 C 316.96241,119.30895 336.5319,101.71847 369.5,85.450799 C 390.70814,74.985925 409.17867,69.10702 432.5,65.398809 C 447.66238,62.987912 475.71216,63.014944 490.12761,65.454346 C 500.3364,67.181892 501.12457,67.182518 510.12761,65.470245 C 523.99775,62.832305 553.29705,63.001425 570.0381,65.816055 C 609.26291,72.410824 643.5086,88.331807 673.0163,113.69109 C 686.35554,125.15501 699.42729,139.48769 723.579,169.13118 C 748.48614,199.70189 760.63378,210.97883 772.50689,214.55211 C 776.86292,215.86308 777.61542,215.82136 781.62807,214.04638 C 787.12836,211.61334 795.87321,203.4046 800.68073,196.16176 C 805.03844,189.59658 817.17275,162.82679 822.46539,148.10209 C 830.29349,126.32344 842.73084,103.17392 851.09999,94.804767 C 855.37051,90.534248 856.38961,90 860.26529,90 C 863.71864,90 865.17241,90.57212 867.25313,92.75 C 876.22889,102.1449 886,141.79664 886,168.82594 C 886,200.82513 880.66534,223.44973 866.56055,251.26975 C 845.68648,292.44137 815.96548,319.26667 777.18146,331.9407 C 768.94078,334.63363 749.67699,338.79955 737.8654,340.44306 C 732.64377,341.16962 730,339.54837 730,335.61974 C 730,333.37517 728.45034,330.61379 717.30604,313 C 714.00016,307.775 706.97062,295.26087 701.68484,285.19083 C 696.39906,275.12078 690.63121,264.99578 688.8674,262.69083 C 674.15565,243.46543 654.80181,231.42251 621.21561,220.59454 C 615.32202,218.69449 597.9,212.66878 582.5,207.20407 C 533.95959,189.97945 510.11312,183 499.80272,183 C 491.7205,183 465.95838,190.30984 431,202.52234 C 412.575,208.95901 389.85,216.83446 380.5,220.02334 C 348.59236,230.90569 335.6084,237.72325 321.65816,250.91976 C 313.40143,258.73038 308.16926,266.41707 298.2627,285.29052 C 293.00577,295.30573 285.99984,307.775 282.69396,313 C 271.54966,330.61379 270,333.37517 270,335.61974 C 270,338.29606 267.51135,341.03147 265.17857,340.91924 C 264.25536,340.87483 258.55,339.97164 252.5,338.91217 z \""
"     id=\"horns\""
"     sodipodi:nodetypes=\"csssssssssssssssssssssssssssssssssssssssssssc\""
"     inkscape:label=\"Horns\" />"
"  <path"
"     style=\"fill:#000000;fill-opacity:1\""
"     d=\"M 512.09558,529.43059 C 523.22031,527.41789 544.87393,520.04098 558.07233,513.76732 C 567.9896,509.0533 585.91301,498.53458 585.91301,497.42846 C 585.91301,496.71211 580.88838,498.96179 573.65648,502.91608 C 546.83589,517.58115 508.13661,529.97058 493.28912,528.64538 C 477.88531,527.27054 454.34662,519.44147 430.65816,507.81406 C 421.84378,503.48754 414.46109,500.11859 414.25218,500.3275 C 413.64853,500.93115 421.1093,505.60162 431.1549,510.90866 C 453.08928,522.49649 482.18293,531.14794 498.41301,530.9089 C 501.71301,530.86029 507.87017,530.19505 512.09558,529.43059 z \""
"     id=\"mouth\""
"     inkscape:label=\"Mouth\" />"
"  <g"
"     id=\"nose\""
"     inkscape:label=\"Nose\""
"     style=\"fill:#000000;fill-opacity:1\">"
"    <path"
"       sodipodi:nodetypes=\"ccssc\""
"       id=\"path3807\""
"       d=\"M 524.11144,457.11639 C 523.11657,457.34285 523.27276,455.79227 525.21316,452.32053 C 530.16983,443.45209 539.2811,431.67736 544.26874,427.69454 C 550.5715,422.66155 558.72528,418.99351 563.54725,419.02196 C 567.80304,419.04708 575.76874,422.33109 575.76874,424.06051\""
"       style=\"fill:#000000;fill-opacity:1\" />"
"    <path"
"       id=\"path3813\""
"       d=\"M 475.79097,457.11639 C 476.78584,457.34285 476.62964,455.79227 474.68925,452.32053 C 469.73258,443.45209 460.62131,431.67736 455.63367,427.69454 C 449.33091,422.66155 441.17713,418.99351 436.35516,419.02196 C 432.09937,419.04708 424.13367,422.33109 424.13367,424.06051\""
"       style=\"fill:#000000;fill-opacity:1\""
"       sodipodi:nodetypes=\"ccssc\" />"
"  </g>"
"</svg>";

#endif /* _TWIN_SVG_H_ */
