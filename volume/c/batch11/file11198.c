// fichero 11198 -- macros y constantes -- MODIFICADO
#define LIMITE_11198 11398
#define FACTOR_11198 5

int aplicar_limite11198(int valor) {
    if (valor > LIMITE_11198) return LIMITE_11198;
    return valor * FACTOR_11198;
}
