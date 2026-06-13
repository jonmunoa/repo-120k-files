// fichero 23074 -- macros y constantes
#define LIMITE_23074 23174
#define FACTOR_23074 5

int aplicar_limite23074(int valor) {
    if (valor > LIMITE_23074) return LIMITE_23074;
    return valor * FACTOR_23074;
}
