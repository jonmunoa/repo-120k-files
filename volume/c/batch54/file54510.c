// fichero 54510 -- macros y constantes
#define LIMITE_54510 54610
#define FACTOR_54510 1

int aplicar_limite54510(int valor) {
    if (valor > LIMITE_54510) return LIMITE_54510;
    return valor * FACTOR_54510;
}
