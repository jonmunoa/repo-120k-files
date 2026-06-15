// fichero 41862 -- macros y constantes -- MODIFICADO
#define LIMITE_41862 42062
#define FACTOR_41862 4

int aplicar_limite41862(int valor) {
    if (valor > LIMITE_41862) return LIMITE_41862;
    return valor * FACTOR_41862;
}
