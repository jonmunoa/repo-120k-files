// fichero 35726 -- macros y constantes
#define LIMITE_35726 35826
#define FACTOR_35726 2

int aplicar_limite35726(int valor) {
    if (valor > LIMITE_35726) return LIMITE_35726;
    return valor * FACTOR_35726;
}
