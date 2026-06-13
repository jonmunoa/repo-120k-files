// fichero 40818 -- macros y constantes
#define LIMITE_40818 40918
#define FACTOR_40818 4

int aplicar_limite40818(int valor) {
    if (valor > LIMITE_40818) return LIMITE_40818;
    return valor * FACTOR_40818;
}
