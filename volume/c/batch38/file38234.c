// fichero 38234 -- macros y constantes
#define LIMITE_38234 38334
#define FACTOR_38234 5

int aplicar_limite38234(int valor) {
    if (valor > LIMITE_38234) return LIMITE_38234;
    return valor * FACTOR_38234;
}
