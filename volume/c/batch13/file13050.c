// fichero 13050 -- macros y constantes -- MODIFICADO
#define LIMITE_13050 13250
#define FACTOR_13050 2

int aplicar_limite13050(int valor) {
    if (valor > LIMITE_13050) return LIMITE_13050;
    return valor * FACTOR_13050;
}
