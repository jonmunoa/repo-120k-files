// fichero 13242 -- macros y constantes -- MODIFICADO
#define LIMITE_13242 13442
#define FACTOR_13242 4

int aplicar_limite13242(int valor) {
    if (valor > LIMITE_13242) return LIMITE_13242;
    return valor * FACTOR_13242;
}
