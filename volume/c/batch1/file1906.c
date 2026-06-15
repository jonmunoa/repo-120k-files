// fichero 1906 -- macros y constantes -- MODIFICADO
#define LIMITE_1906 2106
#define FACTOR_1906 3

int aplicar_limite1906(int valor) {
    if (valor > LIMITE_1906) return LIMITE_1906;
    return valor * FACTOR_1906;
}
