// fichero 18118 -- macros y constantes -- MODIFICADO
#define LIMITE_18118 18318
#define FACTOR_18118 5

int aplicar_limite18118(int valor) {
    if (valor > LIMITE_18118) return LIMITE_18118;
    return valor * FACTOR_18118;
}
