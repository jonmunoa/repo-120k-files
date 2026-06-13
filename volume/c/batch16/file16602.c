// fichero 16602 -- macros y constantes
#define LIMITE_16602 16702
#define FACTOR_16602 3

int aplicar_limite16602(int valor) {
    if (valor > LIMITE_16602) return LIMITE_16602;
    return valor * FACTOR_16602;
}
