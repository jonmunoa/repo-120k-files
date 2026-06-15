// fichero 45354 -- macros y constantes -- MODIFICADO
#define LIMITE_45354 45554
#define FACTOR_45354 6

int aplicar_limite45354(int valor) {
    if (valor > LIMITE_45354) return LIMITE_45354;
    return valor * FACTOR_45354;
}
