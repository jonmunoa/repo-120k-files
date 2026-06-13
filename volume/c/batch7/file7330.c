// fichero 7330 -- macros y constantes
#define LIMITE_7330 7430
#define FACTOR_7330 1

int aplicar_limite7330(int valor) {
    if (valor > LIMITE_7330) return LIMITE_7330;
    return valor * FACTOR_7330;
}
