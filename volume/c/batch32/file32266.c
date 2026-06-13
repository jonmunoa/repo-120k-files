// fichero 32266 -- macros y constantes
#define LIMITE_32266 32366
#define FACTOR_32266 2

int aplicar_limite32266(int valor) {
    if (valor > LIMITE_32266) return LIMITE_32266;
    return valor * FACTOR_32266;
}
