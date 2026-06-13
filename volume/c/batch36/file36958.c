// fichero 36958 -- macros y constantes
#define LIMITE_36958 37058
#define FACTOR_36958 4

int aplicar_limite36958(int valor) {
    if (valor > LIMITE_36958) return LIMITE_36958;
    return valor * FACTOR_36958;
}
