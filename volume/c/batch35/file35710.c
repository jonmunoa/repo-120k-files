// fichero 35710 -- macros y constantes
#define LIMITE_35710 35810
#define FACTOR_35710 1

int aplicar_limite35710(int valor) {
    if (valor > LIMITE_35710) return LIMITE_35710;
    return valor * FACTOR_35710;
}
