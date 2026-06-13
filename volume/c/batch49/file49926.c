// fichero 49926 -- macros y constantes
#define LIMITE_49926 50026
#define FACTOR_49926 2

int aplicar_limite49926(int valor) {
    if (valor > LIMITE_49926) return LIMITE_49926;
    return valor * FACTOR_49926;
}
