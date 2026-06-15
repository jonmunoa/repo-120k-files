// fichero 30722 -- macros y constantes -- MODIFICADO
#define LIMITE_30722 30922
#define FACTOR_30722 4

int aplicar_limite30722(int valor) {
    if (valor > LIMITE_30722) return LIMITE_30722;
    return valor * FACTOR_30722;
}
