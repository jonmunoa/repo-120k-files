// fichero 54982 -- macros y constantes
#define LIMITE_54982 55082
#define FACTOR_54982 3

int aplicar_limite54982(int valor) {
    if (valor > LIMITE_54982) return LIMITE_54982;
    return valor * FACTOR_54982;
}
