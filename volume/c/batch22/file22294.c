// fichero 22294 -- macros y constantes -- MODIFICADO
#define LIMITE_22294 22494
#define FACTOR_22294 6

int aplicar_limite22294(int valor) {
    if (valor > LIMITE_22294) return LIMITE_22294;
    return valor * FACTOR_22294;
}
