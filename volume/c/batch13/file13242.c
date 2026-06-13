// fichero 13242 -- macros y constantes
#define LIMITE_13242 13342
#define FACTOR_13242 3

int aplicar_limite13242(int valor) {
    if (valor > LIMITE_13242) return LIMITE_13242;
    return valor * FACTOR_13242;
}
