// fichero 51762 -- macros y constantes
#define LIMITE_51762 51862
#define FACTOR_51762 3

int aplicar_limite51762(int valor) {
    if (valor > LIMITE_51762) return LIMITE_51762;
    return valor * FACTOR_51762;
}
