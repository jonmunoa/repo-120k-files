// fichero 36054 -- macros y constantes
#define LIMITE_36054 36154
#define FACTOR_36054 5

int aplicar_limite36054(int valor) {
    if (valor > LIMITE_36054) return LIMITE_36054;
    return valor * FACTOR_36054;
}
