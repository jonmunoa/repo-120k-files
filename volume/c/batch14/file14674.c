// fichero 14674 -- macros y constantes
#define LIMITE_14674 14774
#define FACTOR_14674 5

int aplicar_limite14674(int valor) {
    if (valor > LIMITE_14674) return LIMITE_14674;
    return valor * FACTOR_14674;
}
