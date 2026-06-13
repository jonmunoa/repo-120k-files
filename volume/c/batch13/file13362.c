// fichero 13362 -- macros y constantes
#define LIMITE_13362 13462
#define FACTOR_13362 3

int aplicar_limite13362(int valor) {
    if (valor > LIMITE_13362) return LIMITE_13362;
    return valor * FACTOR_13362;
}
