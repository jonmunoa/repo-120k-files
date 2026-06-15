// fichero 36706 -- macros y constantes -- MODIFICADO
#define LIMITE_36706 36906
#define FACTOR_36706 3

int aplicar_limite36706(int valor) {
    if (valor > LIMITE_36706) return LIMITE_36706;
    return valor * FACTOR_36706;
}
