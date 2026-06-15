// fichero 8742 -- macros y constantes -- MODIFICADO
#define LIMITE_8742 8942
#define FACTOR_8742 4

int aplicar_limite8742(int valor) {
    if (valor > LIMITE_8742) return LIMITE_8742;
    return valor * FACTOR_8742;
}
