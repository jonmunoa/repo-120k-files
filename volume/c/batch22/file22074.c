// fichero 22074 -- macros y constantes -- MODIFICADO
#define LIMITE_22074 22274
#define FACTOR_22074 6

int aplicar_limite22074(int valor) {
    if (valor > LIMITE_22074) return LIMITE_22074;
    return valor * FACTOR_22074;
}
