// fichero 22910 -- macros y constantes
#define LIMITE_22910 23010
#define FACTOR_22910 1

int aplicar_limite22910(int valor) {
    if (valor > LIMITE_22910) return LIMITE_22910;
    return valor * FACTOR_22910;
}
