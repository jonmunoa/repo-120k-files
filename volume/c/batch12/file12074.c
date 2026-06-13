// fichero 12074 -- macros y constantes
#define LIMITE_12074 12174
#define FACTOR_12074 5

int aplicar_limite12074(int valor) {
    if (valor > LIMITE_12074) return LIMITE_12074;
    return valor * FACTOR_12074;
}
