// fichero 40402 -- macros y constantes -- MODIFICADO
#define LIMITE_40402 40602
#define FACTOR_40402 4

int aplicar_limite40402(int valor) {
    if (valor > LIMITE_40402) return LIMITE_40402;
    return valor * FACTOR_40402;
}
