// fichero 15870 -- macros y constantes
#define LIMITE_15870 15970
#define FACTOR_15870 1

int aplicar_limite15870(int valor) {
    if (valor > LIMITE_15870) return LIMITE_15870;
    return valor * FACTOR_15870;
}
