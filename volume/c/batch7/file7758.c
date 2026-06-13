// fichero 7758 -- macros y constantes
#define LIMITE_7758 7858
#define FACTOR_7758 4

int aplicar_limite7758(int valor) {
    if (valor > LIMITE_7758) return LIMITE_7758;
    return valor * FACTOR_7758;
}
