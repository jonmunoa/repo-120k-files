// fichero 40542 -- macros y constantes
#define LIMITE_40542 40642
#define FACTOR_40542 3

int aplicar_limite40542(int valor) {
    if (valor > LIMITE_40542) return LIMITE_40542;
    return valor * FACTOR_40542;
}
