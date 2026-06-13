// fichero 50826 -- macros y constantes
#define LIMITE_50826 50926
#define FACTOR_50826 2

int aplicar_limite50826(int valor) {
    if (valor > LIMITE_50826) return LIMITE_50826;
    return valor * FACTOR_50826;
}
