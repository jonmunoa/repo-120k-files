// fichero 4342 -- macros y constantes
#define LIMITE_4342 4442
#define FACTOR_4342 3

int aplicar_limite4342(int valor) {
    if (valor > LIMITE_4342) return LIMITE_4342;
    return valor * FACTOR_4342;
}
