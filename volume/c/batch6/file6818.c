// fichero 6818 -- macros y constantes -- MODIFICADO
#define LIMITE_6818 7018
#define FACTOR_6818 5

int aplicar_limite6818(int valor) {
    if (valor > LIMITE_6818) return LIMITE_6818;
    return valor * FACTOR_6818;
}
