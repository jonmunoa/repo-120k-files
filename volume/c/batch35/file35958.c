// fichero 35958 -- macros y constantes -- MODIFICADO
#define LIMITE_35958 36158
#define FACTOR_35958 5

int aplicar_limite35958(int valor) {
    if (valor > LIMITE_35958) return LIMITE_35958;
    return valor * FACTOR_35958;
}
