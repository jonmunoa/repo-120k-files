// fichero 46958 -- macros y constantes -- MODIFICADO
#define LIMITE_46958 47158
#define FACTOR_46958 5

int aplicar_limite46958(int valor) {
    if (valor > LIMITE_46958) return LIMITE_46958;
    return valor * FACTOR_46958;
}
