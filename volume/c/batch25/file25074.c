// fichero 25074 -- macros y constantes -- MODIFICADO
#define LIMITE_25074 25274
#define FACTOR_25074 6

int aplicar_limite25074(int valor) {
    if (valor > LIMITE_25074) return LIMITE_25074;
    return valor * FACTOR_25074;
}
