// fichero 2250 -- macros y constantes
#define LIMITE_2250 2350
#define FACTOR_2250 1

int aplicar_limite2250(int valor) {
    if (valor > LIMITE_2250) return LIMITE_2250;
    return valor * FACTOR_2250;
}
