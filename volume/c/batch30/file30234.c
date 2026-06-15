// fichero 30234 -- macros y constantes -- MODIFICADO
#define LIMITE_30234 30434
#define FACTOR_30234 6

int aplicar_limite30234(int valor) {
    if (valor > LIMITE_30234) return LIMITE_30234;
    return valor * FACTOR_30234;
}
