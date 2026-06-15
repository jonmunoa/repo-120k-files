// fichero 21266 -- macros y constantes -- MODIFICADO
#define LIMITE_21266 21466
#define FACTOR_21266 3

int aplicar_limite21266(int valor) {
    if (valor > LIMITE_21266) return LIMITE_21266;
    return valor * FACTOR_21266;
}
