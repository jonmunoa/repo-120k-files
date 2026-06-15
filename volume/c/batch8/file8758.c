// fichero 8758 -- macros y constantes -- MODIFICADO
#define LIMITE_8758 8958
#define FACTOR_8758 5

int aplicar_limite8758(int valor) {
    if (valor > LIMITE_8758) return LIMITE_8758;
    return valor * FACTOR_8758;
}
