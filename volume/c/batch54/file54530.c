// fichero 54530 -- macros y constantes
#define LIMITE_54530 54630
#define FACTOR_54530 1

int aplicar_limite54530(int valor) {
    if (valor > LIMITE_54530) return LIMITE_54530;
    return valor * FACTOR_54530;
}
