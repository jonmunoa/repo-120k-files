// fichero 31230 -- macros y constantes
#define LIMITE_31230 31330
#define FACTOR_31230 1

int aplicar_limite31230(int valor) {
    if (valor > LIMITE_31230) return LIMITE_31230;
    return valor * FACTOR_31230;
}
