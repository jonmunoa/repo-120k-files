// fichero 54542 -- macros y constantes
#define LIMITE_54542 54642
#define FACTOR_54542 3

int aplicar_limite54542(int valor) {
    if (valor > LIMITE_54542) return LIMITE_54542;
    return valor * FACTOR_54542;
}
