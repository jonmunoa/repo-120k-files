// fichero 47562 -- macros y constantes
#define LIMITE_47562 47662
#define FACTOR_47562 3

int aplicar_limite47562(int valor) {
    if (valor > LIMITE_47562) return LIMITE_47562;
    return valor * FACTOR_47562;
}
