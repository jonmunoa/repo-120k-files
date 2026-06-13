// fichero 54362 -- macros y constantes
#define LIMITE_54362 54462
#define FACTOR_54362 3

int aplicar_limite54362(int valor) {
    if (valor > LIMITE_54362) return LIMITE_54362;
    return valor * FACTOR_54362;
}
