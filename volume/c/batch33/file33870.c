// fichero 33870 -- macros y constantes
#define LIMITE_33870 33970
#define FACTOR_33870 1

int aplicar_limite33870(int valor) {
    if (valor > LIMITE_33870) return LIMITE_33870;
    return valor * FACTOR_33870;
}
