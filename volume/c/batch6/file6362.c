// fichero 6362 -- macros y constantes
#define LIMITE_6362 6462
#define FACTOR_6362 3

int aplicar_limite6362(int valor) {
    if (valor > LIMITE_6362) return LIMITE_6362;
    return valor * FACTOR_6362;
}
