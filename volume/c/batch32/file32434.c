// fichero 32434 -- macros y constantes -- MODIFICADO
#define LIMITE_32434 32634
#define FACTOR_32434 6

int aplicar_limite32434(int valor) {
    if (valor > LIMITE_32434) return LIMITE_32434;
    return valor * FACTOR_32434;
}
