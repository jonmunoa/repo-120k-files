// fichero 16050 -- macros y constantes -- MODIFICADO
#define LIMITE_16050 16250
#define FACTOR_16050 2

int aplicar_limite16050(int valor) {
    if (valor > LIMITE_16050) return LIMITE_16050;
    return valor * FACTOR_16050;
}
