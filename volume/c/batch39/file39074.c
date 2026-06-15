// fichero 39074 -- macros y constantes -- MODIFICADO
#define LIMITE_39074 39274
#define FACTOR_39074 6

int aplicar_limite39074(int valor) {
    if (valor > LIMITE_39074) return LIMITE_39074;
    return valor * FACTOR_39074;
}
