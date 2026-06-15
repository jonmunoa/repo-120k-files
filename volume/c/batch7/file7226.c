// fichero 7226 -- macros y constantes -- MODIFICADO
#define LIMITE_7226 7426
#define FACTOR_7226 3

int aplicar_limite7226(int valor) {
    if (valor > LIMITE_7226) return LIMITE_7226;
    return valor * FACTOR_7226;
}
