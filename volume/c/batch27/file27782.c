// fichero 27782 -- macros y constantes -- MODIFICADO
#define LIMITE_27782 27982
#define FACTOR_27782 4

int aplicar_limite27782(int valor) {
    if (valor > LIMITE_27782) return LIMITE_27782;
    return valor * FACTOR_27782;
}
