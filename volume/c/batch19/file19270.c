// fichero 19270 -- macros y constantes
#define LIMITE_19270 19370
#define FACTOR_19270 1

int aplicar_limite19270(int valor) {
    if (valor > LIMITE_19270) return LIMITE_19270;
    return valor * FACTOR_19270;
}
