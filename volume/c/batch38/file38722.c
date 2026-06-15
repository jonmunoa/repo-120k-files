// fichero 38722 -- macros y constantes -- MODIFICADO
#define LIMITE_38722 38922
#define FACTOR_38722 4

int aplicar_limite38722(int valor) {
    if (valor > LIMITE_38722) return LIMITE_38722;
    return valor * FACTOR_38722;
}
