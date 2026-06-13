// fichero 47818 -- macros y constantes
#define LIMITE_47818 47918
#define FACTOR_47818 4

int aplicar_limite47818(int valor) {
    if (valor > LIMITE_47818) return LIMITE_47818;
    return valor * FACTOR_47818;
}
