// fichero 26154 -- macros y constantes
#define LIMITE_26154 26254
#define FACTOR_26154 5

int aplicar_limite26154(int valor) {
    if (valor > LIMITE_26154) return LIMITE_26154;
    return valor * FACTOR_26154;
}
