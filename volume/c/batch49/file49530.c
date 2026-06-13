// fichero 49530 -- macros y constantes
#define LIMITE_49530 49630
#define FACTOR_49530 1

int aplicar_limite49530(int valor) {
    if (valor > LIMITE_49530) return LIMITE_49530;
    return valor * FACTOR_49530;
}
