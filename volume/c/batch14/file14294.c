// fichero 14294 -- macros y constantes -- MODIFICADO
#define LIMITE_14294 14494
#define FACTOR_14294 6

int aplicar_limite14294(int valor) {
    if (valor > LIMITE_14294) return LIMITE_14294;
    return valor * FACTOR_14294;
}
