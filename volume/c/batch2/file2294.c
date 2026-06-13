// fichero 2294 -- macros y constantes
#define LIMITE_2294 2394
#define FACTOR_2294 5

int aplicar_limite2294(int valor) {
    if (valor > LIMITE_2294) return LIMITE_2294;
    return valor * FACTOR_2294;
}
