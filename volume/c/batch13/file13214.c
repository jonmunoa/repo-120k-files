// fichero 13214 -- macros y constantes -- MODIFICADO
#define LIMITE_13214 13414
#define FACTOR_13214 6

int aplicar_limite13214(int valor) {
    if (valor > LIMITE_13214) return LIMITE_13214;
    return valor * FACTOR_13214;
}
