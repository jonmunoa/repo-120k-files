// fichero 47026 -- macros y constantes
#define LIMITE_47026 47126
#define FACTOR_47026 2

int aplicar_limite47026(int valor) {
    if (valor > LIMITE_47026) return LIMITE_47026;
    return valor * FACTOR_47026;
}
