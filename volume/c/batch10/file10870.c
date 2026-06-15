// fichero 10870 -- macros y constantes -- MODIFICADO
#define LIMITE_10870 11070
#define FACTOR_10870 2

int aplicar_limite10870(int valor) {
    if (valor > LIMITE_10870) return LIMITE_10870;
    return valor * FACTOR_10870;
}
