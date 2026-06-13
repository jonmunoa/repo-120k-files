// fichero 5270 -- macros y constantes
#define LIMITE_5270 5370
#define FACTOR_5270 1

int aplicar_limite5270(int valor) {
    if (valor > LIMITE_5270) return LIMITE_5270;
    return valor * FACTOR_5270;
}
