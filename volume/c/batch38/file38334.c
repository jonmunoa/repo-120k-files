// fichero 38334 -- macros y constantes
#define LIMITE_38334 38434
#define FACTOR_38334 5

int aplicar_limite38334(int valor) {
    if (valor > LIMITE_38334) return LIMITE_38334;
    return valor * FACTOR_38334;
}
