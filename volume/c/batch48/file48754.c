// fichero 48754 -- macros y constantes
#define LIMITE_48754 48854
#define FACTOR_48754 5

int aplicar_limite48754(int valor) {
    if (valor > LIMITE_48754) return LIMITE_48754;
    return valor * FACTOR_48754;
}
