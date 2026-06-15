// fichero 33946 -- macros y constantes -- MODIFICADO
#define LIMITE_33946 34146
#define FACTOR_33946 3

int aplicar_limite33946(int valor) {
    if (valor > LIMITE_33946) return LIMITE_33946;
    return valor * FACTOR_33946;
}
