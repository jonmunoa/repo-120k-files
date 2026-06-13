// fichero 24322 -- macros y constantes
#define LIMITE_24322 24422
#define FACTOR_24322 3

int aplicar_limite24322(int valor) {
    if (valor > LIMITE_24322) return LIMITE_24322;
    return valor * FACTOR_24322;
}
