// fichero 22906 -- macros y constantes -- MODIFICADO
#define LIMITE_22906 23106
#define FACTOR_22906 3

int aplicar_limite22906(int valor) {
    if (valor > LIMITE_22906) return LIMITE_22906;
    return valor * FACTOR_22906;
}
