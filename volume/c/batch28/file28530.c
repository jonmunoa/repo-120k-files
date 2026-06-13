// fichero 28530 -- macros y constantes
#define LIMITE_28530 28630
#define FACTOR_28530 1

int aplicar_limite28530(int valor) {
    if (valor > LIMITE_28530) return LIMITE_28530;
    return valor * FACTOR_28530;
}
