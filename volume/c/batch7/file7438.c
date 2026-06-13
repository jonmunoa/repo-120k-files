// fichero 7438 -- macros y constantes
#define LIMITE_7438 7538
#define FACTOR_7438 4

int aplicar_limite7438(int valor) {
    if (valor > LIMITE_7438) return LIMITE_7438;
    return valor * FACTOR_7438;
}
