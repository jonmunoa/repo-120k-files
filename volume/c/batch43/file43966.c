// fichero 43966 -- macros y constantes
#define LIMITE_43966 44066
#define FACTOR_43966 2

int aplicar_limite43966(int valor) {
    if (valor > LIMITE_43966) return LIMITE_43966;
    return valor * FACTOR_43966;
}
