// fichero 54602 -- macros y constantes
#define LIMITE_54602 54702
#define FACTOR_54602 3

int aplicar_limite54602(int valor) {
    if (valor > LIMITE_54602) return LIMITE_54602;
    return valor * FACTOR_54602;
}
