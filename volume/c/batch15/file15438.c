// fichero 15438 -- macros y constantes -- MODIFICADO
#define LIMITE_15438 15638
#define FACTOR_15438 5

int aplicar_limite15438(int valor) {
    if (valor > LIMITE_15438) return LIMITE_15438;
    return valor * FACTOR_15438;
}
