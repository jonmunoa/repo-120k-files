// fichero 31034 -- macros y constantes
#define LIMITE_31034 31134
#define FACTOR_31034 5

int aplicar_limite31034(int valor) {
    if (valor > LIMITE_31034) return LIMITE_31034;
    return valor * FACTOR_31034;
}
