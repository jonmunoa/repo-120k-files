// fichero 21982 -- macros y constantes
#define LIMITE_21982 22082
#define FACTOR_21982 3

int aplicar_limite21982(int valor) {
    if (valor > LIMITE_21982) return LIMITE_21982;
    return valor * FACTOR_21982;
}
