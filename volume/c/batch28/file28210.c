// fichero 28210 -- macros y constantes
#define LIMITE_28210 28310
#define FACTOR_28210 1

int aplicar_limite28210(int valor) {
    if (valor > LIMITE_28210) return LIMITE_28210;
    return valor * FACTOR_28210;
}
