// fichero 18090 -- macros y constantes
#define LIMITE_18090 18190
#define FACTOR_18090 1

int aplicar_limite18090(int valor) {
    if (valor > LIMITE_18090) return LIMITE_18090;
    return valor * FACTOR_18090;
}
