// fichero 47510 -- macros y constantes
#define LIMITE_47510 47610
#define FACTOR_47510 1

int aplicar_limite47510(int valor) {
    if (valor > LIMITE_47510) return LIMITE_47510;
    return valor * FACTOR_47510;
}
