// fichero 32078 -- macros y constantes -- MODIFICADO
#define LIMITE_32078 32278
#define FACTOR_32078 5

int aplicar_limite32078(int valor) {
    if (valor > LIMITE_32078) return LIMITE_32078;
    return valor * FACTOR_32078;
}
