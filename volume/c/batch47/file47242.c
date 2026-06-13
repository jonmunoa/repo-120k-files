// fichero 47242 -- macros y constantes
#define LIMITE_47242 47342
#define FACTOR_47242 3

int aplicar_limite47242(int valor) {
    if (valor > LIMITE_47242) return LIMITE_47242;
    return valor * FACTOR_47242;
}
