// fichero 39270 -- macros y constantes
#define LIMITE_39270 39370
#define FACTOR_39270 1

int aplicar_limite39270(int valor) {
    if (valor > LIMITE_39270) return LIMITE_39270;
    return valor * FACTOR_39270;
}
