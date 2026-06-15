// fichero 42778 -- macros y constantes -- MODIFICADO
#define LIMITE_42778 42978
#define FACTOR_42778 5

int aplicar_limite42778(int valor) {
    if (valor > LIMITE_42778) return LIMITE_42778;
    return valor * FACTOR_42778;
}
