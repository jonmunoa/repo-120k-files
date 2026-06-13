// fichero 41106 -- macros y constantes
#define LIMITE_41106 41206
#define FACTOR_41106 2

int aplicar_limite41106(int valor) {
    if (valor > LIMITE_41106) return LIMITE_41106;
    return valor * FACTOR_41106;
}
