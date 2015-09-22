#define NINTERP 100

float Y2[NINTERP+1];
int ninterp = NINTERP;

float TWOn[] = {0., 0.110, 0.21, 0.310, 0.410, 0.510, 0.610, 0.710, 0.810,
0.91, 1.01, 1.11, 1.21, 1.31, 1.41, 1.51, 1.61, 1.71, 1.81, 1.91, 2.01,
2.11, 2.21, 2.31, 2.41, 2.51, 2.61, 2.71, 2.81, 2.91, 3.01, 3.11, 3.21,
3.31, 3.41, 3.51, 3.61, 3.71, 3.81, 3.91, 4.01, 4.11, 4.21, 4.31, 4.41,
4.51, 4.61, 4.71, 4.81, 4.91, 5.01, 5.11, 5.21, 5.31, 5.41, 5.51, 5.61,
5.71, 5.81, 5.91, 6.01, 6.11, 6.21, 6.31, 6.41, 6.51, 6.61, 6.71, 6.81,
6.91, 7.01, 7.11, 7.21, 7.31, 7.41, 7.51, 7.61, 7.71, 7.81, 7.91, 8.01,
8.11, 8.21, 8.31, 8.41, 8.51, 8.61, 8.71, 8.81, 8.91, 9.01, 9.11, 9.21,
9.31, 9.41, 9.51, 9.61, 9.71, 9.81, 9.91, 10.01 };

float MU[] = {0., 1.12299E-03, 2.47138E-02, 7.96442E-02, 0.152949, 0.236079,
0.324744, 0.416733, 0.510833, 0.606342, 0.702830, 0.820, 0.897725,
0.995823, 1.09422, 1.19286, 1.29168, 1.39067, 1.48977, 1.58898, 1.68828,
1.78765, 1.88708, 1.98658, 2.08611, 2.18569, 2.28530, 2.38495, 2.48461,
2.58431, 2.68403, 2.78377, 2.88352, 2.98330, 3.08308, 3.18289, 3.28270,
3.38252, 3.48235, 3.58219, 3.68205, 3.78190, 3.88177, 3.98164, 4.08152,
4.18140, 4.28129, 4.38119, 4.48109, 4.58099, 4.68090, 4.78081, 4.88072,
4.98064, 5.08057, 5.18049, 5.28042, 5.38035, 5.48028, 5.58022, 5.68016,
5.78010, 5.88003, 5.97998, 6.07993, 6.17987, 6.27982, 6.37977, 6.47972,
6.57968, 6.67963, 6.77959, 6.87955, 6.97950, 7.07946, 7.17942, 7.27939,
7.37935, 7.47932, 7.57928, 7.67925, 7.77921, 7.87918, 7.97915, 8.07912,
8.17909, 8.27906, 8.37903, 8.47899, 8.57897, 8.67895, 8.77892, 8.87889,
8.97888, 9.07885, 9.17883, 9.27880, 9.37877, 9.47875, 9.57874, 9.67871 };
