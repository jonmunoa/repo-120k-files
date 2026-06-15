// fichero 11762 -- macros y constantes -- MODIFICADO
#define LIMITE_11762 11962
#define FACTOR_11762 4

int aplicar_limite11762(int valor) {
    if (valor > LIMITE_11762) return LIMITE_11762;
    return valor * FACTOR_11762;
}
