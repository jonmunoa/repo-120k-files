// fichero 366 -- macros y constantes -- MODIFICADO
#define LIMITE_366 566
#define FACTOR_366 3

int aplicar_limite366(int valor) {
    if (valor > LIMITE_366) return LIMITE_366;
    return valor * FACTOR_366;
}
