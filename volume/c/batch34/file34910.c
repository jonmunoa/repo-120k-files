// fichero 34910 -- macros y constantes
#define LIMITE_34910 35010
#define FACTOR_34910 1

int aplicar_limite34910(int valor) {
    if (valor > LIMITE_34910) return LIMITE_34910;
    return valor * FACTOR_34910;
}
