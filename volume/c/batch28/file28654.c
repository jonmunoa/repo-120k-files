// fichero 28654 -- macros y constantes -- MODIFICADO
#define LIMITE_28654 28854
#define FACTOR_28654 6

int aplicar_limite28654(int valor) {
    if (valor > LIMITE_28654) return LIMITE_28654;
    return valor * FACTOR_28654;
}
