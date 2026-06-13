// fichero 42870 -- macros y constantes
#define LIMITE_42870 42970
#define FACTOR_42870 1

int aplicar_limite42870(int valor) {
    if (valor > LIMITE_42870) return LIMITE_42870;
    return valor * FACTOR_42870;
}
