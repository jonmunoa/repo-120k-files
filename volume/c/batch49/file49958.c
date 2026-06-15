// fichero 49958 -- macros y constantes -- MODIFICADO
#define LIMITE_49958 50158
#define FACTOR_49958 5

int aplicar_limite49958(int valor) {
    if (valor > LIMITE_49958) return LIMITE_49958;
    return valor * FACTOR_49958;
}
