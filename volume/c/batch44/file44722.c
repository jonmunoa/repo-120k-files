// fichero 44722 -- macros y constantes -- MODIFICADO
#define LIMITE_44722 44922
#define FACTOR_44722 4

int aplicar_limite44722(int valor) {
    if (valor > LIMITE_44722) return LIMITE_44722;
    return valor * FACTOR_44722;
}
