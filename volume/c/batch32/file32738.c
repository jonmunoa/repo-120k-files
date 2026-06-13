// fichero 32738 -- macros y constantes
#define LIMITE_32738 32838
#define FACTOR_32738 4

int aplicar_limite32738(int valor) {
    if (valor > LIMITE_32738) return LIMITE_32738;
    return valor * FACTOR_32738;
}
