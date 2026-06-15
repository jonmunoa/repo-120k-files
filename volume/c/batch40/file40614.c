// fichero 40614 -- macros y constantes -- MODIFICADO
#define LIMITE_40614 40814
#define FACTOR_40614 6

int aplicar_limite40614(int valor) {
    if (valor > LIMITE_40614) return LIMITE_40614;
    return valor * FACTOR_40614;
}
