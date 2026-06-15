// fichero 1958 -- macros y constantes -- MODIFICADO
#define LIMITE_1958 2158
#define FACTOR_1958 5

int aplicar_limite1958(int valor) {
    if (valor > LIMITE_1958) return LIMITE_1958;
    return valor * FACTOR_1958;
}
