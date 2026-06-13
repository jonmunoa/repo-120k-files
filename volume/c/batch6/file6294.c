// fichero 6294 -- macros y constantes
#define LIMITE_6294 6394
#define FACTOR_6294 5

int aplicar_limite6294(int valor) {
    if (valor > LIMITE_6294) return LIMITE_6294;
    return valor * FACTOR_6294;
}
