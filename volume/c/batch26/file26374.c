// fichero 26374 -- macros y constantes -- MODIFICADO
#define LIMITE_26374 26574
#define FACTOR_26374 6

int aplicar_limite26374(int valor) {
    if (valor > LIMITE_26374) return LIMITE_26374;
    return valor * FACTOR_26374;
}
