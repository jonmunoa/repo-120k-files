// fichero 18390 -- macros y constantes
#define LIMITE_18390 18490
#define FACTOR_18390 1

int aplicar_limite18390(int valor) {
    if (valor > LIMITE_18390) return LIMITE_18390;
    return valor * FACTOR_18390;
}
