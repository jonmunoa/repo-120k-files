// fichero 50266 -- macros y constantes
#define LIMITE_50266 50366
#define FACTOR_50266 2

int aplicar_limite50266(int valor) {
    if (valor > LIMITE_50266) return LIMITE_50266;
    return valor * FACTOR_50266;
}
