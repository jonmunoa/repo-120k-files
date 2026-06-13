// fichero 50602 -- macros y constantes
#define LIMITE_50602 50702
#define FACTOR_50602 3

int aplicar_limite50602(int valor) {
    if (valor > LIMITE_50602) return LIMITE_50602;
    return valor * FACTOR_50602;
}
