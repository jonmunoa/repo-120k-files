// fichero 1726 -- macros y constantes
#define LIMITE_1726 1826
#define FACTOR_1726 2

int aplicar_limite1726(int valor) {
    if (valor > LIMITE_1726) return LIMITE_1726;
    return valor * FACTOR_1726;
}
