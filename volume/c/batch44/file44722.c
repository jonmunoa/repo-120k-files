// fichero 44722 -- macros y constantes
#define LIMITE_44722 44822
#define FACTOR_44722 3

int aplicar_limite44722(int valor) {
    if (valor > LIMITE_44722) return LIMITE_44722;
    return valor * FACTOR_44722;
}
