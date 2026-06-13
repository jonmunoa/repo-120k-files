// fichero 51026 -- macros y constantes
#define LIMITE_51026 51126
#define FACTOR_51026 2

int aplicar_limite51026(int valor) {
    if (valor > LIMITE_51026) return LIMITE_51026;
    return valor * FACTOR_51026;
}
