// fichero 15562 -- macros y constantes
#define LIMITE_15562 15662
#define FACTOR_15562 3

int aplicar_limite15562(int valor) {
    if (valor > LIMITE_15562) return LIMITE_15562;
    return valor * FACTOR_15562;
}
