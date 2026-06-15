// fichero 21294 -- macros y constantes -- MODIFICADO
#define LIMITE_21294 21494
#define FACTOR_21294 6

int aplicar_limite21294(int valor) {
    if (valor > LIMITE_21294) return LIMITE_21294;
    return valor * FACTOR_21294;
}
