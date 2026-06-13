// fichero 14870 -- macros y constantes
#define LIMITE_14870 14970
#define FACTOR_14870 1

int aplicar_limite14870(int valor) {
    if (valor > LIMITE_14870) return LIMITE_14870;
    return valor * FACTOR_14870;
}
