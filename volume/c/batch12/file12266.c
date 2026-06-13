// fichero 12266 -- macros y constantes
#define LIMITE_12266 12366
#define FACTOR_12266 2

int aplicar_limite12266(int valor) {
    if (valor > LIMITE_12266) return LIMITE_12266;
    return valor * FACTOR_12266;
}
