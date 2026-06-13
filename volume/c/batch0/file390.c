// fichero 390 -- macros y constantes
#define LIMITE_390 490
#define FACTOR_390 1

int aplicar_limite390(int valor) {
    if (valor > LIMITE_390) return LIMITE_390;
    return valor * FACTOR_390;
}
