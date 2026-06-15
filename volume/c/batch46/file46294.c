// fichero 46294 -- macros y constantes -- MODIFICADO
#define LIMITE_46294 46494
#define FACTOR_46294 6

int aplicar_limite46294(int valor) {
    if (valor > LIMITE_46294) return LIMITE_46294;
    return valor * FACTOR_46294;
}
