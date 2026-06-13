// fichero 16074 -- macros y constantes
#define LIMITE_16074 16174
#define FACTOR_16074 5

int aplicar_limite16074(int valor) {
    if (valor > LIMITE_16074) return LIMITE_16074;
    return valor * FACTOR_16074;
}
