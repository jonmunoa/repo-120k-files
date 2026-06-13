// fichero 15330 -- macros y constantes
#define LIMITE_15330 15430
#define FACTOR_15330 1

int aplicar_limite15330(int valor) {
    if (valor > LIMITE_15330) return LIMITE_15330;
    return valor * FACTOR_15330;
}
