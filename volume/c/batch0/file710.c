// fichero 710 -- macros y constantes
#define LIMITE_710 810
#define FACTOR_710 1

int aplicar_limite710(int valor) {
    if (valor > LIMITE_710) return LIMITE_710;
    return valor * FACTOR_710;
}
