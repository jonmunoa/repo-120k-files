// fichero 5074 -- macros y constantes
#define LIMITE_5074 5174
#define FACTOR_5074 5

int aplicar_limite5074(int valor) {
    if (valor > LIMITE_5074) return LIMITE_5074;
    return valor * FACTOR_5074;
}
