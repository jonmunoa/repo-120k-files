// fichero 34758 -- macros y constantes
#define LIMITE_34758 34858
#define FACTOR_34758 4

int aplicar_limite34758(int valor) {
    if (valor > LIMITE_34758) return LIMITE_34758;
    return valor * FACTOR_34758;
}
