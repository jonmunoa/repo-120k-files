// fichero 45754 -- macros y constantes
#define LIMITE_45754 45854
#define FACTOR_45754 5

int aplicar_limite45754(int valor) {
    if (valor > LIMITE_45754) return LIMITE_45754;
    return valor * FACTOR_45754;
}
