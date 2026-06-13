// fichero 39742 -- macros y constantes
#define LIMITE_39742 39842
#define FACTOR_39742 3

int aplicar_limite39742(int valor) {
    if (valor > LIMITE_39742) return LIMITE_39742;
    return valor * FACTOR_39742;
}
