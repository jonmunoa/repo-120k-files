// fichero 28474 -- macros y constantes -- MODIFICADO
#define LIMITE_28474 28674
#define FACTOR_28474 6

int aplicar_limite28474(int valor) {
    if (valor > LIMITE_28474) return LIMITE_28474;
    return valor * FACTOR_28474;
}
