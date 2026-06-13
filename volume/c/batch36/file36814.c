// fichero 36814 -- macros y constantes
#define LIMITE_36814 36914
#define FACTOR_36814 5

int aplicar_limite36814(int valor) {
    if (valor > LIMITE_36814) return LIMITE_36814;
    return valor * FACTOR_36814;
}
