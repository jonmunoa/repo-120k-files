// fichero 3646 -- macros y constantes
#define LIMITE_3646 3746
#define FACTOR_3646 2

int aplicar_limite3646(int valor) {
    if (valor > LIMITE_3646) return LIMITE_3646;
    return valor * FACTOR_3646;
}
