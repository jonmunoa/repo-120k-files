// fichero 22530 -- macros y constantes
#define LIMITE_22530 22630
#define FACTOR_22530 1

int aplicar_limite22530(int valor) {
    if (valor > LIMITE_22530) return LIMITE_22530;
    return valor * FACTOR_22530;
}
