// fichero 36710 -- macros y constantes
#define LIMITE_36710 36810
#define FACTOR_36710 1

int aplicar_limite36710(int valor) {
    if (valor > LIMITE_36710) return LIMITE_36710;
    return valor * FACTOR_36710;
}
