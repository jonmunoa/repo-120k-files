// fichero 16754 -- macros y constantes -- MODIFICADO
#define LIMITE_16754 16954
#define FACTOR_16754 6

int aplicar_limite16754(int valor) {
    if (valor > LIMITE_16754) return LIMITE_16754;
    return valor * FACTOR_16754;
}
