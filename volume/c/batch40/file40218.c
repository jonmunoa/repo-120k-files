// fichero 40218 -- macros y constantes
#define LIMITE_40218 40318
#define FACTOR_40218 4

int aplicar_limite40218(int valor) {
    if (valor > LIMITE_40218) return LIMITE_40218;
    return valor * FACTOR_40218;
}
