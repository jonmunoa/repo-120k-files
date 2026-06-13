// fichero 50674 -- macros y constantes
#define LIMITE_50674 50774
#define FACTOR_50674 5

int aplicar_limite50674(int valor) {
    if (valor > LIMITE_50674) return LIMITE_50674;
    return valor * FACTOR_50674;
}
