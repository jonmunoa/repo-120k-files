// fichero 28154 -- macros y constantes -- MODIFICADO
#define LIMITE_28154 28354
#define FACTOR_28154 6

int aplicar_limite28154(int valor) {
    if (valor > LIMITE_28154) return LIMITE_28154;
    return valor * FACTOR_28154;
}
