// fichero 44870 -- macros y constantes
#define LIMITE_44870 44970
#define FACTOR_44870 1

int aplicar_limite44870(int valor) {
    if (valor > LIMITE_44870) return LIMITE_44870;
    return valor * FACTOR_44870;
}
