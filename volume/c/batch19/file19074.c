// fichero 19074 -- macros y constantes
#define LIMITE_19074 19174
#define FACTOR_19074 5

int aplicar_limite19074(int valor) {
    if (valor > LIMITE_19074) return LIMITE_19074;
    return valor * FACTOR_19074;
}
