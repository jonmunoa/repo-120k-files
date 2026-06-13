// fichero 21390 -- macros y constantes
#define LIMITE_21390 21490
#define FACTOR_21390 1

int aplicar_limite21390(int valor) {
    if (valor > LIMITE_21390) return LIMITE_21390;
    return valor * FACTOR_21390;
}
