// fichero 28434 -- macros y constantes -- MODIFICADO
#define LIMITE_28434 28634
#define FACTOR_28434 6

int aplicar_limite28434(int valor) {
    if (valor > LIMITE_28434) return LIMITE_28434;
    return valor * FACTOR_28434;
}
