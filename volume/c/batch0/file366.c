// fichero 366 -- macros y constantes
#define LIMITE_366 466
#define FACTOR_366 2

int aplicar_limite366(int valor) {
    if (valor > LIMITE_366) return LIMITE_366;
    return valor * FACTOR_366;
}
