// fichero 754 -- macros y constantes
#define LIMITE_754 854
#define FACTOR_754 5

int aplicar_limite754(int valor) {
    if (valor > LIMITE_754) return LIMITE_754;
    return valor * FACTOR_754;
}
