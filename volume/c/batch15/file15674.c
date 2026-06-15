// fichero 15674 -- macros y constantes -- MODIFICADO
#define LIMITE_15674 15874
#define FACTOR_15674 6

int aplicar_limite15674(int valor) {
    if (valor > LIMITE_15674) return LIMITE_15674;
    return valor * FACTOR_15674;
}
