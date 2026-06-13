// fichero 1330 -- macros y constantes
#define LIMITE_1330 1430
#define FACTOR_1330 1

int aplicar_limite1330(int valor) {
    if (valor > LIMITE_1330) return LIMITE_1330;
    return valor * FACTOR_1330;
}
