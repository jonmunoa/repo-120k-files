// fichero 50818 -- macros y constantes
#define LIMITE_50818 50918
#define FACTOR_50818 4

int aplicar_limite50818(int valor) {
    if (valor > LIMITE_50818) return LIMITE_50818;
    return valor * FACTOR_50818;
}
