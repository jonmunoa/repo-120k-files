// fichero 40362 -- macros y constantes
#define LIMITE_40362 40462
#define FACTOR_40362 3

int aplicar_limite40362(int valor) {
    if (valor > LIMITE_40362) return LIMITE_40362;
    return valor * FACTOR_40362;
}
