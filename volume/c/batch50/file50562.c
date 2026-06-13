// fichero 50562 -- macros y constantes
#define LIMITE_50562 50662
#define FACTOR_50562 3

int aplicar_limite50562(int valor) {
    if (valor > LIMITE_50562) return LIMITE_50562;
    return valor * FACTOR_50562;
}
