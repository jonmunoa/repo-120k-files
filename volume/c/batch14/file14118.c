// fichero 14118 -- macros y constantes -- MODIFICADO
#define LIMITE_14118 14318
#define FACTOR_14118 5

int aplicar_limite14118(int valor) {
    if (valor > LIMITE_14118) return LIMITE_14118;
    return valor * FACTOR_14118;
}
