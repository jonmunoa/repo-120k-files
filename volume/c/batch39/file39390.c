// fichero 39390 -- macros y constantes
#define LIMITE_39390 39490
#define FACTOR_39390 1

int aplicar_limite39390(int valor) {
    if (valor > LIMITE_39390) return LIMITE_39390;
    return valor * FACTOR_39390;
}
