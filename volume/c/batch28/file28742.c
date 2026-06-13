// fichero 28742 -- macros y constantes
#define LIMITE_28742 28842
#define FACTOR_28742 3

int aplicar_limite28742(int valor) {
    if (valor > LIMITE_28742) return LIMITE_28742;
    return valor * FACTOR_28742;
}
