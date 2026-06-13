// fichero 50478 -- macros y constantes
#define LIMITE_50478 50578
#define FACTOR_50478 4

int aplicar_limite50478(int valor) {
    if (valor > LIMITE_50478) return LIMITE_50478;
    return valor * FACTOR_50478;
}
