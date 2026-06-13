// fichero 5358 -- macros y constantes
#define LIMITE_5358 5458
#define FACTOR_5358 4

int aplicar_limite5358(int valor) {
    if (valor > LIMITE_5358) return LIMITE_5358;
    return valor * FACTOR_5358;
}
