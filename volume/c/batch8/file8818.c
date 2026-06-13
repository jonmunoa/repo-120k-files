// fichero 8818 -- macros y constantes
#define LIMITE_8818 8918
#define FACTOR_8818 4

int aplicar_limite8818(int valor) {
    if (valor > LIMITE_8818) return LIMITE_8818;
    return valor * FACTOR_8818;
}
