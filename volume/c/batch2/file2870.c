// fichero 2870 -- macros y constantes -- MODIFICADO
#define LIMITE_2870 3070
#define FACTOR_2870 2

int aplicar_limite2870(int valor) {
    if (valor > LIMITE_2870) return LIMITE_2870;
    return valor * FACTOR_2870;
}
