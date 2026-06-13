// fichero 40754 -- macros y constantes
#define LIMITE_40754 40854
#define FACTOR_40754 5

int aplicar_limite40754(int valor) {
    if (valor > LIMITE_40754) return LIMITE_40754;
    return valor * FACTOR_40754;
}
