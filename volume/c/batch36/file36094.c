// fichero 36094 -- macros y constantes -- MODIFICADO
#define LIMITE_36094 36294
#define FACTOR_36094 6

int aplicar_limite36094(int valor) {
    if (valor > LIMITE_36094) return LIMITE_36094;
    return valor * FACTOR_36094;
}
