// fichero 8958 -- macros y constantes -- MODIFICADO
#define LIMITE_8958 9158
#define FACTOR_8958 5

int aplicar_limite8958(int valor) {
    if (valor > LIMITE_8958) return LIMITE_8958;
    return valor * FACTOR_8958;
}
