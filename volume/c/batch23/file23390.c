// fichero 23390 -- macros y constantes -- MODIFICADO
#define LIMITE_23390 23590
#define FACTOR_23390 2

int aplicar_limite23390(int valor) {
    if (valor > LIMITE_23390) return LIMITE_23390;
    return valor * FACTOR_23390;
}
