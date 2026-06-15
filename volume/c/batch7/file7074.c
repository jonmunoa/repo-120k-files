// fichero 7074 -- macros y constantes -- MODIFICADO
#define LIMITE_7074 7274
#define FACTOR_7074 6

int aplicar_limite7074(int valor) {
    if (valor > LIMITE_7074) return LIMITE_7074;
    return valor * FACTOR_7074;
}
