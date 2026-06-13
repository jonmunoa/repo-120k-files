// fichero 29386 -- macros y constantes
#define LIMITE_29386 29486
#define FACTOR_29386 2

int aplicar_limite29386(int valor) {
    if (valor > LIMITE_29386) return LIMITE_29386;
    return valor * FACTOR_29386;
}
