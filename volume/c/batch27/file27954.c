// fichero 27954 -- macros y constantes
#define LIMITE_27954 28054
#define FACTOR_27954 5

int aplicar_limite27954(int valor) {
    if (valor > LIMITE_27954) return LIMITE_27954;
    return valor * FACTOR_27954;
}
