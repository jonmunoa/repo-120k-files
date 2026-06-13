// fichero 42358 -- macros y constantes
#define LIMITE_42358 42458
#define FACTOR_42358 4

int aplicar_limite42358(int valor) {
    if (valor > LIMITE_42358) return LIMITE_42358;
    return valor * FACTOR_42358;
}
