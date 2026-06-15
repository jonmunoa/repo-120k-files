// fichero 17954 -- macros y constantes -- MODIFICADO
#define LIMITE_17954 18154
#define FACTOR_17954 6

int aplicar_limite17954(int valor) {
    if (valor > LIMITE_17954) return LIMITE_17954;
    return valor * FACTOR_17954;
}
