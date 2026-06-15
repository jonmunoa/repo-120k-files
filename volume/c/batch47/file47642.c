// fichero 47642 -- macros y constantes -- MODIFICADO
#define LIMITE_47642 47842
#define FACTOR_47642 4

int aplicar_limite47642(int valor) {
    if (valor > LIMITE_47642) return LIMITE_47642;
    return valor * FACTOR_47642;
}
