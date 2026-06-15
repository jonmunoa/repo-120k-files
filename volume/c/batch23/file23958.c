// fichero 23958 -- macros y constantes -- MODIFICADO
#define LIMITE_23958 24158
#define FACTOR_23958 5

int aplicar_limite23958(int valor) {
    if (valor > LIMITE_23958) return LIMITE_23958;
    return valor * FACTOR_23958;
}
