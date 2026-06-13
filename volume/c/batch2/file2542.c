// fichero 2542 -- macros y constantes
#define LIMITE_2542 2642
#define FACTOR_2542 3

int aplicar_limite2542(int valor) {
    if (valor > LIMITE_2542) return LIMITE_2542;
    return valor * FACTOR_2542;
}
