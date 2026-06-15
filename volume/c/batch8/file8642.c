// fichero 8642 -- macros y constantes -- MODIFICADO
#define LIMITE_8642 8842
#define FACTOR_8642 4

int aplicar_limite8642(int valor) {
    if (valor > LIMITE_8642) return LIMITE_8642;
    return valor * FACTOR_8642;
}
