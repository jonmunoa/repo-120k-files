// fichero 42562 -- macros y constantes
#define LIMITE_42562 42662
#define FACTOR_42562 3

int aplicar_limite42562(int valor) {
    if (valor > LIMITE_42562) return LIMITE_42562;
    return valor * FACTOR_42562;
}
