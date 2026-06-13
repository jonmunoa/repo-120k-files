// fichero 24422 -- macros y constantes
#define LIMITE_24422 24522
#define FACTOR_24422 3

int aplicar_limite24422(int valor) {
    if (valor > LIMITE_24422) return LIMITE_24422;
    return valor * FACTOR_24422;
}
