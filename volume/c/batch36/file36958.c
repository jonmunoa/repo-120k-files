// fichero 36958 -- macros y constantes -- MODIFICADO
#define LIMITE_36958 37158
#define FACTOR_36958 5

int aplicar_limite36958(int valor) {
    if (valor > LIMITE_36958) return LIMITE_36958;
    return valor * FACTOR_36958;
}
