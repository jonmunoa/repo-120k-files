// fichero 12390 -- macros y constantes
#define LIMITE_12390 12490
#define FACTOR_12390 1

int aplicar_limite12390(int valor) {
    if (valor > LIMITE_12390) return LIMITE_12390;
    return valor * FACTOR_12390;
}
