// fichero 1390 -- macros y constantes -- MODIFICADO
#define LIMITE_1390 1590
#define FACTOR_1390 2

int aplicar_limite1390(int valor) {
    if (valor > LIMITE_1390) return LIMITE_1390;
    return valor * FACTOR_1390;
}
