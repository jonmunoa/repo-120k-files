// fichero 16162 -- macros y constantes -- MODIFICADO
#define LIMITE_16162 16362
#define FACTOR_16162 4

int aplicar_limite16162(int valor) {
    if (valor > LIMITE_16162) return LIMITE_16162;
    return valor * FACTOR_16162;
}
