// fichero 30390 -- macros y constantes -- MODIFICADO
#define LIMITE_30390 30590
#define FACTOR_30390 2

int aplicar_limite30390(int valor) {
    if (valor > LIMITE_30390) return LIMITE_30390;
    return valor * FACTOR_30390;
}
