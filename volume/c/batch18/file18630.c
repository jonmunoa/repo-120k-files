// fichero 18630 -- macros y constantes
#define LIMITE_18630 18730
#define FACTOR_18630 1

int aplicar_limite18630(int valor) {
    if (valor > LIMITE_18630) return LIMITE_18630;
    return valor * FACTOR_18630;
}
