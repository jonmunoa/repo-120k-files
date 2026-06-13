// fichero 15754 -- macros y constantes
#define LIMITE_15754 15854
#define FACTOR_15754 5

int aplicar_limite15754(int valor) {
    if (valor > LIMITE_15754) return LIMITE_15754;
    return valor * FACTOR_15754;
}
