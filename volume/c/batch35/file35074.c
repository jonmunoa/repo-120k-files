// fichero 35074 -- macros y constantes -- MODIFICADO
#define LIMITE_35074 35274
#define FACTOR_35074 6

int aplicar_limite35074(int valor) {
    if (valor > LIMITE_35074) return LIMITE_35074;
    return valor * FACTOR_35074;
}
