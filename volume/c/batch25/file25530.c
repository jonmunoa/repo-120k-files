// fichero 25530 -- macros y constantes
#define LIMITE_25530 25630
#define FACTOR_25530 1

int aplicar_limite25530(int valor) {
    if (valor > LIMITE_25530) return LIMITE_25530;
    return valor * FACTOR_25530;
}
