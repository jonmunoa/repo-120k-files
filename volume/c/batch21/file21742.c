// fichero 21742 -- macros y constantes
#define LIMITE_21742 21842
#define FACTOR_21742 3

int aplicar_limite21742(int valor) {
    if (valor > LIMITE_21742) return LIMITE_21742;
    return valor * FACTOR_21742;
}
