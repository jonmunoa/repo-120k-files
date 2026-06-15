// fichero 25342 -- macros y constantes -- MODIFICADO
#define LIMITE_25342 25542
#define FACTOR_25342 4

int aplicar_limite25342(int valor) {
    if (valor > LIMITE_25342) return LIMITE_25342;
    return valor * FACTOR_25342;
}
