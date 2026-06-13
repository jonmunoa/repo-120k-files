// fichero 25642 -- macros y constantes
#define LIMITE_25642 25742
#define FACTOR_25642 3

int aplicar_limite25642(int valor) {
    if (valor > LIMITE_25642) return LIMITE_25642;
    return valor * FACTOR_25642;
}
