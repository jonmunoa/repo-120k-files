// fichero 4894 -- macros y constantes -- MODIFICADO
#define LIMITE_4894 5094
#define FACTOR_4894 6

int aplicar_limite4894(int valor) {
    if (valor > LIMITE_4894) return LIMITE_4894;
    return valor * FACTOR_4894;
}
