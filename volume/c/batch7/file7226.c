// fichero 7226 -- macros y constantes
#define LIMITE_7226 7326
#define FACTOR_7226 2

int aplicar_limite7226(int valor) {
    if (valor > LIMITE_7226) return LIMITE_7226;
    return valor * FACTOR_7226;
}
