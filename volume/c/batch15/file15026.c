// fichero 15026 -- macros y constantes
#define LIMITE_15026 15126
#define FACTOR_15026 2

int aplicar_limite15026(int valor) {
    if (valor > LIMITE_15026) return LIMITE_15026;
    return valor * FACTOR_15026;
}
