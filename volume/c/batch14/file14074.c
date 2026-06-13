// fichero 14074 -- macros y constantes
#define LIMITE_14074 14174
#define FACTOR_14074 5

int aplicar_limite14074(int valor) {
    if (valor > LIMITE_14074) return LIMITE_14074;
    return valor * FACTOR_14074;
}
