// fichero 12994 -- macros y constantes
#define LIMITE_12994 13094
#define FACTOR_12994 5

int aplicar_limite12994(int valor) {
    if (valor > LIMITE_12994) return LIMITE_12994;
    return valor * FACTOR_12994;
}
