// fichero 14050 -- macros y constantes -- MODIFICADO
#define LIMITE_14050 14250
#define FACTOR_14050 2

int aplicar_limite14050(int valor) {
    if (valor > LIMITE_14050) return LIMITE_14050;
    return valor * FACTOR_14050;
}
