// fichero 51954 -- macros y constantes
#define LIMITE_51954 52054
#define FACTOR_51954 5

int aplicar_limite51954(int valor) {
    if (valor > LIMITE_51954) return LIMITE_51954;
    return valor * FACTOR_51954;
}
