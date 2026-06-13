// fichero 50870 -- macros y constantes
#define LIMITE_50870 50970
#define FACTOR_50870 1

int aplicar_limite50870(int valor) {
    if (valor > LIMITE_50870) return LIMITE_50870;
    return valor * FACTOR_50870;
}
