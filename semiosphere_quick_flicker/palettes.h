DEFINE_GRADIENT_PALETTE( fireplace ) {
    0, 100, 10, 0,
   100, 200, 70,  0,
  255,  220,  50,  0};

DEFINE_GRADIENT_PALETTE (fireplace2) {
  0, 10 , 0, 0, 
  50, 50, 5, 0,
  100, 100, 35, 0,
  255, 110, 25, 0};

DEFINE_GRADIENT_PALETTE( storm ) {
    0,  255,255,255,
   64,  255,  255,0,
  128,  255,  200,0,
  255,  255,100,  0};

DEFINE_GRADIENT_PALETTE( earth ) {
    0,   0,  128, 65,
  128,  0,  128,255,
  255,  0,  0,  255};

const TProgmemRGBGradientPalettePtr backgrounds_p[4] = {
  fireplace, // 0
  fireplace2,
  storm,
  earth
};
