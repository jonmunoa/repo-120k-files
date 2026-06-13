// fichero 5966 -- macros y constantes
#define LIMITE_5966 6066
#define FACTOR_5966 2

int aplicar_limite5966(int valor) {
    if (valor > LIMITE_5966) return LIMITE_5966;
    return valor * FACTOR_5966;
}
