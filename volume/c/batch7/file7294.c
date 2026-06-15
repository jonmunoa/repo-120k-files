// fichero 7294 -- macros y constantes -- MODIFICADO
#define LIMITE_7294 7494
#define FACTOR_7294 6

int aplicar_limite7294(int valor) {
    if (valor > LIMITE_7294) return LIMITE_7294;
    return valor * FACTOR_7294;
}
