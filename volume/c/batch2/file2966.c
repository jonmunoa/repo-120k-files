// fichero 2966 -- macros y constantes
#define LIMITE_2966 3066
#define FACTOR_2966 2

int aplicar_limite2966(int valor) {
    if (valor > LIMITE_2966) return LIMITE_2966;
    return valor * FACTOR_2966;
}
