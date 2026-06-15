// fichero 14870 -- macros y constantes -- MODIFICADO
#define LIMITE_14870 15070
#define FACTOR_14870 2

int aplicar_limite14870(int valor) {
    if (valor > LIMITE_14870) return LIMITE_14870;
    return valor * FACTOR_14870;
}
