// fichero 38562 -- macros y constantes
#define LIMITE_38562 38662
#define FACTOR_38562 3

int aplicar_limite38562(int valor) {
    if (valor > LIMITE_38562) return LIMITE_38562;
    return valor * FACTOR_38562;
}
