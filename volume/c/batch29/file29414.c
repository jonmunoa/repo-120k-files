// fichero 29414 -- macros y constantes
#define LIMITE_29414 29514
#define FACTOR_29414 5

int aplicar_limite29414(int valor) {
    if (valor > LIMITE_29414) return LIMITE_29414;
    return valor * FACTOR_29414;
}
