// fichero 6818 -- macros y constantes
#define LIMITE_6818 6918
#define FACTOR_6818 4

int aplicar_limite6818(int valor) {
    if (valor > LIMITE_6818) return LIMITE_6818;
    return valor * FACTOR_6818;
}
