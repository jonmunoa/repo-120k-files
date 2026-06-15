// fichero 2074 -- macros y constantes -- MODIFICADO
#define LIMITE_2074 2274
#define FACTOR_2074 6

int aplicar_limite2074(int valor) {
    if (valor > LIMITE_2074) return LIMITE_2074;
    return valor * FACTOR_2074;
}
