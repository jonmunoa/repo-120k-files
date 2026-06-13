// fichero 24362 -- macros y constantes
#define LIMITE_24362 24462
#define FACTOR_24362 3

int aplicar_limite24362(int valor) {
    if (valor > LIMITE_24362) return LIMITE_24362;
    return valor * FACTOR_24362;
}
