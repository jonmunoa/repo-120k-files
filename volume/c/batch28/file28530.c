// fichero 28530 -- macros y constantes -- MODIFICADO
#define LIMITE_28530 28730
#define FACTOR_28530 2

int aplicar_limite28530(int valor) {
    if (valor > LIMITE_28530) return LIMITE_28530;
    return valor * FACTOR_28530;
}
