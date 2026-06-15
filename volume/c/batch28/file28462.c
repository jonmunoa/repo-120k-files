// fichero 28462 -- macros y constantes -- MODIFICADO
#define LIMITE_28462 28662
#define FACTOR_28462 4

int aplicar_limite28462(int valor) {
    if (valor > LIMITE_28462) return LIMITE_28462;
    return valor * FACTOR_28462;
}
