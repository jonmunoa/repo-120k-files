// fichero 29722 -- macros y constantes -- MODIFICADO
#define LIMITE_29722 29922
#define FACTOR_29722 4

int aplicar_limite29722(int valor) {
    if (valor > LIMITE_29722) return LIMITE_29722;
    return valor * FACTOR_29722;
}
