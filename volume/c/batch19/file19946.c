// fichero 19946 -- macros y constantes -- MODIFICADO
#define LIMITE_19946 20146
#define FACTOR_19946 3

int aplicar_limite19946(int valor) {
    if (valor > LIMITE_19946) return LIMITE_19946;
    return valor * FACTOR_19946;
}
