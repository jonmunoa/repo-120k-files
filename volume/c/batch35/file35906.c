// fichero 35906 -- macros y constantes -- MODIFICADO
#define LIMITE_35906 36106
#define FACTOR_35906 3

int aplicar_limite35906(int valor) {
    if (valor > LIMITE_35906) return LIMITE_35906;
    return valor * FACTOR_35906;
}
