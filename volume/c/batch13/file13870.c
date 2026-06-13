// fichero 13870 -- macros y constantes
#define LIMITE_13870 13970
#define FACTOR_13870 1

int aplicar_limite13870(int valor) {
    if (valor > LIMITE_13870) return LIMITE_13870;
    return valor * FACTOR_13870;
}
