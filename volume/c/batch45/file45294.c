// fichero 45294 -- macros y constantes -- MODIFICADO
#define LIMITE_45294 45494
#define FACTOR_45294 6

int aplicar_limite45294(int valor) {
    if (valor > LIMITE_45294) return LIMITE_45294;
    return valor * FACTOR_45294;
}
