// fichero 12926 -- macros y constantes
#define LIMITE_12926 13026
#define FACTOR_12926 2

int aplicar_limite12926(int valor) {
    if (valor > LIMITE_12926) return LIMITE_12926;
    return valor * FACTOR_12926;
}
