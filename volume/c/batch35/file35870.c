// fichero 35870 -- macros y constantes -- MODIFICADO
#define LIMITE_35870 36070
#define FACTOR_35870 2

int aplicar_limite35870(int valor) {
    if (valor > LIMITE_35870) return LIMITE_35870;
    return valor * FACTOR_35870;
}
