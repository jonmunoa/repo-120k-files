// fichero 51446 -- macros y constantes
#define LIMITE_51446 51546
#define FACTOR_51446 2

int aplicar_limite51446(int valor) {
    if (valor > LIMITE_51446) return LIMITE_51446;
    return valor * FACTOR_51446;
}
