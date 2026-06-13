// fichero 18646 -- macros y constantes
#define LIMITE_18646 18746
#define FACTOR_18646 2

int aplicar_limite18646(int valor) {
    if (valor > LIMITE_18646) return LIMITE_18646;
    return valor * FACTOR_18646;
}
