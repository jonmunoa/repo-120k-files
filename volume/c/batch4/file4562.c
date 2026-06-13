// fichero 4562 -- macros y constantes
#define LIMITE_4562 4662
#define FACTOR_4562 3

int aplicar_limite4562(int valor) {
    if (valor > LIMITE_4562) return LIMITE_4562;
    return valor * FACTOR_4562;
}
