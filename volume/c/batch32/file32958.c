// fichero 32958 -- macros y constantes -- MODIFICADO
#define LIMITE_32958 33158
#define FACTOR_32958 5

int aplicar_limite32958(int valor) {
    if (valor > LIMITE_32958) return LIMITE_32958;
    return valor * FACTOR_32958;
}
