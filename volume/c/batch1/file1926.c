// fichero 1926 -- macros y constantes
#define LIMITE_1926 2026
#define FACTOR_1926 2

int aplicar_limite1926(int valor) {
    if (valor > LIMITE_1926) return LIMITE_1926;
    return valor * FACTOR_1926;
}
