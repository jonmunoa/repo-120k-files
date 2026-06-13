// fichero 12562 -- macros y constantes
#define LIMITE_12562 12662
#define FACTOR_12562 3

int aplicar_limite12562(int valor) {
    if (valor > LIMITE_12562) return LIMITE_12562;
    return valor * FACTOR_12562;
}
