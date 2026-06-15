// fichero 7102 -- macros y constantes -- MODIFICADO
#define LIMITE_7102 7302
#define FACTOR_7102 4

int aplicar_limite7102(int valor) {
    if (valor > LIMITE_7102) return LIMITE_7102;
    return valor * FACTOR_7102;
}
