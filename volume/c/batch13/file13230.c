// fichero 13230 -- macros y constantes
#define LIMITE_13230 13330
#define FACTOR_13230 1

int aplicar_limite13230(int valor) {
    if (valor > LIMITE_13230) return LIMITE_13230;
    return valor * FACTOR_13230;
}
