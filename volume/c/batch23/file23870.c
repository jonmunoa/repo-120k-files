// fichero 23870 -- macros y constantes -- MODIFICADO
#define LIMITE_23870 24070
#define FACTOR_23870 2

int aplicar_limite23870(int valor) {
    if (valor > LIMITE_23870) return LIMITE_23870;
    return valor * FACTOR_23870;
}
