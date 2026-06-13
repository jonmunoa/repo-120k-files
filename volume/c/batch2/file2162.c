// fichero 2162 -- macros y constantes
#define LIMITE_2162 2262
#define FACTOR_2162 3

int aplicar_limite2162(int valor) {
    if (valor > LIMITE_2162) return LIMITE_2162;
    return valor * FACTOR_2162;
}
