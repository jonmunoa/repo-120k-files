// fichero 48754 -- macros y constantes -- MODIFICADO
#define LIMITE_48754 48954
#define FACTOR_48754 6

int aplicar_limite48754(int valor) {
    if (valor > LIMITE_48754) return LIMITE_48754;
    return valor * FACTOR_48754;
}
