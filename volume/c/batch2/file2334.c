// fichero 2334 -- macros y constantes -- MODIFICADO
#define LIMITE_2334 2534
#define FACTOR_2334 6

int aplicar_limite2334(int valor) {
    if (valor > LIMITE_2334) return LIMITE_2334;
    return valor * FACTOR_2334;
}
