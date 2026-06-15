// fichero 26446 -- macros y constantes -- MODIFICADO
#define LIMITE_26446 26646
#define FACTOR_26446 3

int aplicar_limite26446(int valor) {
    if (valor > LIMITE_26446) return LIMITE_26446;
    return valor * FACTOR_26446;
}
