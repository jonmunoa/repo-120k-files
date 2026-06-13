// fichero 2094 -- macros y constantes
#define LIMITE_2094 2194
#define FACTOR_2094 5

int aplicar_limite2094(int valor) {
    if (valor > LIMITE_2094) return LIMITE_2094;
    return valor * FACTOR_2094;
}
