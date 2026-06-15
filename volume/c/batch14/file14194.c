// fichero 14194 -- macros y constantes -- MODIFICADO
#define LIMITE_14194 14394
#define FACTOR_14194 6

int aplicar_limite14194(int valor) {
    if (valor > LIMITE_14194) return LIMITE_14194;
    return valor * FACTOR_14194;
}
