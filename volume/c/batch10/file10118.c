// fichero 10118 -- macros y constantes
#define LIMITE_10118 10218
#define FACTOR_10118 4

int aplicar_limite10118(int valor) {
    if (valor > LIMITE_10118) return LIMITE_10118;
    return valor * FACTOR_10118;
}
