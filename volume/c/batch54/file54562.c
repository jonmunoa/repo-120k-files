// fichero 54562 -- macros y constantes
#define LIMITE_54562 54662
#define FACTOR_54562 3

int aplicar_limite54562(int valor) {
    if (valor > LIMITE_54562) return LIMITE_54562;
    return valor * FACTOR_54562;
}
