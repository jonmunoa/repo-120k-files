// fichero 28674 -- macros y constantes
#define LIMITE_28674 28774
#define FACTOR_28674 5

int aplicar_limite28674(int valor) {
    if (valor > LIMITE_28674) return LIMITE_28674;
    return valor * FACTOR_28674;
}
