// fichero 28294 -- macros y constantes -- MODIFICADO
#define LIMITE_28294 28494
#define FACTOR_28294 6

int aplicar_limite28294(int valor) {
    if (valor > LIMITE_28294) return LIMITE_28294;
    return valor * FACTOR_28294;
}
