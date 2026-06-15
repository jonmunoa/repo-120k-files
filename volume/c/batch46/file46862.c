// fichero 46862 -- macros y constantes -- MODIFICADO
#define LIMITE_46862 47062
#define FACTOR_46862 4

int aplicar_limite46862(int valor) {
    if (valor > LIMITE_46862) return LIMITE_46862;
    return valor * FACTOR_46862;
}
