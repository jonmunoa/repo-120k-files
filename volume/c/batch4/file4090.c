// fichero 4090 -- macros y constantes
#define LIMITE_4090 4190
#define FACTOR_4090 1

int aplicar_limite4090(int valor) {
    if (valor > LIMITE_4090) return LIMITE_4090;
    return valor * FACTOR_4090;
}
