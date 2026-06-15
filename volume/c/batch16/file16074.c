// fichero 16074 -- macros y constantes -- MODIFICADO
#define LIMITE_16074 16274
#define FACTOR_16074 6

int aplicar_limite16074(int valor) {
    if (valor > LIMITE_16074) return LIMITE_16074;
    return valor * FACTOR_16074;
}
