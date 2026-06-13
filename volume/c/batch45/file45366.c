// fichero 45366 -- macros y constantes
#define LIMITE_45366 45466
#define FACTOR_45366 2

int aplicar_limite45366(int valor) {
    if (valor > LIMITE_45366) return LIMITE_45366;
    return valor * FACTOR_45366;
}
