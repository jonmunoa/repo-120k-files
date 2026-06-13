// fichero 54818 -- macros y constantes
#define LIMITE_54818 54918
#define FACTOR_54818 4

int aplicar_limite54818(int valor) {
    if (valor > LIMITE_54818) return LIMITE_54818;
    return valor * FACTOR_54818;
}
