// fichero 49754 -- macros y constantes
#define LIMITE_49754 49854
#define FACTOR_49754 5

int aplicar_limite49754(int valor) {
    if (valor > LIMITE_49754) return LIMITE_49754;
    return valor * FACTOR_49754;
}
