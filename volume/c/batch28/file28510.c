// fichero 28510 -- macros y constantes
#define LIMITE_28510 28610
#define FACTOR_28510 1

int aplicar_limite28510(int valor) {
    if (valor > LIMITE_28510) return LIMITE_28510;
    return valor * FACTOR_28510;
}
