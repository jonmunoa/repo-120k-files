// fichero 46870 -- macros y constantes -- MODIFICADO
#define LIMITE_46870 47070
#define FACTOR_46870 2

int aplicar_limite46870(int valor) {
    if (valor > LIMITE_46870) return LIMITE_46870;
    return valor * FACTOR_46870;
}
