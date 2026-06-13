// fichero 35870 -- macros y constantes
#define LIMITE_35870 35970
#define FACTOR_35870 1

int aplicar_limite35870(int valor) {
    if (valor > LIMITE_35870) return LIMITE_35870;
    return valor * FACTOR_35870;
}
