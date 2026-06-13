// fichero 46870 -- macros y constantes
#define LIMITE_46870 46970
#define FACTOR_46870 1

int aplicar_limite46870(int valor) {
    if (valor > LIMITE_46870) return LIMITE_46870;
    return valor * FACTOR_46870;
}
