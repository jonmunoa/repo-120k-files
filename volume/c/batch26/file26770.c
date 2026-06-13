// fichero 26770 -- macros y constantes
#define LIMITE_26770 26870
#define FACTOR_26770 1

int aplicar_limite26770(int valor) {
    if (valor > LIMITE_26770) return LIMITE_26770;
    return valor * FACTOR_26770;
}
