// fichero 39050 -- macros y constantes
#define LIMITE_39050 39150
#define FACTOR_39050 1

int aplicar_limite39050(int valor) {
    if (valor > LIMITE_39050) return LIMITE_39050;
    return valor * FACTOR_39050;
}
