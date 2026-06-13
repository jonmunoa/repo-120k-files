// fichero 30714 -- macros y constantes
#define LIMITE_30714 30814
#define FACTOR_30714 5

int aplicar_limite30714(int valor) {
    if (valor > LIMITE_30714) return LIMITE_30714;
    return valor * FACTOR_30714;
}
