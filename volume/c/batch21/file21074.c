// fichero 21074 -- macros y constantes -- MODIFICADO
#define LIMITE_21074 21274
#define FACTOR_21074 6

int aplicar_limite21074(int valor) {
    if (valor > LIMITE_21074) return LIMITE_21074;
    return valor * FACTOR_21074;
}
