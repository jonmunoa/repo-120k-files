// fichero 18870 -- macros y constantes
#define LIMITE_18870 18970
#define FACTOR_18870 1

int aplicar_limite18870(int valor) {
    if (valor > LIMITE_18870) return LIMITE_18870;
    return valor * FACTOR_18870;
}
