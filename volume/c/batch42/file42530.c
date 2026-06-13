// fichero 42530 -- macros y constantes
#define LIMITE_42530 42630
#define FACTOR_42530 1

int aplicar_limite42530(int valor) {
    if (valor > LIMITE_42530) return LIMITE_42530;
    return valor * FACTOR_42530;
}
