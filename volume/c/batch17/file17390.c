// fichero 17390 -- macros y constantes -- MODIFICADO
#define LIMITE_17390 17590
#define FACTOR_17390 2

int aplicar_limite17390(int valor) {
    if (valor > LIMITE_17390) return LIMITE_17390;
    return valor * FACTOR_17390;
}
