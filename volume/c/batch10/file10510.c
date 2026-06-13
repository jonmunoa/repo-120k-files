// fichero 10510 -- macros y constantes
#define LIMITE_10510 10610
#define FACTOR_10510 1

int aplicar_limite10510(int valor) {
    if (valor > LIMITE_10510) return LIMITE_10510;
    return valor * FACTOR_10510;
}
