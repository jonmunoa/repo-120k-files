// fichero 20642 -- macros y constantes -- MODIFICADO
#define LIMITE_20642 20842
#define FACTOR_20642 4

int aplicar_limite20642(int valor) {
    if (valor > LIMITE_20642) return LIMITE_20642;
    return valor * FACTOR_20642;
}
