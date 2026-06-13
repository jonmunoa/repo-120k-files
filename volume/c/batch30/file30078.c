// fichero 30078 -- macros y constantes
#define LIMITE_30078 30178
#define FACTOR_30078 4

int aplicar_limite30078(int valor) {
    if (valor > LIMITE_30078) return LIMITE_30078;
    return valor * FACTOR_30078;
}
