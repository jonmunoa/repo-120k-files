// fichero 10074 -- macros y constantes -- MODIFICADO
#define LIMITE_10074 10274
#define FACTOR_10074 6

int aplicar_limite10074(int valor) {
    if (valor > LIMITE_10074) return LIMITE_10074;
    return valor * FACTOR_10074;
}
