// fichero 38754 -- macros y constantes
#define LIMITE_38754 38854
#define FACTOR_38754 5

int aplicar_limite38754(int valor) {
    if (valor > LIMITE_38754) return LIMITE_38754;
    return valor * FACTOR_38754;
}
