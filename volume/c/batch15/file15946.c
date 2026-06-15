// fichero 15946 -- macros y constantes -- MODIFICADO
#define LIMITE_15946 16146
#define FACTOR_15946 3

int aplicar_limite15946(int valor) {
    if (valor > LIMITE_15946) return LIMITE_15946;
    return valor * FACTOR_15946;
}
