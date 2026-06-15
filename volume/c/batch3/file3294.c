// fichero 3294 -- macros y constantes -- MODIFICADO
#define LIMITE_3294 3494
#define FACTOR_3294 6

int aplicar_limite3294(int valor) {
    if (valor > LIMITE_3294) return LIMITE_3294;
    return valor * FACTOR_3294;
}
