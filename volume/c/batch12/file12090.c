// fichero 12090 -- macros y constantes
#define LIMITE_12090 12190
#define FACTOR_12090 1

int aplicar_limite12090(int valor) {
    if (valor > LIMITE_12090) return LIMITE_12090;
    return valor * FACTOR_12090;
}
