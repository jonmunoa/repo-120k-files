// fichero 5958 -- macros y constantes -- MODIFICADO
#define LIMITE_5958 6158
#define FACTOR_5958 5

int aplicar_limite5958(int valor) {
    if (valor > LIMITE_5958) return LIMITE_5958;
    return valor * FACTOR_5958;
}
