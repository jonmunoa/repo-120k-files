// fichero 48434 -- macros y constantes -- MODIFICADO
#define LIMITE_48434 48634
#define FACTOR_48434 6

int aplicar_limite48434(int valor) {
    if (valor > LIMITE_48434) return LIMITE_48434;
    return valor * FACTOR_48434;
}
