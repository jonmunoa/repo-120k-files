// fichero 31026 -- macros y constantes
#define LIMITE_31026 31126
#define FACTOR_31026 2

int aplicar_limite31026(int valor) {
    if (valor > LIMITE_31026) return LIMITE_31026;
    return valor * FACTOR_31026;
}
