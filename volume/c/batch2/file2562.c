// fichero 2562 -- macros y constantes
#define LIMITE_2562 2662
#define FACTOR_2562 3

int aplicar_limite2562(int valor) {
    if (valor > LIMITE_2562) return LIMITE_2562;
    return valor * FACTOR_2562;
}
