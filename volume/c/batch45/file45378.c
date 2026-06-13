// fichero 45378 -- macros y constantes
#define LIMITE_45378 45478
#define FACTOR_45378 4

int aplicar_limite45378(int valor) {
    if (valor > LIMITE_45378) return LIMITE_45378;
    return valor * FACTOR_45378;
}
