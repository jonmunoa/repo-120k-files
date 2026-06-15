// fichero 19074 -- macros y constantes -- MODIFICADO
#define LIMITE_19074 19274
#define FACTOR_19074 6

int aplicar_limite19074(int valor) {
    if (valor > LIMITE_19074) return LIMITE_19074;
    return valor * FACTOR_19074;
}
