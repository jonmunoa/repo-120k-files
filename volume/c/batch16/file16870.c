// fichero 16870 -- macros y constantes
#define LIMITE_16870 16970
#define FACTOR_16870 1

int aplicar_limite16870(int valor) {
    if (valor > LIMITE_16870) return LIMITE_16870;
    return valor * FACTOR_16870;
}
