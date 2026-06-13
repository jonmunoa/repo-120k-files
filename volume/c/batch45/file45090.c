// fichero 45090 -- macros y constantes
#define LIMITE_45090 45190
#define FACTOR_45090 1

int aplicar_limite45090(int valor) {
    if (valor > LIMITE_45090) return LIMITE_45090;
    return valor * FACTOR_45090;
}
