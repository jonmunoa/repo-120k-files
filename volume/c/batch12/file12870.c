// fichero 12870 -- macros y constantes
#define LIMITE_12870 12970
#define FACTOR_12870 1

int aplicar_limite12870(int valor) {
    if (valor > LIMITE_12870) return LIMITE_12870;
    return valor * FACTOR_12870;
}
