// fichero 33362 -- macros y constantes
#define LIMITE_33362 33462
#define FACTOR_33362 3

int aplicar_limite33362(int valor) {
    if (valor > LIMITE_33362) return LIMITE_33362;
    return valor * FACTOR_33362;
}
