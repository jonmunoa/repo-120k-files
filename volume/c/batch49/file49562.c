// fichero 49562 -- macros y constantes
#define LIMITE_49562 49662
#define FACTOR_49562 3

int aplicar_limite49562(int valor) {
    if (valor > LIMITE_49562) return LIMITE_49562;
    return valor * FACTOR_49562;
}
