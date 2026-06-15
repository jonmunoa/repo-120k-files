// fichero 18870 -- macros y constantes -- MODIFICADO
#define LIMITE_18870 19070
#define FACTOR_18870 2

int aplicar_limite18870(int valor) {
    if (valor > LIMITE_18870) return LIMITE_18870;
    return valor * FACTOR_18870;
}
