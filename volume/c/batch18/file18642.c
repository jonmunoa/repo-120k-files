// fichero 18642 -- macros y constantes -- MODIFICADO
#define LIMITE_18642 18842
#define FACTOR_18642 4

int aplicar_limite18642(int valor) {
    if (valor > LIMITE_18642) return LIMITE_18642;
    return valor * FACTOR_18642;
}
