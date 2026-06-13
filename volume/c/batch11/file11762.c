// fichero 11762 -- macros y constantes
#define LIMITE_11762 11862
#define FACTOR_11762 3

int aplicar_limite11762(int valor) {
    if (valor > LIMITE_11762) return LIMITE_11762;
    return valor * FACTOR_11762;
}
