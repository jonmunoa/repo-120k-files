// fichero 28870 -- macros y constantes
#define LIMITE_28870 28970
#define FACTOR_28870 1

int aplicar_limite28870(int valor) {
    if (valor > LIMITE_28870) return LIMITE_28870;
    return valor * FACTOR_28870;
}
