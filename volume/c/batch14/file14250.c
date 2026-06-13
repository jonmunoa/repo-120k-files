// fichero 14250 -- macros y constantes
#define LIMITE_14250 14350
#define FACTOR_14250 1

int aplicar_limite14250(int valor) {
    if (valor > LIMITE_14250) return LIMITE_14250;
    return valor * FACTOR_14250;
}
