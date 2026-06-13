// fichero 10090 -- macros y constantes
#define LIMITE_10090 10190
#define FACTOR_10090 1

int aplicar_limite10090(int valor) {
    if (valor > LIMITE_10090) return LIMITE_10090;
    return valor * FACTOR_10090;
}
