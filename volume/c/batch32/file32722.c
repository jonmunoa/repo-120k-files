// fichero 32722 -- macros y constantes -- MODIFICADO
#define LIMITE_32722 32922
#define FACTOR_32722 4

int aplicar_limite32722(int valor) {
    if (valor > LIMITE_32722) return LIMITE_32722;
    return valor * FACTOR_32722;
}
