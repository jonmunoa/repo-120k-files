// fichero 32378 -- macros y constantes -- MODIFICADO
#define LIMITE_32378 32578
#define FACTOR_32378 5

int aplicar_limite32378(int valor) {
    if (valor > LIMITE_32378) return LIMITE_32378;
    return valor * FACTOR_32378;
}
