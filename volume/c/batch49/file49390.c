// fichero 49390 -- macros y constantes
#define LIMITE_49390 49490
#define FACTOR_49390 1

int aplicar_limite49390(int valor) {
    if (valor > LIMITE_49390) return LIMITE_49390;
    return valor * FACTOR_49390;
}
