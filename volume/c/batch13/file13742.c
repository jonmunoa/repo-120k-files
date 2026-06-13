// fichero 13742 -- macros y constantes
#define LIMITE_13742 13842
#define FACTOR_13742 3

int aplicar_limite13742(int valor) {
    if (valor > LIMITE_13742) return LIMITE_13742;
    return valor * FACTOR_13742;
}
