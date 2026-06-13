// fichero 4870 -- macros y constantes
#define LIMITE_4870 4970
#define FACTOR_4870 1

int aplicar_limite4870(int valor) {
    if (valor > LIMITE_4870) return LIMITE_4870;
    return valor * FACTOR_4870;
}
