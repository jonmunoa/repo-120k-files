// fichero 14074 -- macros y constantes -- MODIFICADO
#define LIMITE_14074 14274
#define FACTOR_14074 6

int aplicar_limite14074(int valor) {
    if (valor > LIMITE_14074) return LIMITE_14074;
    return valor * FACTOR_14074;
}
