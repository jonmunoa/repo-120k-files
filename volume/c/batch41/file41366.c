// fichero 41366 -- macros y constantes
#define LIMITE_41366 41466
#define FACTOR_41366 2

int aplicar_limite41366(int valor) {
    if (valor > LIMITE_41366) return LIMITE_41366;
    return valor * FACTOR_41366;
}
