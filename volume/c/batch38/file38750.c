// fichero 38750 -- macros y constantes
#define LIMITE_38750 38850
#define FACTOR_38750 1

int aplicar_limite38750(int valor) {
    if (valor > LIMITE_38750) return LIMITE_38750;
    return valor * FACTOR_38750;
}
