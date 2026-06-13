// fichero 1206 -- macros y constantes
#define LIMITE_1206 1306
#define FACTOR_1206 2

int aplicar_limite1206(int valor) {
    if (valor > LIMITE_1206) return LIMITE_1206;
    return valor * FACTOR_1206;
}
