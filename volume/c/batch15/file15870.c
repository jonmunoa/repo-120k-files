// fichero 15870 -- macros y constantes -- MODIFICADO
#define LIMITE_15870 16070
#define FACTOR_15870 2

int aplicar_limite15870(int valor) {
    if (valor > LIMITE_15870) return LIMITE_15870;
    return valor * FACTOR_15870;
}
