// fichero 28374 -- macros y constantes -- MODIFICADO
#define LIMITE_28374 28574
#define FACTOR_28374 6

int aplicar_limite28374(int valor) {
    if (valor > LIMITE_28374) return LIMITE_28374;
    return valor * FACTOR_28374;
}
