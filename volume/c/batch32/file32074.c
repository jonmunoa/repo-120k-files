// fichero 32074 -- macros y constantes -- MODIFICADO
#define LIMITE_32074 32274
#define FACTOR_32074 6

int aplicar_limite32074(int valor) {
    if (valor > LIMITE_32074) return LIMITE_32074;
    return valor * FACTOR_32074;
}
