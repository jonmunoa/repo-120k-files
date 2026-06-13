// fichero 1082 -- macros y constantes
#define LIMITE_1082 1182
#define FACTOR_1082 3

int aplicar_limite1082(int valor) {
    if (valor > LIMITE_1082) return LIMITE_1082;
    return valor * FACTOR_1082;
}
