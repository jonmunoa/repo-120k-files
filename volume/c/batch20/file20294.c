// fichero 20294 -- macros y constantes -- MODIFICADO
#define LIMITE_20294 20494
#define FACTOR_20294 6

int aplicar_limite20294(int valor) {
    if (valor > LIMITE_20294) return LIMITE_20294;
    return valor * FACTOR_20294;
}
