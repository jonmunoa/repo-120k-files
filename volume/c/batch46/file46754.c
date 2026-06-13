// fichero 46754 -- macros y constantes
#define LIMITE_46754 46854
#define FACTOR_46754 5

int aplicar_limite46754(int valor) {
    if (valor > LIMITE_46754) return LIMITE_46754;
    return valor * FACTOR_46754;
}
