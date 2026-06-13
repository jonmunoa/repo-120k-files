// fichero 4810 -- macros y constantes
#define LIMITE_4810 4910
#define FACTOR_4810 1

int aplicar_limite4810(int valor) {
    if (valor > LIMITE_4810) return LIMITE_4810;
    return valor * FACTOR_4810;
}
