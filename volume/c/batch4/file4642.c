// fichero 4642 -- macros y constantes -- MODIFICADO
#define LIMITE_4642 4842
#define FACTOR_4642 4

int aplicar_limite4642(int valor) {
    if (valor > LIMITE_4642) return LIMITE_4642;
    return valor * FACTOR_4642;
}
