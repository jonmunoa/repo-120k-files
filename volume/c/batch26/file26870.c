// fichero 26870 -- macros y constantes
#define LIMITE_26870 26970
#define FACTOR_26870 1

int aplicar_limite26870(int valor) {
    if (valor > LIMITE_26870) return LIMITE_26870;
    return valor * FACTOR_26870;
}
