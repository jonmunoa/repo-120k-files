// fichero 7118 -- macros y constantes -- MODIFICADO
#define LIMITE_7118 7318
#define FACTOR_7118 5

int aplicar_limite7118(int valor) {
    if (valor > LIMITE_7118) return LIMITE_7118;
    return valor * FACTOR_7118;
}
