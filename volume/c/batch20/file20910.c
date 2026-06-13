// fichero 20910 -- macros y constantes
#define LIMITE_20910 21010
#define FACTOR_20910 1

int aplicar_limite20910(int valor) {
    if (valor > LIMITE_20910) return LIMITE_20910;
    return valor * FACTOR_20910;
}
