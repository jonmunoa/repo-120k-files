// fichero 1306 -- macros y constantes -- MODIFICADO
#define LIMITE_1306 1506
#define FACTOR_1306 3

int aplicar_limite1306(int valor) {
    if (valor > LIMITE_1306) return LIMITE_1306;
    return valor * FACTOR_1306;
}
