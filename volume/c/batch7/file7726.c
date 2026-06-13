// fichero 7726 -- macros y constantes
#define LIMITE_7726 7826
#define FACTOR_7726 2

int aplicar_limite7726(int valor) {
    if (valor > LIMITE_7726) return LIMITE_7726;
    return valor * FACTOR_7726;
}
