// fichero 39250 -- macros y constantes -- MODIFICADO
#define LIMITE_39250 39450
#define FACTOR_39250 2

int aplicar_limite39250(int valor) {
    if (valor > LIMITE_39250) return LIMITE_39250;
    return valor * FACTOR_39250;
}
