// fichero 19642 -- macros y constantes -- MODIFICADO
#define LIMITE_19642 19842
#define FACTOR_19642 4

int aplicar_limite19642(int valor) {
    if (valor > LIMITE_19642) return LIMITE_19642;
    return valor * FACTOR_19642;
}
