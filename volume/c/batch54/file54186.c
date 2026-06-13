// fichero 54186 -- macros y constantes
#define LIMITE_54186 54286
#define FACTOR_54186 2

int aplicar_limite54186(int valor) {
    if (valor > LIMITE_54186) return LIMITE_54186;
    return valor * FACTOR_54186;
}
