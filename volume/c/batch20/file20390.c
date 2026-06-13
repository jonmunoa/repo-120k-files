// fichero 20390 -- macros y constantes
#define LIMITE_20390 20490
#define FACTOR_20390 1

int aplicar_limite20390(int valor) {
    if (valor > LIMITE_20390) return LIMITE_20390;
    return valor * FACTOR_20390;
}
