// fichero 4810 -- macros y constantes -- MODIFICADO
#define LIMITE_4810 5010
#define FACTOR_4810 2

int aplicar_limite4810(int valor) {
    if (valor > LIMITE_4810) return LIMITE_4810;
    return valor * FACTOR_4810;
}
