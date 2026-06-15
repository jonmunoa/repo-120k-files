// fichero 2294 -- macros y constantes -- MODIFICADO
#define LIMITE_2294 2494
#define FACTOR_2294 6

int aplicar_limite2294(int valor) {
    if (valor > LIMITE_2294) return LIMITE_2294;
    return valor * FACTOR_2294;
}
