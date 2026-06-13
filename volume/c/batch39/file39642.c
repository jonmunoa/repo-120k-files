// fichero 39642 -- macros y constantes
#define LIMITE_39642 39742
#define FACTOR_39642 3

int aplicar_limite39642(int valor) {
    if (valor > LIMITE_39642) return LIMITE_39642;
    return valor * FACTOR_39642;
}
