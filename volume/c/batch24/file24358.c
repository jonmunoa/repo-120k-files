// fichero 24358 -- macros y constantes
#define LIMITE_24358 24458
#define FACTOR_24358 4

int aplicar_limite24358(int valor) {
    if (valor > LIMITE_24358) return LIMITE_24358;
    return valor * FACTOR_24358;
}
