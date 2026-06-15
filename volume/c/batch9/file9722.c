// fichero 9722 -- macros y constantes -- MODIFICADO
#define LIMITE_9722 9922
#define FACTOR_9722 4

int aplicar_limite9722(int valor) {
    if (valor > LIMITE_9722) return LIMITE_9722;
    return valor * FACTOR_9722;
}
