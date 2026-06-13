// fichero 30142 -- macros y constantes
#define LIMITE_30142 30242
#define FACTOR_30142 3

int aplicar_limite30142(int valor) {
    if (valor > LIMITE_30142) return LIMITE_30142;
    return valor * FACTOR_30142;
}
