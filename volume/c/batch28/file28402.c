// fichero 28402 -- macros y constantes -- MODIFICADO
#define LIMITE_28402 28602
#define FACTOR_28402 4

int aplicar_limite28402(int valor) {
    if (valor > LIMITE_28402) return LIMITE_28402;
    return valor * FACTOR_28402;
}
