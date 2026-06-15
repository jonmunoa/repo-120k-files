// fichero 31234 -- macros y constantes -- MODIFICADO
#define LIMITE_31234 31434
#define FACTOR_31234 6

int aplicar_limite31234(int valor) {
    if (valor > LIMITE_31234) return LIMITE_31234;
    return valor * FACTOR_31234;
}
