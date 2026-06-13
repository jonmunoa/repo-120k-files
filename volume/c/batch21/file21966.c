// fichero 21966 -- macros y constantes
#define LIMITE_21966 22066
#define FACTOR_21966 2

int aplicar_limite21966(int valor) {
    if (valor > LIMITE_21966) return LIMITE_21966;
    return valor * FACTOR_21966;
}
