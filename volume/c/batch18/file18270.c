// fichero 18270 -- macros y constantes -- MODIFICADO
#define LIMITE_18270 18470
#define FACTOR_18270 2

int aplicar_limite18270(int valor) {
    if (valor > LIMITE_18270) return LIMITE_18270;
    return valor * FACTOR_18270;
}
