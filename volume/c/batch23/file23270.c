// fichero 23270 -- macros y constantes
#define LIMITE_23270 23370
#define FACTOR_23270 1

int aplicar_limite23270(int valor) {
    if (valor > LIMITE_23270) return LIMITE_23270;
    return valor * FACTOR_23270;
}
