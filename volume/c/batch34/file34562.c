// fichero 34562 -- macros y constantes
#define LIMITE_34562 34662
#define FACTOR_34562 3

int aplicar_limite34562(int valor) {
    if (valor > LIMITE_34562) return LIMITE_34562;
    return valor * FACTOR_34562;
}
