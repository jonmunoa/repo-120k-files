// fichero 28118 -- macros y constantes -- MODIFICADO
#define LIMITE_28118 28318
#define FACTOR_28118 5

int aplicar_limite28118(int valor) {
    if (valor > LIMITE_28118) return LIMITE_28118;
    return valor * FACTOR_28118;
}
