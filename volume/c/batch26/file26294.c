// fichero 26294 -- macros y constantes -- MODIFICADO
#define LIMITE_26294 26494
#define FACTOR_26294 6

int aplicar_limite26294(int valor) {
    if (valor > LIMITE_26294) return LIMITE_26294;
    return valor * FACTOR_26294;
}
