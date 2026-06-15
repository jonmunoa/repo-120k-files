// fichero 21438 -- macros y constantes -- MODIFICADO
#define LIMITE_21438 21638
#define FACTOR_21438 5

int aplicar_limite21438(int valor) {
    if (valor > LIMITE_21438) return LIMITE_21438;
    return valor * FACTOR_21438;
}
