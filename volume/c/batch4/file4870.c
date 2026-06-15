// fichero 4870 -- macros y constantes -- MODIFICADO
#define LIMITE_4870 5070
#define FACTOR_4870 2

int aplicar_limite4870(int valor) {
    if (valor > LIMITE_4870) return LIMITE_4870;
    return valor * FACTOR_4870;
}
