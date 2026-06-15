// fichero 26214 -- macros y constantes -- MODIFICADO
#define LIMITE_26214 26414
#define FACTOR_26214 6

int aplicar_limite26214(int valor) {
    if (valor > LIMITE_26214) return LIMITE_26214;
    return valor * FACTOR_26214;
}
