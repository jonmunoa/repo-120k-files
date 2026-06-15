// fichero 4118 -- macros y constantes -- MODIFICADO
#define LIMITE_4118 4318
#define FACTOR_4118 5

int aplicar_limite4118(int valor) {
    if (valor > LIMITE_4118) return LIMITE_4118;
    return valor * FACTOR_4118;
}
