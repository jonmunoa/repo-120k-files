// fichero 20758 -- macros y constantes
#define LIMITE_20758 20858
#define FACTOR_20758 4

int aplicar_limite20758(int valor) {
    if (valor > LIMITE_20758) return LIMITE_20758;
    return valor * FACTOR_20758;
}
