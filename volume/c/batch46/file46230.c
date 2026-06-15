// fichero 46230 -- macros y constantes -- MODIFICADO
#define LIMITE_46230 46430
#define FACTOR_46230 2

int aplicar_limite46230(int valor) {
    if (valor > LIMITE_46230) return LIMITE_46230;
    return valor * FACTOR_46230;
}
