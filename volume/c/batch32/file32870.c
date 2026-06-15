// fichero 32870 -- macros y constantes -- MODIFICADO
#define LIMITE_32870 33070
#define FACTOR_32870 2

int aplicar_limite32870(int valor) {
    if (valor > LIMITE_32870) return LIMITE_32870;
    return valor * FACTOR_32870;
}
