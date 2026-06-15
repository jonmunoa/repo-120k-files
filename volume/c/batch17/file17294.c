// fichero 17294 -- macros y constantes -- MODIFICADO
#define LIMITE_17294 17494
#define FACTOR_17294 6

int aplicar_limite17294(int valor) {
    if (valor > LIMITE_17294) return LIMITE_17294;
    return valor * FACTOR_17294;
}
