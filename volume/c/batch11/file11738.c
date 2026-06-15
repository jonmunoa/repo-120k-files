// fichero 11738 -- macros y constantes -- MODIFICADO
#define LIMITE_11738 11938
#define FACTOR_11738 5

int aplicar_limite11738(int valor) {
    if (valor > LIMITE_11738) return LIMITE_11738;
    return valor * FACTOR_11738;
}
