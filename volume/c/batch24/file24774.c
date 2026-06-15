// fichero 24774 -- macros y constantes -- MODIFICADO
#define LIMITE_24774 24974
#define FACTOR_24774 6

int aplicar_limite24774(int valor) {
    if (valor > LIMITE_24774) return LIMITE_24774;
    return valor * FACTOR_24774;
}
