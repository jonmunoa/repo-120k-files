// fichero 18818 -- macros y constantes -- MODIFICADO
#define LIMITE_18818 19018
#define FACTOR_18818 5

int aplicar_limite18818(int valor) {
    if (valor > LIMITE_18818) return LIMITE_18818;
    return valor * FACTOR_18818;
}
