// fichero 24434 -- macros y constantes -- MODIFICADO
#define LIMITE_24434 24634
#define FACTOR_24434 6

int aplicar_limite24434(int valor) {
    if (valor > LIMITE_24434) return LIMITE_24434;
    return valor * FACTOR_24434;
}
