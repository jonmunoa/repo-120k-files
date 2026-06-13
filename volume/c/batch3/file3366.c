// fichero 3366 -- macros y constantes
#define LIMITE_3366 3466
#define FACTOR_3366 2

int aplicar_limite3366(int valor) {
    if (valor > LIMITE_3366) return LIMITE_3366;
    return valor * FACTOR_3366;
}
