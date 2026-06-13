// fichero 7358 -- macros y constantes
#define LIMITE_7358 7458
#define FACTOR_7358 4

int aplicar_limite7358(int valor) {
    if (valor > LIMITE_7358) return LIMITE_7358;
    return valor * FACTOR_7358;
}
