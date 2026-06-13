// fichero 37362 -- macros y constantes
#define LIMITE_37362 37462
#define FACTOR_37362 3

int aplicar_limite37362(int valor) {
    if (valor > LIMITE_37362) return LIMITE_37362;
    return valor * FACTOR_37362;
}
