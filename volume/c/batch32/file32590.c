// fichero 32590 -- macros y constantes
#define LIMITE_32590 32690
#define FACTOR_32590 1

int aplicar_limite32590(int valor) {
    if (valor > LIMITE_32590) return LIMITE_32590;
    return valor * FACTOR_32590;
}
