// fichero 30086 -- macros y constantes
#define LIMITE_30086 30186
#define FACTOR_30086 2

int aplicar_limite30086(int valor) {
    if (valor > LIMITE_30086) return LIMITE_30086;
    return valor * FACTOR_30086;
}
