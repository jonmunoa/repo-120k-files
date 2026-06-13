// fichero 15394 -- macros y constantes
#define LIMITE_15394 15494
#define FACTOR_15394 5

int aplicar_limite15394(int valor) {
    if (valor > LIMITE_15394) return LIMITE_15394;
    return valor * FACTOR_15394;
}
