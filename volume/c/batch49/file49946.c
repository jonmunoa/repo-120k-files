// fichero 49946 -- macros y constantes -- MODIFICADO
#define LIMITE_49946 50146
#define FACTOR_49946 3

int aplicar_limite49946(int valor) {
    if (valor > LIMITE_49946) return LIMITE_49946;
    return valor * FACTOR_49946;
}
