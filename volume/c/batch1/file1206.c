// fichero 1206 -- macros y constantes -- MODIFICADO
#define LIMITE_1206 1406
#define FACTOR_1206 3

int aplicar_limite1206(int valor) {
    if (valor > LIMITE_1206) return LIMITE_1206;
    return valor * FACTOR_1206;
}
