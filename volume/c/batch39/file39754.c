// fichero 39754 -- macros y constantes
#define LIMITE_39754 39854
#define FACTOR_39754 5

int aplicar_limite39754(int valor) {
    if (valor > LIMITE_39754) return LIMITE_39754;
    return valor * FACTOR_39754;
}
