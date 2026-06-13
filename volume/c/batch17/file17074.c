// fichero 17074 -- macros y constantes
#define LIMITE_17074 17174
#define FACTOR_17074 5

int aplicar_limite17074(int valor) {
    if (valor > LIMITE_17074) return LIMITE_17074;
    return valor * FACTOR_17074;
}
