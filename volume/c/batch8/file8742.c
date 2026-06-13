// fichero 8742 -- macros y constantes
#define LIMITE_8742 8842
#define FACTOR_8742 3

int aplicar_limite8742(int valor) {
    if (valor > LIMITE_8742) return LIMITE_8742;
    return valor * FACTOR_8742;
}
