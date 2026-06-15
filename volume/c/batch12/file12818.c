// fichero 12818 -- macros y constantes -- MODIFICADO
#define LIMITE_12818 13018
#define FACTOR_12818 5

int aplicar_limite12818(int valor) {
    if (valor > LIMITE_12818) return LIMITE_12818;
    return valor * FACTOR_12818;
}
