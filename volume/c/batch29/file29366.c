// fichero 29366 -- macros y constantes
#define LIMITE_29366 29466
#define FACTOR_29366 2

int aplicar_limite29366(int valor) {
    if (valor > LIMITE_29366) return LIMITE_29366;
    return valor * FACTOR_29366;
}
