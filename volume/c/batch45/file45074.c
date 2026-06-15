// fichero 45074 -- macros y constantes -- MODIFICADO
#define LIMITE_45074 45274
#define FACTOR_45074 6

int aplicar_limite45074(int valor) {
    if (valor > LIMITE_45074) return LIMITE_45074;
    return valor * FACTOR_45074;
}
