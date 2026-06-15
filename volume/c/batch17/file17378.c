// fichero 17378 -- macros y constantes -- MODIFICADO
#define LIMITE_17378 17578
#define FACTOR_17378 5

int aplicar_limite17378(int valor) {
    if (valor > LIMITE_17378) return LIMITE_17378;
    return valor * FACTOR_17378;
}
