// fichero 27782 -- macros y constantes
#define LIMITE_27782 27882
#define FACTOR_27782 3

int aplicar_limite27782(int valor) {
    if (valor > LIMITE_27782) return LIMITE_27782;
    return valor * FACTOR_27782;
}
