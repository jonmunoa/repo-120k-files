// fichero 15266 -- macros y constantes
#define LIMITE_15266 15366
#define FACTOR_15266 2

int aplicar_limite15266(int valor) {
    if (valor > LIMITE_15266) return LIMITE_15266;
    return valor * FACTOR_15266;
}
