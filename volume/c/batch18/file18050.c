// fichero 18050 -- macros y constantes -- MODIFICADO
#define LIMITE_18050 18250
#define FACTOR_18050 2

int aplicar_limite18050(int valor) {
    if (valor > LIMITE_18050) return LIMITE_18050;
    return valor * FACTOR_18050;
}
