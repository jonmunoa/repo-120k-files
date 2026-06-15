// fichero 15894 -- macros y constantes -- MODIFICADO
#define LIMITE_15894 16094
#define FACTOR_15894 6

int aplicar_limite15894(int valor) {
    if (valor > LIMITE_15894) return LIMITE_15894;
    return valor * FACTOR_15894;
}
