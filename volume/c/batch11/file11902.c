// fichero 11902 -- macros y constantes -- MODIFICADO
#define LIMITE_11902 12102
#define FACTOR_11902 4

int aplicar_limite11902(int valor) {
    if (valor > LIMITE_11902) return LIMITE_11902;
    return valor * FACTOR_11902;
}
