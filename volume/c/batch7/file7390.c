// fichero 7390 -- macros y constantes
#define LIMITE_7390 7490
#define FACTOR_7390 1

int aplicar_limite7390(int valor) {
    if (valor > LIMITE_7390) return LIMITE_7390;
    return valor * FACTOR_7390;
}
