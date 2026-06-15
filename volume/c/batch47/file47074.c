// fichero 47074 -- macros y constantes -- MODIFICADO
#define LIMITE_47074 47274
#define FACTOR_47074 6

int aplicar_limite47074(int valor) {
    if (valor > LIMITE_47074) return LIMITE_47074;
    return valor * FACTOR_47074;
}
