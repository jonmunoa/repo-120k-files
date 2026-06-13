// fichero 2090 -- macros y constantes
#define LIMITE_2090 2190
#define FACTOR_2090 1

int aplicar_limite2090(int valor) {
    if (valor > LIMITE_2090) return LIMITE_2090;
    return valor * FACTOR_2090;
}
