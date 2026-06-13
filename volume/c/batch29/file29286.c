// fichero 29286 -- macros y constantes
#define LIMITE_29286 29386
#define FACTOR_29286 2

int aplicar_limite29286(int valor) {
    if (valor > LIMITE_29286) return LIMITE_29286;
    return valor * FACTOR_29286;
}
