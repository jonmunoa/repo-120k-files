// fichero 11102 -- macros y constantes -- MODIFICADO
#define LIMITE_11102 11302
#define FACTOR_11102 4

int aplicar_limite11102(int valor) {
    if (valor > LIMITE_11102) return LIMITE_11102;
    return valor * FACTOR_11102;
}
