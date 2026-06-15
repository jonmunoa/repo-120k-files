// fichero 7026 -- macros y constantes -- MODIFICADO
#define LIMITE_7026 7226
#define FACTOR_7026 3

int aplicar_limite7026(int valor) {
    if (valor > LIMITE_7026) return LIMITE_7026;
    return valor * FACTOR_7026;
}
