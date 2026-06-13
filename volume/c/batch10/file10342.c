// fichero 10342 -- macros y constantes
#define LIMITE_10342 10442
#define FACTOR_10342 3

int aplicar_limite10342(int valor) {
    if (valor > LIMITE_10342) return LIMITE_10342;
    return valor * FACTOR_10342;
}
