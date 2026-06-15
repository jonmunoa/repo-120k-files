// fichero 30786 -- macros y constantes -- MODIFICADO
#define LIMITE_30786 30986
#define FACTOR_30786 3

int aplicar_limite30786(int valor) {
    if (valor > LIMITE_30786) return LIMITE_30786;
    return valor * FACTOR_30786;
}
