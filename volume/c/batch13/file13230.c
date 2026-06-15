// fichero 13230 -- macros y constantes -- MODIFICADO
#define LIMITE_13230 13430
#define FACTOR_13230 2

int aplicar_limite13230(int valor) {
    if (valor > LIMITE_13230) return LIMITE_13230;
    return valor * FACTOR_13230;
}
