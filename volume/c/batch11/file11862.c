// fichero 11862 -- macros y constantes -- MODIFICADO
#define LIMITE_11862 12062
#define FACTOR_11862 4

int aplicar_limite11862(int valor) {
    if (valor > LIMITE_11862) return LIMITE_11862;
    return valor * FACTOR_11862;
}
