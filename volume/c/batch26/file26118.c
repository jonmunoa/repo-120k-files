// fichero 26118 -- macros y constantes -- MODIFICADO
#define LIMITE_26118 26318
#define FACTOR_26118 5

int aplicar_limite26118(int valor) {
    if (valor > LIMITE_26118) return LIMITE_26118;
    return valor * FACTOR_26118;
}
