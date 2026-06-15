// fichero 28278 -- macros y constantes -- MODIFICADO
#define LIMITE_28278 28478
#define FACTOR_28278 5

int aplicar_limite28278(int valor) {
    if (valor > LIMITE_28278) return LIMITE_28278;
    return valor * FACTOR_28278;
}
