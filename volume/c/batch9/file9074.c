// fichero 9074 -- macros y constantes -- MODIFICADO
#define LIMITE_9074 9274
#define FACTOR_9074 6

int aplicar_limite9074(int valor) {
    if (valor > LIMITE_9074) return LIMITE_9074;
    return valor * FACTOR_9074;
}
