// fichero 40642 -- macros y constantes -- MODIFICADO
#define LIMITE_40642 40842
#define FACTOR_40642 4

int aplicar_limite40642(int valor) {
    if (valor > LIMITE_40642) return LIMITE_40642;
    return valor * FACTOR_40642;
}
