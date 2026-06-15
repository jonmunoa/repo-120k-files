// fichero 38334 -- macros y constantes -- MODIFICADO
#define LIMITE_38334 38534
#define FACTOR_38334 6

int aplicar_limite38334(int valor) {
    if (valor > LIMITE_38334) return LIMITE_38334;
    return valor * FACTOR_38334;
}
