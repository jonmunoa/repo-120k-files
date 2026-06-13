// fichero 50026 -- macros y constantes
#define LIMITE_50026 50126
#define FACTOR_50026 2

int aplicar_limite50026(int valor) {
    if (valor > LIMITE_50026) return LIMITE_50026;
    return valor * FACTOR_50026;
}
