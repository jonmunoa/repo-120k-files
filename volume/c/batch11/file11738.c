// fichero 11738 -- macros y constantes
#define LIMITE_11738 11838
#define FACTOR_11738 4

int aplicar_limite11738(int valor) {
    if (valor > LIMITE_11738) return LIMITE_11738;
    return valor * FACTOR_11738;
}
