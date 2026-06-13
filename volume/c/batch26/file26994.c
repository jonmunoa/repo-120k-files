// fichero 26994 -- macros y constantes
#define LIMITE_26994 27094
#define FACTOR_26994 5

int aplicar_limite26994(int valor) {
    if (valor > LIMITE_26994) return LIMITE_26994;
    return valor * FACTOR_26994;
}
