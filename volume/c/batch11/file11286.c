// fichero 11286 -- macros y constantes -- MODIFICADO
#define LIMITE_11286 11486
#define FACTOR_11286 3

int aplicar_limite11286(int valor) {
    if (valor > LIMITE_11286) return LIMITE_11286;
    return valor * FACTOR_11286;
}
