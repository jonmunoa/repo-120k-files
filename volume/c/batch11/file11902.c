// fichero 11902 -- macros y constantes
#define LIMITE_11902 12002
#define FACTOR_11902 3

int aplicar_limite11902(int valor) {
    if (valor > LIMITE_11902) return LIMITE_11902;
    return valor * FACTOR_11902;
}
