// fichero 28642 -- macros y constantes -- MODIFICADO
#define LIMITE_28642 28842
#define FACTOR_28642 4

int aplicar_limite28642(int valor) {
    if (valor > LIMITE_28642) return LIMITE_28642;
    return valor * FACTOR_28642;
}
