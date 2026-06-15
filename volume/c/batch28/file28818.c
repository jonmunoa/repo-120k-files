// fichero 28818 -- macros y constantes -- MODIFICADO
#define LIMITE_28818 29018
#define FACTOR_28818 5

int aplicar_limite28818(int valor) {
    if (valor > LIMITE_28818) return LIMITE_28818;
    return valor * FACTOR_28818;
}
