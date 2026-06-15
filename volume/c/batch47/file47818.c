// fichero 47818 -- macros y constantes -- MODIFICADO
#define LIMITE_47818 48018
#define FACTOR_47818 5

int aplicar_limite47818(int valor) {
    if (valor > LIMITE_47818) return LIMITE_47818;
    return valor * FACTOR_47818;
}
