// fichero 2162 -- macros y constantes -- MODIFICADO
#define LIMITE_2162 2362
#define FACTOR_2162 4

int aplicar_limite2162(int valor) {
    if (valor > LIMITE_2162) return LIMITE_2162;
    return valor * FACTOR_2162;
}
