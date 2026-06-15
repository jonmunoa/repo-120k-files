// fichero 13722 -- macros y constantes -- MODIFICADO
#define LIMITE_13722 13922
#define FACTOR_13722 4

int aplicar_limite13722(int valor) {
    if (valor > LIMITE_13722) return LIMITE_13722;
    return valor * FACTOR_13722;
}
