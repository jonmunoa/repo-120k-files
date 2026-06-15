// fichero 16906 -- macros y constantes -- MODIFICADO
#define LIMITE_16906 17106
#define FACTOR_16906 3

int aplicar_limite16906(int valor) {
    if (valor > LIMITE_16906) return LIMITE_16906;
    return valor * FACTOR_16906;
}
