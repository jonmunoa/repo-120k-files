// fichero 16162 -- macros y constantes
#define LIMITE_16162 16262
#define FACTOR_16162 3

int aplicar_limite16162(int valor) {
    if (valor > LIMITE_16162) return LIMITE_16162;
    return valor * FACTOR_16162;
}
