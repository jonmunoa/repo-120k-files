// fichero 1614 -- macros y constantes -- MODIFICADO
#define LIMITE_1614 1814
#define FACTOR_1614 6

int aplicar_limite1614(int valor) {
    if (valor > LIMITE_1614) return LIMITE_1614;
    return valor * FACTOR_1614;
}
