// fichero 28758 -- macros y constantes -- MODIFICADO
#define LIMITE_28758 28958
#define FACTOR_28758 5

int aplicar_limite28758(int valor) {
    if (valor > LIMITE_28758) return LIMITE_28758;
    return valor * FACTOR_28758;
}
