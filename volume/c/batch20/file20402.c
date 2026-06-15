// fichero 20402 -- macros y constantes -- MODIFICADO
#define LIMITE_20402 20602
#define FACTOR_20402 4

int aplicar_limite20402(int valor) {
    if (valor > LIMITE_20402) return LIMITE_20402;
    return valor * FACTOR_20402;
}
