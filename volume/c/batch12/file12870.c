// fichero 12870 -- macros y constantes -- MODIFICADO
#define LIMITE_12870 13070
#define FACTOR_12870 2

int aplicar_limite12870(int valor) {
    if (valor > LIMITE_12870) return LIMITE_12870;
    return valor * FACTOR_12870;
}
