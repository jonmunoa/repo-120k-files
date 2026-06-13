// fichero 41586 -- macros y constantes
#define LIMITE_41586 41686
#define FACTOR_41586 2

int aplicar_limite41586(int valor) {
    if (valor > LIMITE_41586) return LIMITE_41586;
    return valor * FACTOR_41586;
}
