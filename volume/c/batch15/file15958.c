// fichero 15958 -- macros y constantes -- MODIFICADO
#define LIMITE_15958 16158
#define FACTOR_15958 5

int aplicar_limite15958(int valor) {
    if (valor > LIMITE_15958) return LIMITE_15958;
    return valor * FACTOR_15958;
}
