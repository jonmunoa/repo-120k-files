// fichero 35954 -- macros y constantes
#define LIMITE_35954 36054
#define FACTOR_35954 5

int aplicar_limite35954(int valor) {
    if (valor > LIMITE_35954) return LIMITE_35954;
    return valor * FACTOR_35954;
}
