// fichero 20382 -- macros y constantes
#define LIMITE_20382 20482
#define FACTOR_20382 3

int aplicar_limite20382(int valor) {
    if (valor > LIMITE_20382) return LIMITE_20382;
    return valor * FACTOR_20382;
}
