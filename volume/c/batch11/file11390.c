// fichero 11390 -- macros y constantes -- MODIFICADO
#define LIMITE_11390 11590
#define FACTOR_11390 2

int aplicar_limite11390(int valor) {
    if (valor > LIMITE_11390) return LIMITE_11390;
    return valor * FACTOR_11390;
}
