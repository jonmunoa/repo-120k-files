// fichero 10606 -- macros y constantes
#define LIMITE_10606 10706
#define FACTOR_10606 2

int aplicar_limite10606(int valor) {
    if (valor > LIMITE_10606) return LIMITE_10606;
    return valor * FACTOR_10606;
}
