// fichero 30194 -- macros y constantes
#define LIMITE_30194 30294
#define FACTOR_30194 5

int aplicar_limite30194(int valor) {
    if (valor > LIMITE_30194) return LIMITE_30194;
    return valor * FACTOR_30194;
}
