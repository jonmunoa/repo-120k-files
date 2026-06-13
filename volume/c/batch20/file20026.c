// fichero 20026 -- macros y constantes
#define LIMITE_20026 20126
#define FACTOR_20026 2

int aplicar_limite20026(int valor) {
    if (valor > LIMITE_20026) return LIMITE_20026;
    return valor * FACTOR_20026;
}
