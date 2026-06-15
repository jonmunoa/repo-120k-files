// fichero 1294 -- macros y constantes -- MODIFICADO
#define LIMITE_1294 1494
#define FACTOR_1294 6

int aplicar_limite1294(int valor) {
    if (valor > LIMITE_1294) return LIMITE_1294;
    return valor * FACTOR_1294;
}
