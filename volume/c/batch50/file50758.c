// fichero 50758 -- macros y constantes
#define LIMITE_50758 50858
#define FACTOR_50758 4

int aplicar_limite50758(int valor) {
    if (valor > LIMITE_50758) return LIMITE_50758;
    return valor * FACTOR_50758;
}
