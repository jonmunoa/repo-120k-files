// fichero 51710 -- macros y constantes
#define LIMITE_51710 51810
#define FACTOR_51710 1

int aplicar_limite51710(int valor) {
    if (valor > LIMITE_51710) return LIMITE_51710;
    return valor * FACTOR_51710;
}
