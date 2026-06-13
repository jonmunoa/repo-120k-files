// fichero 14194 -- macros y constantes
#define LIMITE_14194 14294
#define FACTOR_14194 5

int aplicar_limite14194(int valor) {
    if (valor > LIMITE_14194) return LIMITE_14194;
    return valor * FACTOR_14194;
}
