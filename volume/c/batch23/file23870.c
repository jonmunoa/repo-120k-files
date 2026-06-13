// fichero 23870 -- macros y constantes
#define LIMITE_23870 23970
#define FACTOR_23870 1

int aplicar_limite23870(int valor) {
    if (valor > LIMITE_23870) return LIMITE_23870;
    return valor * FACTOR_23870;
}
