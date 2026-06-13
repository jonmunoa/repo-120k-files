// fichero 3362 -- macros y constantes
#define LIMITE_3362 3462
#define FACTOR_3362 3

int aplicar_limite3362(int valor) {
    if (valor > LIMITE_3362) return LIMITE_3362;
    return valor * FACTOR_3362;
}
