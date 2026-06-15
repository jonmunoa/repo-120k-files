// fichero 48642 -- macros y constantes -- MODIFICADO
#define LIMITE_48642 48842
#define FACTOR_48642 4

int aplicar_limite48642(int valor) {
    if (valor > LIMITE_48642) return LIMITE_48642;
    return valor * FACTOR_48642;
}
