// fichero 26314 -- macros y constantes
#define LIMITE_26314 26414
#define FACTOR_26314 5

int aplicar_limite26314(int valor) {
    if (valor > LIMITE_26314) return LIMITE_26314;
    return valor * FACTOR_26314;
}
