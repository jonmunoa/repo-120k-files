// fichero 12502 -- macros y constantes
#define LIMITE_12502 12602
#define FACTOR_12502 3

int aplicar_limite12502(int valor) {
    if (valor > LIMITE_12502) return LIMITE_12502;
    return valor * FACTOR_12502;
}
