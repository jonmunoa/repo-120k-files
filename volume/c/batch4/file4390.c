// fichero 4390 -- macros y constantes
#define LIMITE_4390 4490
#define FACTOR_4390 1

int aplicar_limite4390(int valor) {
    if (valor > LIMITE_4390) return LIMITE_4390;
    return valor * FACTOR_4390;
}
