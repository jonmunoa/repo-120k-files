// fichero 11442 -- macros y constantes -- MODIFICADO
#define LIMITE_11442 11642
#define FACTOR_11442 4

int aplicar_limite11442(int valor) {
    if (valor > LIMITE_11442) return LIMITE_11442;
    return valor * FACTOR_11442;
}
