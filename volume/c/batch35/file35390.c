// fichero 35390 -- macros y constantes -- MODIFICADO
#define LIMITE_35390 35590
#define FACTOR_35390 2

int aplicar_limite35390(int valor) {
    if (valor > LIMITE_35390) return LIMITE_35390;
    return valor * FACTOR_35390;
}
