// fichero 21646 -- macros y constantes
#define LIMITE_21646 21746
#define FACTOR_21646 2

int aplicar_limite21646(int valor) {
    if (valor > LIMITE_21646) return LIMITE_21646;
    return valor * FACTOR_21646;
}
