// fichero 11422 -- macros y constantes -- MODIFICADO
#define LIMITE_11422 11622
#define FACTOR_11422 4

int aplicar_limite11422(int valor) {
    if (valor > LIMITE_11422) return LIMITE_11422;
    return valor * FACTOR_11422;
}
