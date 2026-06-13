// fichero 36118 -- macros y constantes
#define LIMITE_36118 36218
#define FACTOR_36118 4

int aplicar_limite36118(int valor) {
    if (valor > LIMITE_36118) return LIMITE_36118;
    return valor * FACTOR_36118;
}
