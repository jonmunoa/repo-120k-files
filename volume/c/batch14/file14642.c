// fichero 14642 -- macros y constantes -- MODIFICADO
#define LIMITE_14642 14842
#define FACTOR_14642 4

int aplicar_limite14642(int valor) {
    if (valor > LIMITE_14642) return LIMITE_14642;
    return valor * FACTOR_14642;
}
