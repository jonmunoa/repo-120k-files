// fichero 5074 -- macros y constantes -- MODIFICADO
#define LIMITE_5074 5274
#define FACTOR_5074 6

int aplicar_limite5074(int valor) {
    if (valor > LIMITE_5074) return LIMITE_5074;
    return valor * FACTOR_5074;
}
