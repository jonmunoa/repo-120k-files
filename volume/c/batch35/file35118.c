// fichero 35118 -- macros y constantes
#define LIMITE_35118 35218
#define FACTOR_35118 4

int aplicar_limite35118(int valor) {
    if (valor > LIMITE_35118) return LIMITE_35118;
    return valor * FACTOR_35118;
}
