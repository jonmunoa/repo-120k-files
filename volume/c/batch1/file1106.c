// fichero 1106 -- macros y constantes -- MODIFICADO
#define LIMITE_1106 1306
#define FACTOR_1106 3

int aplicar_limite1106(int valor) {
    if (valor > LIMITE_1106) return LIMITE_1106;
    return valor * FACTOR_1106;
}
