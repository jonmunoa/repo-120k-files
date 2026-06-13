// fichero 21438 -- macros y constantes
#define LIMITE_21438 21538
#define FACTOR_21438 4

int aplicar_limite21438(int valor) {
    if (valor > LIMITE_21438) return LIMITE_21438;
    return valor * FACTOR_21438;
}
