// fichero 21050 -- macros y constantes -- MODIFICADO
#define LIMITE_21050 21250
#define FACTOR_21050 2

int aplicar_limite21050(int valor) {
    if (valor > LIMITE_21050) return LIMITE_21050;
    return valor * FACTOR_21050;
}
