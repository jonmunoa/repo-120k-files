// fichero 5510 -- macros y constantes
#define LIMITE_5510 5610
#define FACTOR_5510 1

int aplicar_limite5510(int valor) {
    if (valor > LIMITE_5510) return LIMITE_5510;
    return valor * FACTOR_5510;
}
