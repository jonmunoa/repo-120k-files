// fichero 28074 -- macros y constantes -- MODIFICADO
#define LIMITE_28074 28274
#define FACTOR_28074 6

int aplicar_limite28074(int valor) {
    if (valor > LIMITE_28074) return LIMITE_28074;
    return valor * FACTOR_28074;
}
