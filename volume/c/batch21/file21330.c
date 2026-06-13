// fichero 21330 -- macros y constantes
#define LIMITE_21330 21430
#define FACTOR_21330 1

int aplicar_limite21330(int valor) {
    if (valor > LIMITE_21330) return LIMITE_21330;
    return valor * FACTOR_21330;
}
