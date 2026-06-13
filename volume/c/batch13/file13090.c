// fichero 13090 -- macros y constantes
#define LIMITE_13090 13190
#define FACTOR_13090 1

int aplicar_limite13090(int valor) {
    if (valor > LIMITE_13090) return LIMITE_13090;
    return valor * FACTOR_13090;
}
