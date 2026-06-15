// fichero 39094 -- macros y constantes -- MODIFICADO
#define LIMITE_39094 39294
#define FACTOR_39094 6

int aplicar_limite39094(int valor) {
    if (valor > LIMITE_39094) return LIMITE_39094;
    return valor * FACTOR_39094;
}
