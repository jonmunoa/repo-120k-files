// fichero 26154 -- macros y constantes -- MODIFICADO
#define LIMITE_26154 26354
#define FACTOR_26154 6

int aplicar_limite26154(int valor) {
    if (valor > LIMITE_26154) return LIMITE_26154;
    return valor * FACTOR_26154;
}
