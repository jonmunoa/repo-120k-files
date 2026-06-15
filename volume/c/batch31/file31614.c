// fichero 31614 -- macros y constantes -- MODIFICADO
#define LIMITE_31614 31814
#define FACTOR_31614 6

int aplicar_limite31614(int valor) {
    if (valor > LIMITE_31614) return LIMITE_31614;
    return valor * FACTOR_31614;
}
