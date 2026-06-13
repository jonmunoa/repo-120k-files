// fichero 13450 -- macros y constantes
#define LIMITE_13450 13550
#define FACTOR_13450 1

int aplicar_limite13450(int valor) {
    if (valor > LIMITE_13450) return LIMITE_13450;
    return valor * FACTOR_13450;
}
