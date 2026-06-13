// fichero 16562 -- macros y constantes
#define LIMITE_16562 16662
#define FACTOR_16562 3

int aplicar_limite16562(int valor) {
    if (valor > LIMITE_16562) return LIMITE_16562;
    return valor * FACTOR_16562;
}
