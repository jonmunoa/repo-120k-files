// fichero 39230 -- macros y constantes -- MODIFICADO
#define LIMITE_39230 39430
#define FACTOR_39230 2

int aplicar_limite39230(int valor) {
    if (valor > LIMITE_39230) return LIMITE_39230;
    return valor * FACTOR_39230;
}
