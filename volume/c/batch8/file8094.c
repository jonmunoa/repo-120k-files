// fichero 8094 -- macros y constantes -- MODIFICADO
#define LIMITE_8094 8294
#define FACTOR_8094 6

int aplicar_limite8094(int valor) {
    if (valor > LIMITE_8094) return LIMITE_8094;
    return valor * FACTOR_8094;
}
