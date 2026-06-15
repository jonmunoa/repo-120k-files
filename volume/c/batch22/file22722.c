// fichero 22722 -- macros y constantes -- MODIFICADO
#define LIMITE_22722 22922
#define FACTOR_22722 4

int aplicar_limite22722(int valor) {
    if (valor > LIMITE_22722) return LIMITE_22722;
    return valor * FACTOR_22722;
}
