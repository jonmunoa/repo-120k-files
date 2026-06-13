// fichero 22362 -- macros y constantes
#define LIMITE_22362 22462
#define FACTOR_22362 3

int aplicar_limite22362(int valor) {
    if (valor > LIMITE_22362) return LIMITE_22362;
    return valor * FACTOR_22362;
}
