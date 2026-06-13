// fichero 38530 -- macros y constantes
#define LIMITE_38530 38630
#define FACTOR_38530 1

int aplicar_limite38530(int valor) {
    if (valor > LIMITE_38530) return LIMITE_38530;
    return valor * FACTOR_38530;
}
