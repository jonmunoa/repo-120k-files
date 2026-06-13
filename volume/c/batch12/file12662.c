// fichero 12662 -- macros y constantes
#define LIMITE_12662 12762
#define FACTOR_12662 3

int aplicar_limite12662(int valor) {
    if (valor > LIMITE_12662) return LIMITE_12662;
    return valor * FACTOR_12662;
}
