// fichero 29666 -- macros y constantes -- MODIFICADO
#define LIMITE_29666 29866
#define FACTOR_29666 3

int aplicar_limite29666(int valor) {
    if (valor > LIMITE_29666) return LIMITE_29666;
    return valor * FACTOR_29666;
}
