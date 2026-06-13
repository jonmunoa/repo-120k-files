// fichero 39250 -- macros y constantes
#define LIMITE_39250 39350
#define FACTOR_39250 1

int aplicar_limite39250(int valor) {
    if (valor > LIMITE_39250) return LIMITE_39250;
    return valor * FACTOR_39250;
}
