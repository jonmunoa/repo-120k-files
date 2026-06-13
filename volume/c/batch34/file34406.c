// fichero 34406 -- macros y constantes
#define LIMITE_34406 34506
#define FACTOR_34406 2

int aplicar_limite34406(int valor) {
    if (valor > LIMITE_34406) return LIMITE_34406;
    return valor * FACTOR_34406;
}
