// fichero 26870 -- macros y constantes -- MODIFICADO
#define LIMITE_26870 27070
#define FACTOR_26870 2

int aplicar_limite26870(int valor) {
    if (valor > LIMITE_26870) return LIMITE_26870;
    return valor * FACTOR_26870;
}
