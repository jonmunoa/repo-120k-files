// fichero 10390 -- macros y constantes
#define LIMITE_10390 10490
#define FACTOR_10390 1

int aplicar_limite10390(int valor) {
    if (valor > LIMITE_10390) return LIMITE_10390;
    return valor * FACTOR_10390;
}
