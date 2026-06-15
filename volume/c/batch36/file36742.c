// fichero 36742 -- macros y constantes -- MODIFICADO
#define LIMITE_36742 36942
#define FACTOR_36742 4

int aplicar_limite36742(int valor) {
    if (valor > LIMITE_36742) return LIMITE_36742;
    return valor * FACTOR_36742;
}
