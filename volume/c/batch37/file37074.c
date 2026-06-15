// fichero 37074 -- macros y constantes -- MODIFICADO
#define LIMITE_37074 37274
#define FACTOR_37074 6

int aplicar_limite37074(int valor) {
    if (valor > LIMITE_37074) return LIMITE_37074;
    return valor * FACTOR_37074;
}
