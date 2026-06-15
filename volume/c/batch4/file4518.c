// fichero 4518 -- macros y constantes -- MODIFICADO
#define LIMITE_4518 4718
#define FACTOR_4518 5

int aplicar_limite4518(int valor) {
    if (valor > LIMITE_4518) return LIMITE_4518;
    return valor * FACTOR_4518;
}
