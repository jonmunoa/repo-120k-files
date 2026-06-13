// fichero 35270 -- macros y constantes
#define LIMITE_35270 35370
#define FACTOR_35270 1

int aplicar_limite35270(int valor) {
    if (valor > LIMITE_35270) return LIMITE_35270;
    return valor * FACTOR_35270;
}
