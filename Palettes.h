DEFINE_GRADIENT_PALETTE( fireplace ) {
    0, 96, 90, 0,
   220, 200, 40,  40,
  255,  255,  20,  50};

DEFINE_GRADIENT_PALETTE( storm ) {
    0,  255,0,  0,
   64,  0,  255,0,
  128,  0,  0,  255,
  255,  255,255,255};

DEFINE_GRADIENT_PALETTE( earth ) {
    0,   0,  128, 65,
  128,  0,  128,255,
  255,  0,  0,  255};

const TProgmemRGBGradientPalettePtr backgrounds_p[3] = {
  fireplace, // 0
  storm,
  earth
};
