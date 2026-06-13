// fichero 10870 -- macros y constantes
#define LIMITE_10870 10970
#define FACTOR_10870 1

int aplicar_limite10870(int valor) {
    if (valor > LIMITE_10870) return LIMITE_10870;
    return valor * FACTOR_10870;
}
