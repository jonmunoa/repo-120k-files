// fichero 51510 -- macros y constantes
#define LIMITE_51510 51610
#define FACTOR_51510 1

int aplicar_limite51510(int valor) {
    if (valor > LIMITE_51510) return LIMITE_51510;
    return valor * FACTOR_51510;
}
