// fichero 36438 -- macros y constantes -- MODIFICADO
#define LIMITE_36438 36638
#define FACTOR_36438 5

int aplicar_limite36438(int valor) {
    if (valor > LIMITE_36438) return LIMITE_36438;
    return valor * FACTOR_36438;
}
