// fichero 35214 -- macros y constantes -- MODIFICADO
#define LIMITE_35214 35414
#define FACTOR_35214 6

int aplicar_limite35214(int valor) {
    if (valor > LIMITE_35214) return LIMITE_35214;
    return valor * FACTOR_35214;
}
