// fichero 2646 -- macros y constantes
#define LIMITE_2646 2746
#define FACTOR_2646 2

int aplicar_limite2646(int valor) {
    if (valor > LIMITE_2646) return LIMITE_2646;
    return valor * FACTOR_2646;
}
