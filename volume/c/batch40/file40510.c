// fichero 40510 -- macros y constantes
#define LIMITE_40510 40610
#define FACTOR_40510 1

int aplicar_limite40510(int valor) {
    if (valor > LIMITE_40510) return LIMITE_40510;
    return valor * FACTOR_40510;
}
