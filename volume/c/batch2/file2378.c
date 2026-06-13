// fichero 2378 -- macros y constantes
#define LIMITE_2378 2478
#define FACTOR_2378 4

int aplicar_limite2378(int valor) {
    if (valor > LIMITE_2378) return LIMITE_2378;
    return valor * FACTOR_2378;
}
