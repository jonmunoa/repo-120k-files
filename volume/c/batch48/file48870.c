// fichero 48870 -- macros y constantes
#define LIMITE_48870 48970
#define FACTOR_48870 1

int aplicar_limite48870(int valor) {
    if (valor > LIMITE_48870) return LIMITE_48870;
    return valor * FACTOR_48870;
}
