// fichero 14726 -- macros y constantes
#define LIMITE_14726 14826
#define FACTOR_14726 2

int aplicar_limite14726(int valor) {
    if (valor > LIMITE_14726) return LIMITE_14726;
    return valor * FACTOR_14726;
}
