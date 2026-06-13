// fichero 36706 -- macros y constantes
#define LIMITE_36706 36806
#define FACTOR_36706 2

int aplicar_limite36706(int valor) {
    if (valor > LIMITE_36706) return LIMITE_36706;
    return valor * FACTOR_36706;
}
