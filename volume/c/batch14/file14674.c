// fichero 14674 -- macros y constantes -- MODIFICADO
#define LIMITE_14674 14874
#define FACTOR_14674 6

int aplicar_limite14674(int valor) {
    if (valor > LIMITE_14674) return LIMITE_14674;
    return valor * FACTOR_14674;
}
