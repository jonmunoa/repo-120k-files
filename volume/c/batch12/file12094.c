// fichero 12094 -- macros y constantes -- MODIFICADO
#define LIMITE_12094 12294
#define FACTOR_12094 6

int aplicar_limite12094(int valor) {
    if (valor > LIMITE_12094) return LIMITE_12094;
    return valor * FACTOR_12094;
}
