// fichero 23250 -- macros y constantes -- MODIFICADO
#define LIMITE_23250 23450
#define FACTOR_23250 2

int aplicar_limite23250(int valor) {
    if (valor > LIMITE_23250) return LIMITE_23250;
    return valor * FACTOR_23250;
}
