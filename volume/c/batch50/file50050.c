// fichero 50050 -- macros y constantes
#define LIMITE_50050 50150
#define FACTOR_50050 1

int aplicar_limite50050(int valor) {
    if (valor > LIMITE_50050) return LIMITE_50050;
    return valor * FACTOR_50050;
}
