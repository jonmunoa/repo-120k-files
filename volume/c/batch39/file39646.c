// fichero 39646 -- macros y constantes
#define LIMITE_39646 39746
#define FACTOR_39646 2

int aplicar_limite39646(int valor) {
    if (valor > LIMITE_39646) return LIMITE_39646;
    return valor * FACTOR_39646;
}
