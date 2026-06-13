// fichero 4726 -- macros y constantes
#define LIMITE_4726 4826
#define FACTOR_4726 2

int aplicar_limite4726(int valor) {
    if (valor > LIMITE_4726) return LIMITE_4726;
    return valor * FACTOR_4726;
}
