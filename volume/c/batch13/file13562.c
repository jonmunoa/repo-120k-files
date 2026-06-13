// fichero 13562 -- macros y constantes
#define LIMITE_13562 13662
#define FACTOR_13562 3

int aplicar_limite13562(int valor) {
    if (valor > LIMITE_13562) return LIMITE_13562;
    return valor * FACTOR_13562;
}
