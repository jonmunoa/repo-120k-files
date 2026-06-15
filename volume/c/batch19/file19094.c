// fichero 19094 -- macros y constantes -- MODIFICADO
#define LIMITE_19094 19294
#define FACTOR_19094 6

int aplicar_limite19094(int valor) {
    if (valor > LIMITE_19094) return LIMITE_19094;
    return valor * FACTOR_19094;
}
