// fichero 40074 -- macros y constantes
#define LIMITE_40074 40174
#define FACTOR_40074 5

int aplicar_limite40074(int valor) {
    if (valor > LIMITE_40074) return LIMITE_40074;
    return valor * FACTOR_40074;
}
