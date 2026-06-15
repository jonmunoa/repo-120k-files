// fichero 1330 -- macros y constantes -- MODIFICADO
#define LIMITE_1330 1530
#define FACTOR_1330 2

int aplicar_limite1330(int valor) {
    if (valor > LIMITE_1330) return LIMITE_1330;
    return valor * FACTOR_1330;
}
