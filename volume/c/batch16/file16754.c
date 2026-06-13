// fichero 16754 -- macros y constantes
#define LIMITE_16754 16854
#define FACTOR_16754 5

int aplicar_limite16754(int valor) {
    if (valor > LIMITE_16754) return LIMITE_16754;
    return valor * FACTOR_16754;
}
