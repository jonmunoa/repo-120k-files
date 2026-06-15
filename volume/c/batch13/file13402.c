// fichero 13402 -- macros y constantes -- MODIFICADO
#define LIMITE_13402 13602
#define FACTOR_13402 4

int aplicar_limite13402(int valor) {
    if (valor > LIMITE_13402) return LIMITE_13402;
    return valor * FACTOR_13402;
}
