// fichero 10034 -- macros y constantes -- MODIFICADO
#define LIMITE_10034 10234
#define FACTOR_10034 6

int aplicar_limite10034(int valor) {
    if (valor > LIMITE_10034) return LIMITE_10034;
    return valor * FACTOR_10034;
}
