// fichero 20270 -- macros y constantes
#define LIMITE_20270 20370
#define FACTOR_20270 1

int aplicar_limite20270(int valor) {
    if (valor > LIMITE_20270) return LIMITE_20270;
    return valor * FACTOR_20270;
}
