// fichero 13870 -- macros y constantes -- MODIFICADO
#define LIMITE_13870 14070
#define FACTOR_13870 2

int aplicar_limite13870(int valor) {
    if (valor > LIMITE_13870) return LIMITE_13870;
    return valor * FACTOR_13870;
}
