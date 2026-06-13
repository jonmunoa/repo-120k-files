// fichero 26050 -- macros y constantes
#define LIMITE_26050 26150
#define FACTOR_26050 1

int aplicar_limite26050(int valor) {
    if (valor > LIMITE_26050) return LIMITE_26050;
    return valor * FACTOR_26050;
}
