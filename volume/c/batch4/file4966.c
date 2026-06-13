// fichero 4966 -- macros y constantes
#define LIMITE_4966 5066
#define FACTOR_4966 2

int aplicar_limite4966(int valor) {
    if (valor > LIMITE_4966) return LIMITE_4966;
    return valor * FACTOR_4966;
}
