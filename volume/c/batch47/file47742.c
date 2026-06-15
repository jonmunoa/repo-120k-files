// fichero 47742 -- macros y constantes -- MODIFICADO
#define LIMITE_47742 47942
#define FACTOR_47742 4

int aplicar_limite47742(int valor) {
    if (valor > LIMITE_47742) return LIMITE_47742;
    return valor * FACTOR_47742;
}
