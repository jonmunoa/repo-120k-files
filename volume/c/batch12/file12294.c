// fichero 12294 -- macros y constantes -- MODIFICADO
#define LIMITE_12294 12494
#define FACTOR_12294 6

int aplicar_limite12294(int valor) {
    if (valor > LIMITE_12294) return LIMITE_12294;
    return valor * FACTOR_12294;
}
