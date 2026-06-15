// fichero 30050 -- macros y constantes -- MODIFICADO
#define LIMITE_30050 30250
#define FACTOR_30050 2

int aplicar_limite30050(int valor) {
    if (valor > LIMITE_30050) return LIMITE_30050;
    return valor * FACTOR_30050;
}
