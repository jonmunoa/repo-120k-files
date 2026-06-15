// fichero 16518 -- macros y constantes -- MODIFICADO
#define LIMITE_16518 16718
#define FACTOR_16518 5

int aplicar_limite16518(int valor) {
    if (valor > LIMITE_16518) return LIMITE_16518;
    return valor * FACTOR_16518;
}
