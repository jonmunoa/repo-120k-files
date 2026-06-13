// fichero 21266 -- macros y constantes
#define LIMITE_21266 21366
#define FACTOR_21266 2

int aplicar_limite21266(int valor) {
    if (valor > LIMITE_21266) return LIMITE_21266;
    return valor * FACTOR_21266;
}
