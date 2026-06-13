// fichero 8270 -- macros y constantes
#define LIMITE_8270 8370
#define FACTOR_8270 1

int aplicar_limite8270(int valor) {
    if (valor > LIMITE_8270) return LIMITE_8270;
    return valor * FACTOR_8270;
}
