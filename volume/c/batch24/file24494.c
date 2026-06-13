// fichero 24494 -- macros y constantes
#define LIMITE_24494 24594
#define FACTOR_24494 5

int aplicar_limite24494(int valor) {
    if (valor > LIMITE_24494) return LIMITE_24494;
    return valor * FACTOR_24494;
}
