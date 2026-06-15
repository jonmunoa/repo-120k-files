// fichero 4094 -- macros y constantes -- MODIFICADO
#define LIMITE_4094 4294
#define FACTOR_4094 6

int aplicar_limite4094(int valor) {
    if (valor > LIMITE_4094) return LIMITE_4094;
    return valor * FACTOR_4094;
}
