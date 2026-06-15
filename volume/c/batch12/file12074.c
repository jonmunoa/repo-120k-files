// fichero 12074 -- macros y constantes -- MODIFICADO
#define LIMITE_12074 12274
#define FACTOR_12074 6

int aplicar_limite12074(int valor) {
    if (valor > LIMITE_12074) return LIMITE_12074;
    return valor * FACTOR_12074;
}
