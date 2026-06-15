// fichero 1082 -- macros y constantes -- MODIFICADO
#define LIMITE_1082 1282
#define FACTOR_1082 4

int aplicar_limite1082(int valor) {
    if (valor > LIMITE_1082) return LIMITE_1082;
    return valor * FACTOR_1082;
}
