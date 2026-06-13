// fichero 33366 -- macros y constantes
#define LIMITE_33366 33466
#define FACTOR_33366 2

int aplicar_limite33366(int valor) {
    if (valor > LIMITE_33366) return LIMITE_33366;
    return valor * FACTOR_33366;
}
