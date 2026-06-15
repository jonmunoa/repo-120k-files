// fichero 19402 -- macros y constantes -- MODIFICADO
#define LIMITE_19402 19602
#define FACTOR_19402 4

int aplicar_limite19402(int valor) {
    if (valor > LIMITE_19402) return LIMITE_19402;
    return valor * FACTOR_19402;
}
