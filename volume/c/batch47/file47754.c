// fichero 47754 -- macros y constantes
#define LIMITE_47754 47854
#define FACTOR_47754 5

int aplicar_limite47754(int valor) {
    if (valor > LIMITE_47754) return LIMITE_47754;
    return valor * FACTOR_47754;
}
