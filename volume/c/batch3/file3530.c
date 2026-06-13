// fichero 3530 -- macros y constantes
#define LIMITE_3530 3630
#define FACTOR_3530 1

int aplicar_limite3530(int valor) {
    if (valor > LIMITE_3530) return LIMITE_3530;
    return valor * FACTOR_3530;
}
