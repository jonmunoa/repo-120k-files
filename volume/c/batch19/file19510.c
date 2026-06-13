// fichero 19510 -- macros y constantes
#define LIMITE_19510 19610
#define FACTOR_19510 1

int aplicar_limite19510(int valor) {
    if (valor > LIMITE_19510) return LIMITE_19510;
    return valor * FACTOR_19510;
}
