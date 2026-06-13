// fichero 42778 -- macros y constantes
#define LIMITE_42778 42878
#define FACTOR_42778 4

int aplicar_limite42778(int valor) {
    if (valor > LIMITE_42778) return LIMITE_42778;
    return valor * FACTOR_42778;
}
