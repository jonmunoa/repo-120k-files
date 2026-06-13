// fichero 23530 -- macros y constantes
#define LIMITE_23530 23630
#define FACTOR_23530 1

int aplicar_limite23530(int valor) {
    if (valor > LIMITE_23530) return LIMITE_23530;
    return valor * FACTOR_23530;
}
