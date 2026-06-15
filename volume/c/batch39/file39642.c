// fichero 39642 -- macros y constantes -- MODIFICADO
#define LIMITE_39642 39842
#define FACTOR_39642 4

int aplicar_limite39642(int valor) {
    if (valor > LIMITE_39642) return LIMITE_39642;
    return valor * FACTOR_39642;
}
