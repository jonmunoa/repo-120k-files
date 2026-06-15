// fichero 23074 -- macros y constantes -- MODIFICADO
#define LIMITE_23074 23274
#define FACTOR_23074 6

int aplicar_limite23074(int valor) {
    if (valor > LIMITE_23074) return LIMITE_23074;
    return valor * FACTOR_23074;
}
