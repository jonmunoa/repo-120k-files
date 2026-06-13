// fichero 22390 -- macros y constantes
#define LIMITE_22390 22490
#define FACTOR_22390 1

int aplicar_limite22390(int valor) {
    if (valor > LIMITE_22390) return LIMITE_22390;
    return valor * FACTOR_22390;
}
