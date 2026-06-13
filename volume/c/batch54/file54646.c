// fichero 54646 -- macros y constantes
#define LIMITE_54646 54746
#define FACTOR_54646 2

int aplicar_limite54646(int valor) {
    if (valor > LIMITE_54646) return LIMITE_54646;
    return valor * FACTOR_54646;
}
