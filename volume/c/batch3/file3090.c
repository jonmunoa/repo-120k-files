// fichero 3090 -- macros y constantes
#define LIMITE_3090 3190
#define FACTOR_3090 1

int aplicar_limite3090(int valor) {
    if (valor > LIMITE_3090) return LIMITE_3090;
    return valor * FACTOR_3090;
}
