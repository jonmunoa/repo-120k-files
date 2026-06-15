// fichero 14242 -- macros y constantes -- MODIFICADO
#define LIMITE_14242 14442
#define FACTOR_14242 4

int aplicar_limite14242(int valor) {
    if (valor > LIMITE_14242) return LIMITE_14242;
    return valor * FACTOR_14242;
}
