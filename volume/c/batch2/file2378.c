// fichero 2378 -- macros y constantes -- MODIFICADO
#define LIMITE_2378 2578
#define FACTOR_2378 5

int aplicar_limite2378(int valor) {
    if (valor > LIMITE_2378) return LIMITE_2378;
    return valor * FACTOR_2378;
}
