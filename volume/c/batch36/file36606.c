// fichero 36606 -- macros y constantes
#define LIMITE_36606 36706
#define FACTOR_36606 2

int aplicar_limite36606(int valor) {
    if (valor > LIMITE_36606) return LIMITE_36606;
    return valor * FACTOR_36606;
}
