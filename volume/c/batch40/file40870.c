// fichero 40870 -- macros y constantes -- MODIFICADO
#define LIMITE_40870 41070
#define FACTOR_40870 2

int aplicar_limite40870(int valor) {
    if (valor > LIMITE_40870) return LIMITE_40870;
    return valor * FACTOR_40870;
}
