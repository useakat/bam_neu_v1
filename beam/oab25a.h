/*!
 ---------------------------------------------------------------------\n

 \short off-axis angle のbeam profile (2.5 \f$\bar{\nu}\f$ foucus)

 \b 解説

 50MeV刻みのビームのフラックス配列。場所は 1000 km 。
 エネルギーレンジは 0.0GeV - 15GeV
 (index にすると 0-299までの300個)

 ---------------------------------------------------------------------\n

 \author "$Author: okamura $"

 \date "$Date: 2011-01-18 13:45:53 +0900 (Tue, 18 Jan 2011) $" 

 \version "$Name:  $-$Revision: 188 $-$State: Exp $"

 \note "$Source: /home/cvsroot/std.set.T2K4.3/Beam/oab25a.cc,v $"

 ---------------------------------------------------------------------\n

 \b 使用法

 \return 配列要素は
 \f$ E_\nu(GeV),\nu_\mu,\bar{\nu}_{\mu},\nu_e,\bar{\nu}_e \f$

 ---------------------------------------------------------------------\n
*/
/*--------------------------------------------------------
// Neutrino flux table at 1000 km 
// off axcis angle is 25a
// Enu(GeV),   nu_mu,        bar{nu_mu},   nu_e,         bar{nu_e}
---------------------------------------------------------*/
double oab25a[300][5]={
{2.500000e-02, 2.277234e+03, 1.427211e+03, 3.860730e+00, 1.557377e+01},
{7.500000e-02, 6.584247e+03, 7.376782e+03, 1.638917e+01, 1.019542e+02},
{1.250000e-01, 4.546169e+03, 1.534085e+04, 2.794810e+01, 2.395455e+02},
{1.750000e-01, 3.703801e+03, 2.311047e+04, 3.894015e+01, 3.235864e+02},
{2.250000e-01, 3.585530e+03, 3.316362e+04, 4.761890e+01, 3.956264e+02},
{2.750000e-01, 3.710192e+03, 4.543433e+04, 5.651166e+01, 5.089890e+02},
{3.250000e-01, 3.926176e+03, 5.869497e+04, 5.976899e+01, 5.060656e+02},
{3.750000e-01, 3.997966e+03, 7.227866e+04, 6.702834e+01, 5.703012e+02},
{4.250000e-01, 4.103293e+03, 8.570031e+04, 7.344614e+01, 5.460961e+02},
{4.750000e-01, 4.156053e+03, 1.009479e+05, 6.974255e+01, 5.189785e+02},
{5.250000e-01, 4.328212e+03, 1.201155e+05, 7.045009e+01, 5.755994e+02},
{5.750000e-01, 4.462192e+03, 1.417981e+05, 7.542645e+01, 5.802726e+02},
{6.250000e-01, 4.342936e+03, 1.499590e+05, 7.598167e+01, 5.023675e+02},
{6.750000e-01, 4.360700e+03, 1.294082e+05, 6.932709e+01, 4.812986e+02},
{7.250000e-01, 4.274377e+03, 9.759903e+04, 6.161504e+01, 4.612766e+02},
{7.750000e-01, 3.867229e+03, 7.194942e+04, 7.455720e+01, 4.349733e+02},
{8.250000e-01, 3.625252e+03, 5.402148e+04, 6.330359e+01, 3.328683e+02},
{8.750000e-01, 3.220715e+03, 3.837943e+04, 6.931690e+01, 3.623466e+02},
{9.250000e-01, 3.553152e+03, 2.644939e+04, 5.764856e+01, 2.997314e+02},
{9.750000e-01, 3.219734e+03, 1.770573e+04, 6.921138e+01, 3.127611e+02},
{1.025000e+00, 3.167245e+03, 1.186101e+04, 6.114858e+01, 3.087456e+02},
{1.075000e+00, 2.973123e+03, 9.019431e+03, 5.735424e+01, 2.264292e+02},
{1.125000e+00, 2.866458e+03, 6.798759e+03, 5.929162e+01, 2.166023e+02},
{1.175000e+00, 2.712121e+03, 5.726293e+03, 7.870221e+01, 2.001447e+02},
{1.225000e+00, 2.455979e+03, 4.893838e+03, 5.131655e+01, 1.386780e+02},
{1.275000e+00, 2.167942e+03, 3.968923e+03, 4.931220e+01, 1.099960e+02},
{1.325000e+00, 2.158879e+03, 3.623041e+03, 5.655636e+01, 1.209541e+02},
{1.375000e+00, 2.191992e+03, 3.198683e+03, 4.814653e+01, 1.162387e+02},
{1.425000e+00, 1.870781e+03, 2.814264e+03, 4.627793e+01, 7.946679e+01},
{1.475000e+00, 2.038224e+03, 2.437303e+03, 5.148685e+01, 1.485995e+02},
{1.525000e+00, 1.988216e+03, 2.245032e+03, 6.321436e+01, 7.816212e+01},
{1.575000e+00, 1.741784e+03, 2.130327e+03, 5.405334e+01, 1.070256e+02},
{1.625000e+00, 1.394952e+03, 2.127175e+03, 4.943625e+01, 6.873643e+01},
{1.675000e+00, 1.233023e+03, 1.573729e+03, 5.430300e+01, 7.498122e+01},
{1.725000e+00, 1.198018e+03, 1.652711e+03, 6.395992e+01, 7.872141e+01},
{1.775000e+00, 1.204308e+03, 1.532380e+03, 4.756100e+01, 7.991486e+01},
{1.825000e+00, 1.213122e+03, 1.392188e+03, 3.913584e+01, 5.931422e+01},
{1.875000e+00, 1.214673e+03, 1.350526e+03, 3.953894e+01, 7.082635e+01},
{1.925000e+00, 1.037885e+03, 7.151909e+02, 4.330189e+01, 7.236878e+01},
{1.975000e+00, 1.186461e+03, 1.341610e+03, 4.291730e+01, 7.141977e+01},
{2.025000e+00, 9.978507e+02, 1.146658e+03, 4.801404e+01, 7.038774e+01},
{2.075000e+00, 1.112180e+03, 9.930958e+02, 4.323260e+01, 6.875632e+01},
{2.125000e+00, 8.962315e+02, 1.016970e+03, 5.360984e+01, 8.525642e+01},
{2.175000e+00, 8.458478e+02, 8.893427e+02, 3.089408e+01, 5.614003e+01},
{2.225000e+00, 1.057512e+03, 9.100894e+02, 3.269578e+01, 5.642672e+01},
{2.275000e+00, 6.142206e+02, 8.934948e+02, 3.843671e+01, 5.645771e+01},
{2.325000e+00, 8.693689e+02, 6.763061e+02, 4.151981e+01, 6.211013e+01},
{2.375000e+00, 8.082087e+02, 6.937930e+02, 3.710620e+01, 5.574781e+01},
{2.425000e+00, 5.349032e+02, 7.410588e+02, 3.042460e+01, 5.219987e+01},
{2.475000e+00, 5.498925e+02, 7.903358e+02, 3.951948e+01, 5.727705e+01},
{2.525000e+00, 4.266398e+02, 6.463166e+02, 3.408165e+01, 5.312789e+01},
{2.575000e+00, 6.056321e+02, 6.623740e+02, 4.145404e+01, 5.462211e+01},
{2.625000e+00, 6.722879e+02, 6.052065e+02, 3.357648e+01, 4.863865e+01},
{2.675000e+00, 2.339258e+02, 4.666371e+02, 3.270373e+01, 4.813598e+01},
{2.725000e+00, 9.206925e+02, 6.211953e+02, 3.500963e+01, 5.092733e+01},
{2.775000e+00, 5.565320e+02, 4.923965e+02, 3.162735e+01, 4.322740e+01},
{2.825000e+00, 6.466958e+02, 6.840385e+02, 2.515477e+01, 3.724045e+01},
{2.875000e+00, 5.861663e+02, 3.403794e+02, 3.290736e+01, 4.584546e+01},
{2.925000e+00, 4.976513e+02, 4.356451e+02, 3.219402e+01, 4.313460e+01},
{2.975000e+00, 4.374293e+02, 5.422204e+02, 2.619165e+01, 3.857500e+01},
{3.025000e+00, 6.383571e+02, 7.334533e+02, 3.511255e+01, 4.718308e+01},
{3.075000e+00, 6.835406e+02, 6.334508e+02, 2.776428e+01, 3.793583e+01},
{3.125000e+00, 4.732525e+02, 4.269259e+02, 2.685389e+01, 3.887515e+01},
{3.175000e+00, 6.350679e+02, 6.418742e+02, 3.668898e+01, 4.615610e+01},
{3.225000e+00, 2.625071e+02, 3.631571e+02, 2.944415e+01, 3.889650e+01},
{3.275000e+00, 3.447255e+02, 4.458674e+02, 3.842837e+01, 4.534369e+01},
{3.325000e+00, 3.495681e+02, 4.210569e+02, 1.803695e+01, 2.793064e+01},
{3.375000e+00, 4.400756e+02, 5.526350e+02, 2.840037e+01, 3.280399e+01},
{3.425000e+00, 3.625456e+02, 5.791519e+02, 3.093932e+01, 3.306750e+01},
{3.475000e+00, 2.947431e+02, 4.597430e+02, 2.051530e+01, 2.758511e+01},
{3.525000e+00, 5.624347e+02, 5.468374e+02, 2.529608e+01, 3.396948e+01},
{3.575000e+00, 1.121974e+02, 4.080960e+02, 2.245031e+01, 2.653009e+01},
{3.625000e+00, 2.149610e+02, 3.544209e+02, 2.475109e+01, 2.819735e+01},
{3.675000e+00, 2.141879e+02, 3.623539e+02, 1.074823e+01, 1.584539e+01},
{3.725000e+00, 3.138782e+02, 5.025355e+02, 1.656556e+01, 2.003440e+01},
{3.775000e+00, 5.460249e+02, 4.469204e+02, 1.539744e+01, 2.020610e+01},
{3.825000e+00, 1.131044e+02, 4.099006e+02, 2.056145e+01, 2.233814e+01},
{3.875000e+00, 4.571629e+02, 3.670426e+02, 2.390673e+01, 2.443981e+01},
{3.925000e+00, 1.286864e+02, 3.666520e+02, 1.985081e+01, 1.761696e+01},
{3.975000e+00, 1.068722e+02, 3.561889e+02, 1.326879e+01, 1.638368e+01},
{4.025000e+00, 2.279183e+02, 4.216814e+02, 2.316478e+01, 2.188146e+01},
{4.075000e+00, 2.025796e+02, 3.972810e+02, 2.223857e+01, 2.453713e+01},
{4.125000e+00, 3.554738e+02, 4.045274e+02, 1.893593e+01, 1.862416e+01},
{4.175000e+00, 3.477074e+02, 3.133858e+02, 1.603552e+01, 1.958849e+01},
{4.225000e+00, 1.207772e+02, 4.687247e+02, 2.016819e+01, 2.641053e+01},
{4.275000e+00, 3.507757e+02, 3.653332e+02, 1.933745e+01, 1.816108e+01},
{4.325000e+00, 4.173723e+02, 3.304688e+02, 1.261969e+01, 1.238408e+01},
{4.375000e+00, 2.615876e+02, 3.646169e+02, 1.718568e+01, 1.359980e+01},
{4.425000e+00, 4.311625e+02, 3.727306e+02, 8.096995e+00, 9.470730e+00},
{4.475000e+00, 9.102694e+01, 3.472312e+02, 1.223868e+01, 1.293484e+01},
{4.525000e+00, 4.278727e+02, 3.206584e+02, 1.379034e+01, 1.187893e+01},
{4.575000e+00, 9.061897e+01, 2.923212e+02, 9.975024e+00, 8.752395e+00},
{4.625000e+00, 4.157884e+02, 3.465362e+02, 1.565554e+01, 8.974904e+00},
{4.675000e+00, 7.620644e+01, 2.843168e+02, 1.120433e+01, 9.293452e+00},
{4.725000e+00, 2.670013e+02, 2.853369e+02, 1.452395e+01, 1.310181e+01},
{4.775000e+00, 6.519818e+01, 2.267316e+02, 8.676841e+00, 5.274251e+00},
{4.825000e+00, 1.134077e+02, 4.467897e+02, 1.259317e+01, 1.177837e+01},
{4.875000e+00, 2.974182e+02, 2.814032e+02, 7.632208e+00, 7.876433e+00},
{4.925000e+00, 1.154146e+02, 2.872810e+02, 2.088058e+01, 1.166864e+01},
{4.975000e+00, 1.256049e+02, 2.485258e+02, 1.077158e+01, 8.519686e+00},
{5.025000e+00, 2.877054e+02, 2.134768e+02, 1.000662e+01, 9.602227e+00},
{5.075000e+00, 1.062057e+02, 2.477628e+02, 4.553097e+00, 3.131359e+00},
{5.125000e+00, 1.415865e+02, 2.110076e+02, 6.778938e+00, 7.849440e+00},
{5.175000e+00, 7.647848e+01, 4.139723e+02, 1.054021e+01, 1.053112e+01},
{5.225000e+00, 7.213571e+01, 1.762532e+02, 4.790611e+00, 2.902400e+00},
{5.275000e+00, 7.058013e+01, 1.677349e+02, 1.472639e+01, 1.634372e+01},
{5.325000e+00, 1.050257e+02, 1.500223e+02, 8.063599e+00, 5.252065e+00},
{5.375000e+00, 8.561702e+01, 1.374244e+02, 1.902390e+01, 1.979754e+01},
{5.425000e+00, 3.308881e+02, 1.865217e+02, 3.218154e+00, 9.448794e-01},
{5.475000e+00, 1.046074e+02, 1.553471e+02, 5.865260e+00, 5.157403e+00},
{5.525000e+00, 7.762235e+01, 1.453257e+02, 5.291344e+00, 3.951010e+00},
{5.575000e+00, 7.560607e+01, 1.511698e+02, 4.585605e+00, 2.279036e+00},
{5.625000e+00, 1.070539e+02, 1.506911e+02, 8.222071e+00, 7.886387e+00},
{5.675000e+00, 8.864567e+01, 1.021350e+02, 1.798017e+01, 1.574909e+01},
{5.725000e+00, 7.635988e+01, 1.179215e+02, 7.561029e+00, 7.860620e+00},
{5.775000e+00, 7.758307e+01, 1.059712e+02, 7.745115e+00, 5.075736e+00},
{5.825000e+00, 5.396284e+01, 9.316802e+01, 1.129181e+01, 5.846233e+00},
{5.875000e+00, 6.572306e+01, 8.386225e+01, 1.717533e+01, 1.983167e+01},
{5.925000e+00, 7.049738e+01, 7.056071e+01, 3.384166e+00, 1.526204e+00},
{5.975000e+00, 6.418139e+01, 1.021208e+02, 2.174566e+00, 5.334248e-01},
{6.025000e+00, 7.295924e+01, 8.058016e+01, 5.218068e+00, 3.274118e+00},
{6.075000e+00, 7.024513e+01, 8.590726e+01, 1.416414e+01, 1.400451e+01},
{6.125000e+00, 6.742226e+01, 1.110876e+02, 7.857608e+00, 2.608967e+00},
{6.175000e+00, 6.449650e+01, 1.129115e+02, 3.783496e+00, 2.538303e+00},
{6.225000e+00, 6.982713e+01, 4.919045e+01, 6.094472e+00, 3.546469e+00},
{6.275000e+00, 6.657891e+01, 3.800497e+02, 1.003905e+00, 0.000000e+00},
{6.325000e+00, 9.728135e+01, 6.750710e+01, 5.431468e+00, 2.733308e+00},
{6.375000e+00, 6.883394e+01, 5.598300e+01, 5.292034e+00, 2.850870e+00},
{6.425000e+00, 7.859346e+01, 6.562163e+01, 1.465214e+01, 1.326994e+01},
{6.475000e+00, 8.423875e+01, 1.017495e+02, 2.825623e+00, 2.503238e+00},
{6.525000e+00, 4.054422e+02, 4.949473e+01, 1.534598e+00, 0.000000e+00},
{6.575000e+00, 1.006607e+02, 7.771654e+01, 1.074209e+01, 8.976728e+00},
{6.625000e+00, 9.303747e+01, 4.632325e+01, 7.006624e+00, 2.672313e+00},
{6.675000e+00, 8.473991e+01, 7.066697e+01, 3.075198e+00, 0.000000e+00},
{6.725000e+00, 6.229728e+01, 4.779674e+01, 8.333556e+00, 5.778342e+00},
{6.775000e+00, 6.789972e+01, 6.313188e+01, 1.607268e+01, 1.235367e+01},
{6.825000e+00, 3.936254e+01, 4.433687e+01, 1.040455e+00, 0.000000e+00},
{6.875000e+00, 5.994062e+01, 4.003470e+01, 3.656813e+00, 2.783029e+00},
{6.925000e+00, 6.089256e+01, 3.036689e+01, 8.870699e+00, 6.792283e+00},
{6.975000e+00, 5.148562e+01, 2.572026e+01, 2.420670e+00, 0.000000e+00},
{7.025000e+00, 8.889512e+01, 6.264271e+01, 3.446373e+00, 5.351515e-01},
{7.075000e+00, 4.643292e+02, 3.181867e+01, 9.803453e+00, 7.752221e+00},
{7.125000e+00, 2.682822e+01, 2.152129e+01, 2.951555e+00, 2.477247e+00},
{7.175000e+00, 8.695486e+01, 3.809526e+01, 5.461191e-01, 0.000000e+00},
{7.225000e+00, 6.085958e+01, 4.410000e+01, 4.013742e+00, 0.000000e+00},
{7.275000e+00, 7.272958e+01, 1.121452e+01, 2.745829e+00, 5.645143e-01},
{7.325000e+00, 7.388014e+01, 4.539447e+01, 2.273052e+00, 9.895903e-01},
{7.375000e+00, 4.596801e+01, 4.607909e+01, 5.805583e+00, 4.289145e+00},
{7.425000e+00, 5.242757e+01, 7.006347e+01, 8.685327e+00, 5.984897e+00},
{7.475000e+00, 5.914999e+01, 3.543675e+01, 7.298666e+00, 5.138896e+00},
{7.525000e+00, 4.184375e+01, 2.396997e+01, 0.000000e+00, 6.707432e-01},
{7.575000e+00, 6.059859e+01, 4.249419e+01, 8.142553e-01, 0.000000e+00},
{7.625000e+00, 6.160183e+01, 4.307959e+01, 4.184164e+00, 4.184164e+00},
{7.675000e+00, 7.477798e+01, 3.734098e+01, 1.342358e+00, 5.963805e-01},
{7.725000e+00, 5.674322e+01, 1.260510e+01, 1.173112e+00, 0.000000e+00},
{7.775000e+00, 4.483103e+01, 4.467373e+01, 3.511036e+00, 0.000000e+00},
{7.825000e+00, 6.470392e+01, 3.239634e+01, 7.331488e-01, 0.000000e+00},
{7.875000e+00, 4.592490e+01, 3.276763e+01, 1.472291e+00, 0.000000e+00},
{7.925000e+00, 5.311952e+01, 1.992718e+01, 3.831766e+00, 3.124356e+00},
{7.975000e+00, 5.284946e+02, 2.010401e+01, 0.000000e+00, 5.963349e-01},
{8.025000e+00, 6.115081e+01, 1.360777e+01, 0.000000e+00, 8.366762e-01},
{8.075000e+00, 8.289465e+01, 2.073589e+01, 2.780223e+00, 0.000000e+00},
{8.125000e+00, 5.583130e+01, 1.402475e+01, 1.838709e+00, 0.000000e+00},
{8.175000e+00, 5.657062e+01, 3.531954e+01, 2.457272e+00, 0.000000e+00},
{8.225000e+00, 5.726551e+01, 2.852646e+01, 8.039536e-01, 0.000000e+00},
{8.275000e+00, 2.889519e+01, 7.283069e+00, 1.356489e+00, 0.000000e+00},
{8.325000e+00, 4.392525e+01, 2.200059e+01, 0.000000e+00, 0.000000e+00},
{8.375000e+00, 5.933470e+01, 2.972200e+01, 1.084756e+00, 0.000000e+00},
{8.425000e+00, 7.486644e+01, 4.500109e+01, 0.000000e+00, 0.000000e+00},
{8.475000e+00, 4.557044e+01, 3.030396e+01, 3.543145e+00, 0.000000e+00},
{8.525000e+00, 4.604517e+01, 3.068711e+01, 0.000000e+00, 0.000000e+00},
{8.575000e+00, 2.335104e+01, 1.554884e+01, 9.625310e-01, 0.000000e+00},
{8.625000e+00, 5.526048e+01, 2.355393e+01, 2.808105e+00, 0.000000e+00},
{8.675000e+00, 6.361607e+01, 7.919134e+00, 0.000000e+00, 0.000000e+00},
{8.725000e+00, 8.056295e+01, 2.408703e+01, 0.000000e+00, 0.000000e+00},
{8.775000e+00, 8.129878e+00, 1.625486e+01, 0.000000e+00, 0.000000e+00},
{8.825000e+00, 4.117955e+01, 2.468966e+01, 9.858683e-01, 0.000000e+00},
{8.875000e+00, 4.172600e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{8.925000e+00, 4.217405e+01, 0.000000e+00, 0.000000e+00, 1.126812e+00},
{8.975000e+00, 5.114906e+01, 2.562309e+01, 0.000000e+00, 0.000000e+00},
{9.025000e+00, 1.723742e+01, 1.721047e+01, 3.167334e+00, 1.374955e+00},
{9.075000e+00, 2.605839e+01, 1.745353e+01, 8.132386e+00, 7.222001e+00},
{9.125000e+00, 3.522377e+01, 8.837946e+00, 1.241868e+00, 8.237279e-01},
{9.175000e+00, 5.344440e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{9.225000e+00, 1.798339e+01, 1.801848e+01, 2.200138e+00, 0.000000e+00},
{9.275000e+00, 2.723662e+01, 9.070922e+00, 1.405790e+00, 0.000000e+00},
{9.325000e+00, 9.216701e+00, 9.151566e+00, 0.000000e+00, 0.000000e+00},
{9.375000e+00, 7.445815e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{9.425000e+00, 1.872910e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{9.475000e+00, 3.797003e+01, 0.000000e+00, 4.325319e+00, 0.000000e+00},
{9.525000e+00, 9.564030e+00, 9.561457e+00, 0.000000e+00, 0.000000e+00},
{9.575000e+00, 1.932289e+01, 1.935190e+01, 4.261115e+00, 4.261115e+00},
{9.625000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{9.675000e+00, 3.953882e+01, 1.972824e+01, 0.000000e+00, 0.000000e+00},
{9.725000e+00, 0.000000e+00, 3.007190e+01, 1.164851e+01, 1.012566e+01},
{9.775000e+00, 2.022536e+01, 1.012523e+01, 0.000000e+00, 0.000000e+00},
{9.825000e+00, 3.067823e+01, 1.020085e+01, 1.226780e+00, 0.000000e+00},
{9.875000e+00, 1.026334e+01, 0.000000e+00, 2.756060e+00, 0.000000e+00},
{9.925000e+00, 5.207793e+01, 0.000000e+00, 1.696225e+00, 0.000000e+00},
{9.975000e+00, 4.217811e+01, 0.000000e+00, 1.355047e+00, 0.000000e+00},
{1.002500e+01, 6.365896e+01, 2.119836e+01, 0.000000e+00, 0.000000e+00},
{1.007500e+01, 4.305560e+01, 0.000000e+00, 6.134023e+00, 6.134023e+00},
{1.012500e+01, 2.178287e+01, 1.085373e+01, 0.000000e+00, 0.000000e+00},
{1.017500e+01, 1.098281e+01, 0.000000e+00, 1.563403e+00, 0.000000e+00},
{1.022500e+01, 1.106621e+01, 1.102434e+01, 1.462069e+00, 0.000000e+00},
{1.027500e+01, 6.706061e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.032500e+01, 2.260928e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.037500e+01, 2.278646e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.042500e+01, 3.461183e+01, 0.000000e+00, 1.316566e+00, 0.000000e+00},
{1.047500e+01, 1.160363e+01, 0.000000e+00, 0.000000e+00, 1.029312e+00},
{1.052500e+01, 2.344803e+01, 0.000000e+00, 8.164887e+00, 8.164887e+00},
{1.057500e+01, 2.365240e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.062500e+01, 1.074520e+02, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.067500e+01, 1.205235e+01, 0.000000e+00, 2.218994e+00, 0.000000e+00},
{1.072500e+01, 0.000000e+00, 1.211687e+01, 0.000000e+00, 0.000000e+00},
{1.077500e+01, 2.453886e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.082500e+01, 1.235857e+01, 1.239247e+01, 0.000000e+00, 0.000000e+00},
{1.087500e+01, 0.000000e+00, 0.000000e+00, 1.628317e+00, 0.000000e+00},
{1.092500e+01, 1.261445e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.097500e+01, 1.268264e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.102500e+01, 1.282774e+01, 1.283296e+01, 0.000000e+00, 0.000000e+00},
{1.107500e+01, 2.592192e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.112500e+01, 2.611750e+01, 1.303919e+01, 0.000000e+00, 0.000000e+00},
{1.117500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.122500e+01, 2.671673e+01, 1.336840e+01, 0.000000e+00, 0.000000e+00},
{1.127500e+01, 1.344965e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.132500e+01, 1.359665e+01, 1.356257e+01, 0.000000e+00, 0.000000e+00},
{1.137500e+01, 2.740400e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.142500e+01, 2.755057e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.147500e+01, 2.783247e+01, 1.388504e+01, 1.739179e+00, 0.000000e+00},
{1.152500e+01, 1.401312e+01, 1.407708e+01, 1.353377e+00, 0.000000e+00},
{1.157500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.162500e+01, 1.429313e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.167500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.172500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.177500e+01, 2.932426e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.182500e+01, 1.483761e+01, 1.484727e+01, 0.000000e+00, 0.000000e+00},
{1.187500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.192500e+01, 1.503098e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.197500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.202500e+01, 1.528007e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.207500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.212500e+01, 1.550944e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.217500e+01, 3.128200e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.222500e+01, 0.000000e+00, 1.575360e+01, 0.000000e+00, 0.000000e+00},
{1.227500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.232500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.237500e+01, 4.850606e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.242500e+01, 3.270758e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.247500e+01, 1.650317e+01, 0.000000e+00, 1.755115e+00, 0.000000e+00},
{1.252500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.257500e+01, 1.673974e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.262500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.267500e+01, 1.701597e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.272500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.277500e+01, 1.726550e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.282500e+01, 1.734754e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.287500e+01, 3.501628e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.292500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.297500e+01, 8.916423e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.302500e+01, 1.795534e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.307500e+01, 0.000000e+00, 1.811688e+01, 0.000000e+00, 0.000000e+00},
{1.312500e+01, 1.820987e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.317500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.322500e+01, 1.852318e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.327500e+01, 1.870884e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.332500e+01, 1.881939e+01, 0.000000e+00, 0.000000e+00, 1.963177e+00},
{1.337500e+01, 3.785664e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.342500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.347500e+01, 3.844818e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.352500e+01, 1.939942e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.357500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.362500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.367500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.372500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.377500e+01, 2.006570e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.382500e+01, 0.000000e+00, 2.016573e+01, 0.000000e+00, 0.000000e+00},
{1.387500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.392500e+01, 0.000000e+00, 0.000000e+00, 2.480920e+00, 0.000000e+00},
{1.397500e+01, 2.059995e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.402500e+01, 2.074419e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.407500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.412500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.417500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.422500e+01, 2.145527e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.427500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.432500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.437500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.442500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.447500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.452500e+01, 2.235005e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.457500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.462500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.467500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.472500e+01, 2.291602e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.477500e+01, 2.312601e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.482500e+01, 4.657628e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.487500e+01, 0.000000e+00, 0.000000e+00, 2.242982e+00, 0.000000e+00},
{1.492500e+01, 2.362560e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00},
{1.497500e+01, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00}
};
