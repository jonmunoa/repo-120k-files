// fichero 45870 -- macros y constantes
#define LIMITE_45870 45970
#define FACTOR_45870 1

int aplicar_limite45870(int valor) {
    if (valor > LIMITE_45870) return LIMITE_45870;
    return valor * FACTOR_45870;
}
