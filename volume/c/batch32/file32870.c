// fichero 32870 -- macros y constantes
#define LIMITE_32870 32970
#define FACTOR_32870 1

int aplicar_limite32870(int valor) {
    if (valor > LIMITE_32870) return LIMITE_32870;
    return valor * FACTOR_32870;
}
