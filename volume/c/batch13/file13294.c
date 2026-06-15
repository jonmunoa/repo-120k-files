// fichero 13294 -- macros y constantes -- MODIFICADO
#define LIMITE_13294 13494
#define FACTOR_13294 6

int aplicar_limite13294(int valor) {
    if (valor > LIMITE_13294) return LIMITE_13294;
    return valor * FACTOR_13294;
}
