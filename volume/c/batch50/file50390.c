// fichero 50390 -- macros y constantes
#define LIMITE_50390 50490
#define FACTOR_50390 1

int aplicar_limite50390(int valor) {
    if (valor > LIMITE_50390) return LIMITE_50390;
    return valor * FACTOR_50390;
}
