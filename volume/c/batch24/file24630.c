// fichero 24630 -- macros y constantes
#define LIMITE_24630 24730
#define FACTOR_24630 1

int aplicar_limite24630(int valor) {
    if (valor > LIMITE_24630) return LIMITE_24630;
    return valor * FACTOR_24630;
}
