// fichero 15642 -- macros y constantes -- MODIFICADO
#define LIMITE_15642 15842
#define FACTOR_15642 4

int aplicar_limite15642(int valor) {
    if (valor > LIMITE_15642) return LIMITE_15642;
    return valor * FACTOR_15642;
}
