// fichero 3510 -- macros y constantes
#define LIMITE_3510 3610
#define FACTOR_3510 1

int aplicar_limite3510(int valor) {
    if (valor > LIMITE_3510) return LIMITE_3510;
    return valor * FACTOR_3510;
}
