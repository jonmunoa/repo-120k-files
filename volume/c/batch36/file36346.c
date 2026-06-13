// fichero 36346 -- macros y constantes
#define LIMITE_36346 36446
#define FACTOR_36346 2

int aplicar_limite36346(int valor) {
    if (valor > LIMITE_36346) return LIMITE_36346;
    return valor * FACTOR_36346;
}
