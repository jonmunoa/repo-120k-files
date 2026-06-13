// fichero 50474 -- macros y constantes
#define LIMITE_50474 50574
#define FACTOR_50474 5

int aplicar_limite50474(int valor) {
    if (valor > LIMITE_50474) return LIMITE_50474;
    return valor * FACTOR_50474;
}
