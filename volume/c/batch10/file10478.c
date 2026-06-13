// fichero 10478 -- macros y constantes
#define LIMITE_10478 10578
#define FACTOR_10478 4

int aplicar_limite10478(int valor) {
    if (valor > LIMITE_10478) return LIMITE_10478;
    return valor * FACTOR_10478;
}
