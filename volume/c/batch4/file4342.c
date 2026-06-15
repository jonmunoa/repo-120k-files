// fichero 4342 -- macros y constantes -- MODIFICADO
#define LIMITE_4342 4542
#define FACTOR_4342 4

int aplicar_limite4342(int valor) {
    if (valor > LIMITE_4342) return LIMITE_4342;
    return valor * FACTOR_4342;
}
