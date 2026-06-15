// fichero 4294 -- macros y constantes -- MODIFICADO
#define LIMITE_4294 4494
#define FACTOR_4294 6

int aplicar_limite4294(int valor) {
    if (valor > LIMITE_4294) return LIMITE_4294;
    return valor * FACTOR_4294;
}
