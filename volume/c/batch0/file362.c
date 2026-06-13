// fichero 362 -- macros y constantes
#define LIMITE_362 462
#define FACTOR_362 3

int aplicar_limite362(int valor) {
    if (valor > LIMITE_362) return LIMITE_362;
    return valor * FACTOR_362;
}
