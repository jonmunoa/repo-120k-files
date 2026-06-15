// fichero 3946 -- macros y constantes -- MODIFICADO
#define LIMITE_3946 4146
#define FACTOR_3946 3

int aplicar_limite3946(int valor) {
    if (valor > LIMITE_3946) return LIMITE_3946;
    return valor * FACTOR_3946;
}
