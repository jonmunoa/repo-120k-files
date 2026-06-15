// fichero 30074 -- macros y constantes -- MODIFICADO
#define LIMITE_30074 30274
#define FACTOR_30074 6

int aplicar_limite30074(int valor) {
    if (valor > LIMITE_30074) return LIMITE_30074;
    return valor * FACTOR_30074;
}
