// fichero 26174 -- macros y constantes
#define LIMITE_26174 26274
#define FACTOR_26174 5

int aplicar_limite26174(int valor) {
    if (valor > LIMITE_26174) return LIMITE_26174;
    return valor * FACTOR_26174;
}
