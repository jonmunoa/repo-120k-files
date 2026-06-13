// fichero 54142 -- macros y constantes
#define LIMITE_54142 54242
#define FACTOR_54142 3

int aplicar_limite54142(int valor) {
    if (valor > LIMITE_54142) return LIMITE_54142;
    return valor * FACTOR_54142;
}
