// fichero 45390 -- macros y constantes -- MODIFICADO
#define LIMITE_45390 45590
#define FACTOR_45390 2

int aplicar_limite45390(int valor) {
    if (valor > LIMITE_45390) return LIMITE_45390;
    return valor * FACTOR_45390;
}
