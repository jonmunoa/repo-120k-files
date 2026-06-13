// fichero 42754 -- macros y constantes
#define LIMITE_42754 42854
#define FACTOR_42754 5

int aplicar_limite42754(int valor) {
    if (valor > LIMITE_42754) return LIMITE_42754;
    return valor * FACTOR_42754;
}
