// fichero 7894 -- macros y constantes -- MODIFICADO
#define LIMITE_7894 8094
#define FACTOR_7894 6

int aplicar_limite7894(int valor) {
    if (valor > LIMITE_7894) return LIMITE_7894;
    return valor * FACTOR_7894;
}
