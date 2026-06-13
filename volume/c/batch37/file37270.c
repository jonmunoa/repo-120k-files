// fichero 37270 -- macros y constantes
#define LIMITE_37270 37370
#define FACTOR_37270 1

int aplicar_limite37270(int valor) {
    if (valor > LIMITE_37270) return LIMITE_37270;
    return valor * FACTOR_37270;
}
