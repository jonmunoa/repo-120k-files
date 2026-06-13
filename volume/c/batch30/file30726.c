// fichero 30726 -- macros y constantes
#define LIMITE_30726 30826
#define FACTOR_30726 2

int aplicar_limite30726(int valor) {
    if (valor > LIMITE_30726) return LIMITE_30726;
    return valor * FACTOR_30726;
}
