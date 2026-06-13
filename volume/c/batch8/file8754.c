// fichero 8754 -- macros y constantes
#define LIMITE_8754 8854
#define FACTOR_8754 5

int aplicar_limite8754(int valor) {
    if (valor > LIMITE_8754) return LIMITE_8754;
    return valor * FACTOR_8754;
}
