// fichero 50366 -- macros y constantes
#define LIMITE_50366 50466
#define FACTOR_50366 2

int aplicar_limite50366(int valor) {
    if (valor > LIMITE_50366) return LIMITE_50366;
    return valor * FACTOR_50366;
}
