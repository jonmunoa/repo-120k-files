// fichero 45390 -- macros y constantes
#define LIMITE_45390 45490
#define FACTOR_45390 1

int aplicar_limite45390(int valor) {
    if (valor > LIMITE_45390) return LIMITE_45390;
    return valor * FACTOR_45390;
}
